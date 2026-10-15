#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PNLFNBPLLPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC345C70)
#define PNLFNBPLLPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC345CB0)
#define PNLFNBPLLPC___C___TRYUPDATECACHEDPLANRESULTRELICUID_B__14_0_OFFSET UNITYSDK_OFFSET(0xC345CC0)

inline static constexpr unsigned int PNLFNBPLLPC___c_TypeDefinitionIndex = 74394;

	class PNLFNBPLLPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70090);
		}

		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNLFNBPLLPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNBPLLPC___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __TryUpdateCachedPlanResultRelicUID_b__14_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + PNLFNBPLLPC___C___TRYUPDATECACHEDPLANRESULTRELICUID_B__14_0_OFFSET))(this, a1);
		}

	};
