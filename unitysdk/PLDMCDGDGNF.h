#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PLDMCDGDGNF;
namespace RPG::GameCore { class TaskConfig; }

#define PLDMCDGDGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FEEA0)
#define PLDMCDGDGNF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FEEB0)
#define PLDMCDGDGNF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FEE70)

	class PLDMCDGDGNF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DAPMIHGAIOF; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NBICDNOLJCO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDMCDGDGNF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PLDMCDGDGNF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PLDMCDGDGNF*))((::PBYTE)hIl2Cpp + PLDMCDGDGNF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PLDMCDGDGNF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PLDMCDGDGNF*))((::PBYTE)hIl2Cpp + PLDMCDGDGNF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
