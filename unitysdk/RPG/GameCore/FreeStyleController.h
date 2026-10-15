#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BPFKOIIMKBG.h"
#include "unitysdk/LKLOMEEPIEM.h"
class IMPNPPMLNPH;
class PAADPKGPFMJ;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace System { class Nullable; }

#define RPG_GAMECORE_FREESTYLECONTROLLER_AGPHBLGBODG_1_OFFSET UNITYSDK_OFFSET(0xE69D870)
#define RPG_GAMECORE_FREESTYLECONTROLLER_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0xE69F420)
#define RPG_GAMECORE_FREESTYLECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE69F190)
#define RPG_GAMECORE_FREESTYLECONTROLLER_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xE69F2A0)
#define RPG_GAMECORE_FREESTYLECONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE69F5E0)
#define RPG_GAMECORE_FREESTYLECONTROLLER_GEBGEEBFEIP_OFFSET UNITYSDK_OFFSET(0xE69F550)
#define RPG_GAMECORE_FREESTYLECONTROLLER_GET_INFO_OFFSET UNITYSDK_OFFSET(0xE69F1D0)
#define RPG_GAMECORE_FREESTYLECONTROLLER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xE69F1E0)
#define RPG_GAMECORE_FREESTYLECONTROLLER_INHHIGAOCNE_OFFSET UNITYSDK_OFFSET(0xE69F300)
#define RPG_GAMECORE_FREESTYLECONTROLLER_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE69F240)
#define RPG_GAMECORE_FREESTYLECONTROLLER_MAHCHECNLEP_OFFSET UNITYSDK_OFFSET(0xE69F4E0)
#define RPG_GAMECORE_FREESTYLECONTROLLER_NHJEMDBODLO_OFFSET UNITYSDK_OFFSET(0xE69F390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleController_TypeDefinitionIndex = 57274;

	class FreeStyleController : public ::System::Object
	{
	public:
		::PAADPKGPFMJ* _Instance; // 0x10
		::IMPNPPMLNPH* _Info_k__BackingField; // 0x18
		::RPG::GameCore::FreeStyleComponent* _Component; // 0x20
		::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_CTOR_OFFSET))(this, a1);
		}

		::IMPNPPMLNPH* get_Info()
		{
			return ((::IMPNPPMLNPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_GET_INFO_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void INHHIGAOCNE(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_INHHIGAOCNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHJEMDBODLO(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_NHJEMDBODLO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGPHBLGBODG(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_AGPHBLGBODG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGPHBLGBODG_1(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_AGPHBLGBODG_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MAHCHECNLEP(::System::Boolean a1, ::BPFKOIIMKBG a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BPFKOIIMKBG))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_MAHCHECNLEP_OFFSET))(this, a1, a2);
		}

		::System::Void GEBGEEBFEIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_GEBGEEBFEIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_DISPOSE_OFFSET))(this);
		}

	};
}
