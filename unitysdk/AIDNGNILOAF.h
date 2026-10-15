#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIDNGNILOAF_NIMOMCPNPMN;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIDNGNILOAF_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9C960)
#define AIDNGNILOAF_DGNJHLIELNK_OFFSET UNITYSDK_OFFSET(0xEB9C7C0)
#define AIDNGNILOAF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xEB9C730)

inline static constexpr unsigned int AIDNGNILOAF_TypeDefinitionIndex = 72940;

	class AIDNGNILOAF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* NFJDFOMJMDK; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* KJBFEAMFNCO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDNGNILOAF_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDNGNILOAF_KHGIKBFDLFB_OFFSET))(this);
		}

		::AIDNGNILOAF_NIMOMCPNPMN* DGNJHLIELNK(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::AIDNGNILOAF_NIMOMCPNPMN*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + AIDNGNILOAF_DGNJHLIELNK_OFFSET))(this, a1, a2);
		}

	};
