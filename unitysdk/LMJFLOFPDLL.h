#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
class LMJFLOFPDLL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define LMJFLOFPDLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E312CC0)
#define LMJFLOFPDLL_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E312E80)
#define LMJFLOFPDLL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E312CD0)
#define LMJFLOFPDLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E312C90)

inline static constexpr unsigned int LMJFLOFPDLL_TypeDefinitionIndex = 23366;

	class LMJFLOFPDLL : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::TargetEvaluator* OLPAJJAEEHH; // 0x20
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJFLOFPDLL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LMJFLOFPDLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LMJFLOFPDLL*))((::PBYTE)hIl2Cpp + LMJFLOFPDLL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LMJFLOFPDLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LMJFLOFPDLL*))((::PBYTE)hIl2Cpp + LMJFLOFPDLL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJFLOFPDLL_GETDYNAMICKEY_OFFSET))(this);
		}

	};
