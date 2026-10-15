#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
class IJJGPIPMNAE;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define IJJGPIPMNAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEAAB0)
#define IJJGPIPMNAE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1CEEACD0)
#define IJJGPIPMNAE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEEAAC0)
#define IJJGPIPMNAE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEEAA80)

inline static constexpr unsigned int IJJGPIPMNAE_TypeDefinitionIndex = 23375;

	class IJJGPIPMNAE : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::TargetEvaluator* OLPAJJAEEHH; // 0x20
		::RPG::GameCore::DynamicFloat* DKJFDABPLCO; // 0x28
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJGPIPMNAE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IJJGPIPMNAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJJGPIPMNAE*))((::PBYTE)hIl2Cpp + IJJGPIPMNAE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IJJGPIPMNAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJJGPIPMNAE*))((::PBYTE)hIl2Cpp + IJJGPIPMNAE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJGPIPMNAE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
