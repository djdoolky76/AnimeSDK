#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TVGroupTextureSheetBehaviour_AFIPABECNMA.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class BCMOBJBBANP;
class HGJEMIBOFNI;
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17E7A560)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_BEGFANEFBNO_OFFSET UNITYSDK_OFFSET(0x17E7B350)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_BOMCDOPPMMM_OFFSET UNITYSDK_OFFSET(0x17E7B960)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_CFBKIHLFOHL_OFFSET UNITYSDK_OFFSET(0x17E7B920)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_DIJKLJLGCNJ_OFFSET UNITYSDK_OFFSET(0x17E7B2A0)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_EPJMGFBMKMN_OFFSET UNITYSDK_OFFSET(0x17E7CB20)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_GHLJOMAOCOM_OFFSET UNITYSDK_OFFSET(0x17E7CC20)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_GPKDFLMPCIB_OFFSET UNITYSDK_OFFSET(0x17E7BA70)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_IMAOHHAKLKH_OFFSET UNITYSDK_OFFSET(0x17E7B250)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_JLFNMJLIKCN_OFFSET UNITYSDK_OFFSET(0x17E7C740)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x17E7A150)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_LLKOGBAFNFK_OFFSET UNITYSDK_OFFSET(0x17E7B880)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_LONIECGEGFC_OFFSET UNITYSDK_OFFSET(0x17E7B9C0)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_NKICNBAPBPO_OFFSET UNITYSDK_OFFSET(0x17E7C370)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17E79630)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x17E7CB10)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x17E7CB70)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_PNKKEJALEHJ_OFFSET UNITYSDK_OFFSET(0x17E7BF80)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E79F20)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17E79F10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVGroupTextureSheetBehaviour_TypeDefinitionIndex = 79202;

	class TVGroupTextureSheetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVGroupTextureSheetBehaviour*>*>** StaticGet_moviePlayerMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVGroupTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x34B80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVGroupTextureSheetBehaviour*>*>** StaticGet_textureSheetMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVGroupTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x34B88);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_originalSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x34B90);
		}
		static ::System::String** StaticGet_TvIconTextureSheetRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x34B98);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_editorSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x34BA0);
		}
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::Il2CppArray<::System::String*>* sharedMaterialPathes; // 0x20
		::MoleMole::Timeline::TVGroupTextureSheetBehaviour_AFIPABECNMA displayEnum; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* videoPath; // 0x30
		::System::Boolean videoLoop; // 0x38
		::System::Byte _padding1[0x3];
		::System::Int32 sheetTemplateID; // 0x3C
		::UnityEngine::Texture2D* screenMapTexture; // 0x40
		::MoleMole::TextureSheetData* textureSheetConfig; // 0x48
		::Il2CppArray<::BCMOBJBBANP*>* textureSheetAnimations; // 0x50
		::Il2CppArray<::HGJEMIBOFNI*>* moviePlayers; // 0x58
		::MoleMole::TextureSheetData* textureAssetConfig; // 0x60
		::System::Boolean isPlaying; // 0x68
		::System::Byte _padding2[0x3];
		::System::Single currentPlayTime; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void LCJEELHBNHG(::System::Single BNNJPOCBAIP, ::System::Single DGCKHHBEOHB, ::System::Single DMFJNIBPDPL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_LCJEELHBNHG_OFFSET))(this, BNNJPOCBAIP, DGCKHHBEOHB, DMFJNIBPDPL);
		}

		::System::Void IMAOHHAKLKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_IMAOHHAKLKH_OFFSET))(this);
		}

		::System::Void BEGFANEFBNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_BEGFANEFBNO_OFFSET))(this);
		}

		::System::Void CFBKIHLFOHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_CFBKIHLFOHL_OFFSET))(this);
		}

		::System::Void BOMCDOPPMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_BOMCDOPPMMM_OFFSET))(this);
		}

		::System::Boolean GPKDFLMPCIB(::System::Boolean IAKLMKMEHDF)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_GPKDFLMPCIB_OFFSET))(this, IAKLMKMEHDF);
		}

		::System::Void DIJKLJLGCNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_DIJKLJLGCNJ_OFFSET))(this);
		}

		::System::Void LLKOGBAFNFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_LLKOGBAFNFK_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_BBOMJDBNHIC_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void EPJMGFBMKMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_EPJMGFBMKMN_OFFSET))(this);
		}

		::System::Void PGHAJOMNDDJ(::System::Single BNNJPOCBAIP, ::System::Single DGCKHHBEOHB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_PGHAJOMNDDJ_OFFSET))(this, BNNJPOCBAIP, DGCKHHBEOHB);
		}

		::System::Boolean PNKKEJALEHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_PNKKEJALEHJ_OFFSET))(this);
		}

		::System::Void NKICNBAPBPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_NKICNBAPBPO_OFFSET))(this);
		}

		::System::Void JLFNMJLIKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_JLFNMJLIKCN_OFFSET))(this);
		}

		::System::Void GHLJOMAOCOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_GHLJOMAOCOM_OFFSET))(this);
		}

		::System::Void LONIECGEGFC(::System::Boolean IAKLMKMEHDF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_LONIECGEGFC_OFFSET))(this, IAKLMKMEHDF);
		}
	};
}
