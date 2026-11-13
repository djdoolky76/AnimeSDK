#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLIBGKGGEJL;
class ONIIPFNFOFB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONIIPFNFOFB_CTOR_OFFSET UNITYSDK_OFFSET(0x17D7F1A0)
#define ONIIPFNFOFB_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x17D7F260)
#define ONIIPFNFOFB_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x17D7F1B0)
#define ONIIPFNFOFB_KMJNGGGPJPF_OFFSET UNITYSDK_OFFSET(0x17D7F0E0)

inline static constexpr unsigned int ONIIPFNFOFB_TypeDefinitionIndex = 57197;

	class ONIIPFNFOFB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* PDABDEJBPEL; // 0x10
		::System::UInt32 NKDDBPGDAEE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIIPFNFOFB_CTOR_OFFSET))(this);
		}

		static ::ONIIPFNFOFB* KMJNGGGPJPF(::GLIBGKGGEJL* a1)
		{
			return ((::ONIIPFNFOFB*(*)(::GLIBGKGGEJL*))((::PBYTE)hIl2Cpp + ONIIPFNFOFB_KMJNGGGPJPF_OFFSET))(a1);
		}

		::GLIBGKGGEJL* HMPDCLHIPHI()
		{
			return ((::GLIBGKGGEJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIIPFNFOFB_HMPDCLHIPHI_OFFSET))(this);
		}

		::ONIIPFNFOFB* HEPPBBLLBPN()
		{
			return ((::ONIIPFNFOFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIIPFNFOFB_HEPPBBLLBPN_OFFSET))(this);
		}

	};
