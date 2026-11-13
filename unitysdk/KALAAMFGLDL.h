#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define KALAAMFGLDL_CTOR_OFFSET UNITYSDK_OFFSET(0x19DB35A0)
#define KALAAMFGLDL_GJDKBNKEDLG_OFFSET UNITYSDK_OFFSET(0x19DB3530)
#define KALAAMFGLDL_IJDOALAEJBB_OFFSET UNITYSDK_OFFSET(0x19DB33F0)
#define KALAAMFGLDL_LEHIOIDJPCI_OFFSET UNITYSDK_OFFSET(0x19DB3490)
#define KALAAMFGLDL_OMDBEJMGPCO_OFFSET UNITYSDK_OFFSET(0x19DB3350)

inline static constexpr unsigned int KALAAMFGLDL_TypeDefinitionIndex = 82954;

	class KALAAMFGLDL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAAMFGLDL_CTOR_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* OMDBEJMGPCO()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAAMFGLDL_OMDBEJMGPCO_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* IJDOALAEJBB()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAAMFGLDL_IJDOALAEJBB_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* LEHIOIDJPCI()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAAMFGLDL_LEHIOIDJPCI_OFFSET))(this);
		}

		::System::Void GJDKBNKEDLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAAMFGLDL_GJDKBNKEDLG_OFFSET))(this);
		}

	};
