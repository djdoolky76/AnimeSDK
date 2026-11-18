#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AvatarTextureSheetBehaviour_DNMJLLAHMAF.h"
#include "unitysdk/MoleMole/Timeline/AvatarTextureSheetBehaviour_MAHGJEOIGGK.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class BCMOBJBBANP;
class CEDHMCAELMM;
class HGJEMIBOFNI;
namespace MoleMole::Timeline { class TextureSheetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13127230)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_BEGFANEFBNO_OFFSET UNITYSDK_OFFSET(0x13126FD0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_BOMCDOPPMMM_OFFSET UNITYSDK_OFFSET(0x13126EF0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_CFBKIHLFOHL_OFFSET UNITYSDK_OFFSET(0x13128000)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_DIJKLJLGCNJ_OFFSET UNITYSDK_OFFSET(0x13126760)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_EPJMGFBMKMN_OFFSET UNITYSDK_OFFSET(0x13126C90)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_GHLJOMAOCOM_OFFSET UNITYSDK_OFFSET(0x13126D30)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_GPKDFLMPCIB_OFFSET UNITYSDK_OFFSET(0x13126420)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_IMAOHHAKLKH_OFFSET UNITYSDK_OFFSET(0x131266E0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_JLFNMJLIKCN_OFFSET UNITYSDK_OFFSET(0x131269F0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x13128040)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_LLKOGBAFNFK_OFFSET UNITYSDK_OFFSET(0x13126350)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_LONIECGEGFC_OFFSET UNITYSDK_OFFSET(0x131263B0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_NKICNBAPBPO_OFFSET UNITYSDK_OFFSET(0x13127D60)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13125800)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x13126EE0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x13126D70)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_PNKKEJALEHJ_OFFSET UNITYSDK_OFFSET(0x131267C0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x13126220)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13126110)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AvatarTextureSheetBehaviour_TypeDefinitionIndex = 49233;

	class AvatarTextureSheetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::AvatarTextureSheetBehaviour*>*>** StaticGet_moviePlayerMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::AvatarTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x34B50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::AvatarTextureSheetBehaviour*>*>** StaticGet_textureSheetMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::AvatarTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x34B58);
		}
		static ::System::String** StaticGet_TvIconTextureSheetRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x34B60);
		}
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::String* sharedMaterialPath; // 0x20
		::System::Boolean IsFixframe; // 0x28
		::System::Byte _padding0[0x3];
		::MoleMole::Timeline::AvatarTextureSheetBehaviour_MAHGJEOIGGK displayEnum; // 0x2C
		::MoleMole::Timeline::AvatarTextureSheetBehaviour_DNMJLLAHMAF configEnum; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* videoPath; // 0x38
		::System::Boolean videoLoop; // 0x40
		::System::Byte _padding2[0x3];
		::System::Int32 sheetTemplateID; // 0x44
		::UnityEngine::Texture2D* screenMapTexture; // 0x48
		::MoleMole::Timeline::TextureSheetConfig* textureSheetConfig; // 0x50
		::BCMOBJBBANP* textureSheetAnimation; // 0x58
		::HGJEMIBOFNI* moviePlayer; // 0x60
		::CEDHMCAELMM* templateConfig; // 0x68
		::System::Boolean isPlaying; // 0x70
		::System::Byte _padding3[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* originalSharedMatMap; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* editorSharedMatMap; // 0x80
		::System::Single currentPlayTime; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void LLKOGBAFNFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_LLKOGBAFNFK_OFFSET))(this);
		}

		::System::Void LONIECGEGFC(::System::Boolean IAKLMKMEHDF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_LONIECGEGFC_OFFSET))(this, IAKLMKMEHDF);
		}

		::System::Void IMAOHHAKLKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_IMAOHHAKLKH_OFFSET))(this);
		}

		::System::Void DIJKLJLGCNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_DIJKLJLGCNJ_OFFSET))(this);
		}

		::System::Boolean GPKDFLMPCIB(::System::Boolean IAKLMKMEHDF)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_GPKDFLMPCIB_OFFSET))(this, IAKLMKMEHDF);
		}

		::System::Void JLFNMJLIKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_JLFNMJLIKCN_OFFSET))(this);
		}

		::System::Void EPJMGFBMKMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_EPJMGFBMKMN_OFFSET))(this);
		}

		::System::Void GHLJOMAOCOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_GHLJOMAOCOM_OFFSET))(this);
		}

		::System::Void PGHAJOMNDDJ(::System::Single BNNJPOCBAIP, ::System::Single DGCKHHBEOHB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_PGHAJOMNDDJ_OFFSET))(this, BNNJPOCBAIP, DGCKHHBEOHB);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void BOMCDOPPMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_BOMCDOPPMMM_OFFSET))(this);
		}

		::System::Void BEGFANEFBNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_BEGFANEFBNO_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_BBOMJDBNHIC_OFFSET))(this);
		}

		::System::Void CFBKIHLFOHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_CFBKIHLFOHL_OFFSET))(this);
		}

		::System::Void NKICNBAPBPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_NKICNBAPBPO_OFFSET))(this);
		}

		::System::Boolean PNKKEJALEHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_PNKKEJALEHJ_OFFSET))(this);
		}

		::System::Void LCJEELHBNHG(::System::Single BNNJPOCBAIP, ::System::Single DGCKHHBEOHB, ::System::Single DMFJNIBPDPL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_LCJEELHBNHG_OFFSET))(this, BNNJPOCBAIP, DGCKHHBEOHB, DMFJNIBPDPL);
		}
	};
}
