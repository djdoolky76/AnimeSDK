#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define PPEFOOCOJED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC37DEE0)
#define PPEFOOCOJED___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC37DF10)
#define PPEFOOCOJED___C___PREPARETIPSDATA_B__4_0_OFFSET UNITYSDK_OFFSET(0xC37DF20)

inline static constexpr unsigned int PPEFOOCOJED___c_TypeDefinitionIndex = 62900;

	class PPEFOOCOJED___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::BattleFailureTipsConfigRow*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::BattleFailureTipsConfigRow*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC640);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPEFOOCOJED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEFOOCOJED___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __PrepareTipsData_b__4_0(::RPG::GameCore::BattleFailureTipsConfigRow* a1, ::RPG::GameCore::BattleFailureTipsConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleFailureTipsConfigRow*, ::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + PPEFOOCOJED___C___PREPARETIPSDATA_B__4_0_OFFSET))(this, a1, a2);
		}

	};
