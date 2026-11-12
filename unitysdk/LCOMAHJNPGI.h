#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetAliasTokenType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KBAALMJFHGC.h"
class JBAMLLPFKFF;

#define LCOMAHJNPGI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEAC490)
#define LCOMAHJNPGI_CTOR_OFFSET UNITYSDK_OFFSET(0xBEACDF0)
#define LCOMAHJNPGI_HKCBKOMKBKC_OFFSET UNITYSDK_OFFSET(0xBEACD50)
#define LCOMAHJNPGI_KNJENGHDDGE_OFFSET UNITYSDK_OFFSET(0xBEACC20)
#define LCOMAHJNPGI_KPNCCPJADME_OFFSET UNITYSDK_OFFSET(0xBEACDA0)
#define LCOMAHJNPGI_MNBFBOHJIDB_OFFSET UNITYSDK_OFFSET(0xBEACCB0)
#define LCOMAHJNPGI_PPDKMFJCCBC_OFFSET UNITYSDK_OFFSET(0xBEACD00)

inline static constexpr unsigned int LCOMAHJNPGI_TypeDefinitionIndex = 60344;

	class LCOMAHJNPGI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::JBAMLLPFKFF*>** StaticGet_KMJGIIAAALL()
		{
			return (::Il2CppArray<::JBAMLLPFKFF*>**)UnitySDK::FromName("", "LCOMAHJNPGI")->GetStaticField(0x55130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCOMAHJNPGI_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOMAHJNPGI_CTOR_OFFSET))(this);
		}

		static ::JBAMLLPFKFF* KNJENGHDDGE(::RPG::GameCore::TargetAliasTokenType a1)
		{
			return ((::JBAMLLPFKFF*(*)(::RPG::GameCore::TargetAliasTokenType))((::PBYTE)hIl2Cpp + LCOMAHJNPGI_KNJENGHDDGE_OFFSET))(a1);
		}

		static ::System::Void MNBFBOHJIDB(::KBAALMJFHGC a1)
		{
			return ((::System::Void(*)(::KBAALMJFHGC))((::PBYTE)hIl2Cpp + LCOMAHJNPGI_MNBFBOHJIDB_OFFSET))(a1);
		}

		static ::System::Void PPDKMFJCCBC(::KBAALMJFHGC a1)
		{
			return ((::System::Void(*)(::KBAALMJFHGC))((::PBYTE)hIl2Cpp + LCOMAHJNPGI_PPDKMFJCCBC_OFFSET))(a1);
		}

		static ::System::Void HKCBKOMKBKC(::KBAALMJFHGC a1)
		{
			return ((::System::Void(*)(::KBAALMJFHGC))((::PBYTE)hIl2Cpp + LCOMAHJNPGI_HKCBKOMKBKC_OFFSET))(a1);
		}

		static ::System::Void KPNCCPJADME(::KBAALMJFHGC a1)
		{
			return ((::System::Void(*)(::KBAALMJFHGC))((::PBYTE)hIl2Cpp + LCOMAHJNPGI_KPNCCPJADME_OFFSET))(a1);
		}

	};
