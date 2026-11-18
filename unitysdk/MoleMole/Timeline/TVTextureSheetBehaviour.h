#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TVTextureSheetBehaviour_DisplayEnum.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class BCMOBJBBANP;
class HGJEMIBOFNI;
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x188275B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_BEGFANEFBNO_OFFSET UNITYSDK_OFFSET(0x188272F0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_BOMCDOPPMMM_OFFSET UNITYSDK_OFFSET(0x18828D60)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_CFBKIHLFOHL_OFFSET UNITYSDK_OFFSET(0x18826DA0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_DIJKLJLGCNJ_OFFSET UNITYSDK_OFFSET(0x18828850)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_EPJMGFBMKMN_OFFSET UNITYSDK_OFFSET(0x18828E40)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_GHLJOMAOCOM_OFFSET UNITYSDK_OFFSET(0x188272B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_GPKDFLMPCIB_OFFSET UNITYSDK_OFFSET(0x188288B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_IMAOHHAKLKH_OFFSET UNITYSDK_OFFSET(0x188287D0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_JLFNMJLIKCN_OFFSET UNITYSDK_OFFSET(0x18828100)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_LCCLFDBJAHG_OFFSET UNITYSDK_OFFSET(0x18827080)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x188283A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_LLKOGBAFNFK_OFFSET UNITYSDK_OFFSET(0x18827550)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_LONIECGEGFC_OFFSET UNITYSDK_OFFSET(0x18828CF0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_NKICNBAPBPO_OFFSET UNITYSDK_OFFSET(0x18826DE0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_OIMCBOMAODJ_OFFSET UNITYSDK_OFFSET(0x18828EE0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x188261E0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x18828B70)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x18828B80)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_PNKKEJALEHJ_OFFSET UNITYSDK_OFFSET(0x18826B70)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18826940)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18826930)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSheetBehaviour_TypeDefinitionIndex = 48725;

	class TVTextureSheetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>** StaticGet_textureSheetMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x41D70);
		}
		static ::System::String** StaticGet_TvIconTextureSheetRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x41D78);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>** StaticGet_moviePlayerMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x41D80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_editorSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x41D88);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_originalSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x41D90);
		}
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::Int32 materialIndex; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* sharedMaterialPath; // 0x28
		::MoleMole::Timeline::TVTextureSheetBehaviour_DisplayEnum displayEnum; // 0x30
		::System::Boolean IsFixframe; // 0x34
		::System::Byte _padding1[0x3];
		::System::String* videoPath; // 0x38
		::System::Boolean videoLoop; // 0x40
		::System::Byte _padding2[0x7];
		::System::String* textureSheetKey; // 0x48
		::BCMOBJBBANP* textureSheetAnimation; // 0x50
		::HGJEMIBOFNI* moviePlayer; // 0x58
		::MoleMole::TextureSheetData* templateConfig; // 0x60
		::System::Boolean isPlaying; // 0x68
		::System::Byte _padding3[0x3];
		::System::Single currentPlayTime; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Boolean PNKKEJALEHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_PNKKEJALEHJ_OFFSET))(this);
		}

		::System::Void CFBKIHLFOHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_CFBKIHLFOHL_OFFSET))(this);
		}

		::System::Void NKICNBAPBPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_NKICNBAPBPO_OFFSET))(this);
		}

		::UnityEngine::Material* LCCLFDBJAHG()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_LCCLFDBJAHG_OFFSET))(this);
		}

		::System::Void GHLJOMAOCOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_GHLJOMAOCOM_OFFSET))(this);
		}

		::System::Void BEGFANEFBNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_BEGFANEFBNO_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_BBOMJDBNHIC_OFFSET))(this);
		}

		::System::Void LCJEELHBNHG(::System::Single BNNJPOCBAIP, ::System::Single DGCKHHBEOHB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_LCJEELHBNHG_OFFSET))(this, BNNJPOCBAIP, DGCKHHBEOHB);
		}

		::System::Void IMAOHHAKLKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_IMAOHHAKLKH_OFFSET))(this);
		}

		::System::Boolean GPKDFLMPCIB(::System::Boolean IAKLMKMEHDF)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_GPKDFLMPCIB_OFFSET))(this, IAKLMKMEHDF);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void JLFNMJLIKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_JLFNMJLIKCN_OFFSET))(this);
		}

		::System::Void PGHAJOMNDDJ(::System::Single BNNJPOCBAIP, ::System::Single DGCKHHBEOHB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_PGHAJOMNDDJ_OFFSET))(this, BNNJPOCBAIP, DGCKHHBEOHB);
		}

		::System::Void BOMCDOPPMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_BOMCDOPPMMM_OFFSET))(this);
		}

		::System::Void LONIECGEGFC(::System::Boolean IAKLMKMEHDF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_LONIECGEGFC_OFFSET))(this, IAKLMKMEHDF);
		}

		::System::Void EPJMGFBMKMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_EPJMGFBMKMN_OFFSET))(this);
		}

		::System::Void LLKOGBAFNFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_LLKOGBAFNFK_OFFSET))(this);
		}

		::System::Collections::IEnumerable* OIMCBOMAODJ()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_OIMCBOMAODJ_OFFSET))(this);
		}

		::System::Void DIJKLJLGCNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_DIJKLJLGCNJ_OFFSET))(this);
		}
	};
}
