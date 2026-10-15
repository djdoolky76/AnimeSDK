#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class CFPAENNGMMO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define CFPAENNGMMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBDD980)
#define CFPAENNGMMO_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DBDDD30)
#define CFPAENNGMMO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBDDA10)
#define CFPAENNGMMO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBDD8D0)

inline static constexpr unsigned int CFPAENNGMMO_TypeDefinitionIndex = 24200;

	class CFPAENNGMMO : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* CAAJDHDLEHI; // 0x20
		::RPG::GameCore::DynamicFloat* PBLCIKOCKPB; // 0x28
		::RPG::GameCore::TargetEvaluator* OLPAJJAEEHH; // 0x30
		::System::String* FHLJGDGMMHK; // 0x38
		::RPG::GameCore::NumOperationType PLPPPCEPBDO; // 0x40
		::RPG::GameCore::RtModifierPropertyType FODBMMCKAEN; // 0x44
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPAENNGMMO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CFPAENNGMMO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CFPAENNGMMO*))((::PBYTE)hIl2Cpp + CFPAENNGMMO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CFPAENNGMMO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CFPAENNGMMO*))((::PBYTE)hIl2Cpp + CFPAENNGMMO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPAENNGMMO_GETDYNAMICKEY_OFFSET))(this);
		}

	};
