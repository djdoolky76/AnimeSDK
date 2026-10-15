#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PLDMCDGDGNF;
namespace RPG::GameCore { class TaskConfig; }

#define PLDMCDGDGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D1390)
#define PLDMCDGDGNF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2D13A0)
#define PLDMCDGDGNF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2D1360)

inline static constexpr unsigned int PLDMCDGDGNF_TypeDefinitionIndex = 21456;

	class PLDMCDGDGNF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NBICDNOLJCO; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DAPMIHGAIOF; // 0x20
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
