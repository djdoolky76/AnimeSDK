#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AEBBINNDPFD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define AEBBINNDPFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC80010)
#define AEBBINNDPFD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CC80020)
#define AEBBINNDPFD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC7FFE0)

inline static constexpr unsigned int AEBBINNDPFD_TypeDefinitionIndex = 22325;

	class AEBBINNDPFD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AMHGLPIJMBN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBBINNDPFD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AEBBINNDPFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AEBBINNDPFD*))((::PBYTE)hIl2Cpp + AEBBINNDPFD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AEBBINNDPFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AEBBINNDPFD*))((::PBYTE)hIl2Cpp + AEBBINNDPFD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
