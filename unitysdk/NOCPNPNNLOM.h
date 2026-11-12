#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NOCPNPNNLOM;

#define NOCPNPNNLOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E445CE0)
#define NOCPNPNNLOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E445CF0)
#define NOCPNPNNLOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E445CB0)

inline static constexpr unsigned int NOCPNPNNLOM_TypeDefinitionIndex = 21951;

	class NOCPNPNNLOM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* KPHIIIDGLEB; // 0x18
		::Il2CppArray<::System::UInt32>* CBBDEODGNDG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCPNPNNLOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NOCPNPNNLOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOCPNPNNLOM*))((::PBYTE)hIl2Cpp + NOCPNPNNLOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NOCPNPNNLOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOCPNPNNLOM*))((::PBYTE)hIl2Cpp + NOCPNPNNLOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
