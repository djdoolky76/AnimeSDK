#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DNMCNKCMJBD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define DNMCNKCMJBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4CE60)
#define DNMCNKCMJBD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD4CE70)
#define DNMCNKCMJBD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD4CE30)

	class DNMCNKCMJBD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* KFEANGGPLGP; // 0x18
		::System::String* NHMCBAJHOLP; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::String* DPJIJDKJFJL; // 0x30
		::System::String* FHLJGDGMMHK; // 0x38
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMCNKCMJBD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DNMCNKCMJBD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNMCNKCMJBD*))((::PBYTE)hIl2Cpp + DNMCNKCMJBD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DNMCNKCMJBD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNMCNKCMJBD*))((::PBYTE)hIl2Cpp + DNMCNKCMJBD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
