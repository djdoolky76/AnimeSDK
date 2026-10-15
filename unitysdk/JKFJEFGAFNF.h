#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
class JKFJEFGAFNF;
namespace RPG::GameCore { class TaskConfig; }

#define JKFJEFGAFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D012810)
#define JKFJEFGAFNF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D012820)
#define JKFJEFGAFNF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0127D0)

inline static constexpr unsigned int JKFJEFGAFNF_TypeDefinitionIndex = 21296;

	class JKFJEFGAFNF : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LEAHACBFJBP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFJEFGAFNF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JKFJEFGAFNF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKFJEFGAFNF*))((::PBYTE)hIl2Cpp + JKFJEFGAFNF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JKFJEFGAFNF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKFJEFGAFNF*))((::PBYTE)hIl2Cpp + JKFJEFGAFNF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
