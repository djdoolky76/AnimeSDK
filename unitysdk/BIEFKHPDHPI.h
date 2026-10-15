#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class BIEFKHPDHPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define BIEFKHPDHPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D806E80)
#define BIEFKHPDHPI_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D807130)
#define BIEFKHPDHPI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D806EE0)
#define BIEFKHPDHPI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D806E00)

	class BIEFKHPDHPI : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::DynamicFloat* CKFBELANALF; // 0x20
		::RPG::GameCore::TargetEvaluator* OLPAJJAEEHH; // 0x28
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x30
		::RPG::GameCore::HPDetailParamType IMOPHAJMIFO; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEFKHPDHPI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BIEFKHPDHPI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIEFKHPDHPI*))((::PBYTE)hIl2Cpp + BIEFKHPDHPI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BIEFKHPDHPI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIEFKHPDHPI*))((::PBYTE)hIl2Cpp + BIEFKHPDHPI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEFKHPDHPI_GETDYNAMICKEY_OFFSET))(this);
		}

	};
