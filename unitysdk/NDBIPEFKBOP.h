#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class OnPreloadOperationDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NDBIPEFKBOP_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0xBB19630)
#define NDBIPEFKBOP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB19250)
#define NDBIPEFKBOP_EACDPDDBFFN_OFFSET UNITYSDK_OFFSET(0xBB195A0)
#define NDBIPEFKBOP_FLFNCOOPJFB_OFFSET UNITYSDK_OFFSET(0xBB198D0)
#define NDBIPEFKBOP_HABGKBDIJOG_OFFSET UNITYSDK_OFFSET(0xBB19C00)
#define NDBIPEFKBOP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB19E40)
#define NDBIPEFKBOP_OHONOHHMOMB_OFFSET UNITYSDK_OFFSET(0xBB193A0)

inline static constexpr unsigned int NDBIPEFKBOP_TypeDefinitionIndex = 59675;

	class NDBIPEFKBOP : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* NPOCGAAKACB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BDNBPNJJICG; // 0x18
		::System::Boolean CMGBCHMFAFF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBIPEFKBOP_CTOR_OFFSET))(this);
		}

		::System::Void OHONOHHMOMB(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NDBIPEFKBOP_OHONOHHMOMB_OFFSET))(this, a1, a2);
		}

		::System::Void EACDPDDBFFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBIPEFKBOP_EACDPDDBFFN_OFFSET))(this);
		}

		::System::Void BFLENEMBIBM(::System::Boolean a1, ::RPG::Client::GameObjectPoolUsage a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + NDBIPEFKBOP_BFLENEMBIBM_OFFSET))(this, a1, a2);
		}

		::System::Void FLFNCOOPJFB(::RPG::Client::OnPreloadOperationDelegate* a1, ::RPG::Client::GameObjectPoolUsage a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnPreloadOperationDelegate*, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + NDBIPEFKBOP_FLFNCOOPJFB_OFFSET))(this, a1, a2);
		}

		::System::Void HABGKBDIJOG(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NDBIPEFKBOP_HABGKBDIJOG_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBIPEFKBOP_HADOHLNHHGB_OFFSET))(this);
		}

	};
