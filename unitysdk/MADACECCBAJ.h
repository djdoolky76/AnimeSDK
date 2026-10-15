#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MADACECCBAJ;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define MADACECCBAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D130620)
#define MADACECCBAJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D130630)
#define MADACECCBAJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1305E0)

	class MADACECCBAJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* KDIOGNHBJNP; // 0x18
		::RPG::GameCore::TargetEvaluator* EKNOCCGMJOF; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Boolean MPHPLIJADOF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADACECCBAJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MADACECCBAJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MADACECCBAJ*))((::PBYTE)hIl2Cpp + MADACECCBAJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MADACECCBAJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MADACECCBAJ*))((::PBYTE)hIl2Cpp + MADACECCBAJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
