#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OFCMIIFENGK;
namespace RPG::GameCore { class TaskConfig; }

#define OFCMIIFENGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2661F0)
#define OFCMIIFENGK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D266200)
#define OFCMIIFENGK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2661C0)

inline static constexpr unsigned int OFCMIIFENGK_TypeDefinitionIndex = 10198;

	class OFCMIIFENGK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KEHEFLHCENE; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FENLJGPOGJP; // 0x20
		::System::Boolean DIOGHCPEMMB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCMIIFENGK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OFCMIIFENGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OFCMIIFENGK*))((::PBYTE)hIl2Cpp + OFCMIIFENGK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OFCMIIFENGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OFCMIIFENGK*))((::PBYTE)hIl2Cpp + OFCMIIFENGK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
