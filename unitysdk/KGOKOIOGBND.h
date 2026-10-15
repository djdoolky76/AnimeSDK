#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KGOKOIOGBND;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGOKOIOGBND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D090F90)
#define KGOKOIOGBND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D090FA0)
#define KGOKOIOGBND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D090F60)

inline static constexpr unsigned int KGOKOIOGBND_TypeDefinitionIndex = 22729;

	class KGOKOIOGBND : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* NFPGAMINPLM; // 0x18
		::System::String* FHLJGDGMMHK; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* PBLCIKOCKPB; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOKOIOGBND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KGOKOIOGBND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KGOKOIOGBND*))((::PBYTE)hIl2Cpp + KGOKOIOGBND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KGOKOIOGBND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KGOKOIOGBND*))((::PBYTE)hIl2Cpp + KGOKOIOGBND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
