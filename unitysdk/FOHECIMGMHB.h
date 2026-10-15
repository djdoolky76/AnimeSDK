#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOHECIMGMHB;
namespace RPG::GameCore { class ChimeraEndlessWorkRoundRow; }

#define FOHECIMGMHB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158E0760)
#define FOHECIMGMHB_CTOR_OFFSET UNITYSDK_OFFSET(0x158E07C0)
#define FOHECIMGMHB_GET_ROUNDID_OFFSET UNITYSDK_OFFSET(0x158E07D0)
#define FOHECIMGMHB_HEGNPFDMAFG_OFFSET UNITYSDK_OFFSET(0x158E07F0)
#define FOHECIMGMHB_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0x158E0890)
#define FOHECIMGMHB_SET_ROUNDID_OFFSET UNITYSDK_OFFSET(0x158E07E0)

inline static constexpr unsigned int FOHECIMGMHB_TypeDefinitionIndex = 63422;

	class FOHECIMGMHB : public ::System::Object
	{
	public:
		::System::UInt32 _RoundID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHECIMGMHB_CTOR_OFFSET))(this);
		}

		static ::FOHECIMGMHB* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::FOHECIMGMHB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOHECIMGMHB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_RoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHECIMGMHB_GET_ROUNDID_OFFSET))(this);
		}

		::System::Void set_RoundID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHECIMGMHB_SET_ROUNDID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* HEGNPFDMAFG()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHECIMGMHB_HEGNPFDMAFG_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraEndlessWorkRoundRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::ChimeraEndlessWorkRoundRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHECIMGMHB_PDAENODHFCM_OFFSET))(this);
		}

	};
