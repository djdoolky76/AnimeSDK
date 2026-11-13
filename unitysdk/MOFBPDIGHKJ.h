#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
class MOFBPDIGHKJ;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetDynamicValueByCopyingBatchItem; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }

#define MOFBPDIGHKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8810E0)
#define MOFBPDIGHKJ_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E881370)
#define MOFBPDIGHKJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E881120)
#define MOFBPDIGHKJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E881080)

inline static constexpr unsigned int MOFBPDIGHKJ_TypeDefinitionIndex = 24282;

	class MOFBPDIGHKJ : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicString* DMOBBGFFGEB; // 0x18
		::Il2CppArray<::RPG::GameCore::SetDynamicValueByCopyingBatchItem*>* ODDCGJLJMNM; // 0x20
		::RPG::GameCore::TargetEvaluator* KCDLOAHLFAO; // 0x28
		::RPG::GameCore::TargetEvaluator* BFICDICDOFO; // 0x30
		::RPG::GameCore::DynamicValueContextScope JDLEDIOAPHJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFBPDIGHKJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MOFBPDIGHKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MOFBPDIGHKJ*))((::PBYTE)hIl2Cpp + MOFBPDIGHKJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MOFBPDIGHKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MOFBPDIGHKJ*))((::PBYTE)hIl2Cpp + MOFBPDIGHKJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFBPDIGHKJ_GETDYNAMICKEY_OFFSET))(this);
		}

	};
