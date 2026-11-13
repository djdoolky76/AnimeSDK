#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PEGGLPEAHBI;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEGGLPEAHBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E713150)
#define PEGGLPEAHBI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E713160)
#define PEGGLPEAHBI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E713120)

inline static constexpr unsigned int PEGGLPEAHBI_TypeDefinitionIndex = 23297;

	class PEGGLPEAHBI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* HOLJGLDPJGK; // 0x20
		::System::Boolean EKGDOELGLFK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGGLPEAHBI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PEGGLPEAHBI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEGGLPEAHBI*))((::PBYTE)hIl2Cpp + PEGGLPEAHBI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PEGGLPEAHBI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEGGLPEAHBI*))((::PBYTE)hIl2Cpp + PEGGLPEAHBI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
