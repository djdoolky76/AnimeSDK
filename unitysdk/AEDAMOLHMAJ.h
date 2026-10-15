#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class AEDAMOLHMAJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtSummonCharacterExtraDataBase; }
namespace RPG::GameCore { class TargetEvaluator; }

#define AEDAMOLHMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCAF300)
#define AEDAMOLHMAJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCAEFC0)

	class AEDAMOLHMAJ : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EPFPKBLIIOI; // 0x10
		::RPG::GameCore::RtSummonCharacterExtraDataBase* PDLNGNHJJEI; // 0x18
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DCLGGMAEMAO; // 0x20
		::RPG::GameCore::DynamicFloat* JIDLKIHJLFL; // 0x28
		::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x30
		::RPG::GameCore::TargetEvaluator* PPKKOLKCKOI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDAMOLHMAJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AEDAMOLHMAJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AEDAMOLHMAJ*))((::PBYTE)hIl2Cpp + AEDAMOLHMAJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
