#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBCPGJBFLDG;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LDPOAPIPHIE_BMHDPJGONFF_OFFSET UNITYSDK_OFFSET(0xB645290)
#define LDPOAPIPHIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB644F90)
#define LDPOAPIPHIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB645040)
#define LDPOAPIPHIE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB645230)
#define LDPOAPIPHIE_NHEACEELNJF_OFFSET UNITYSDK_OFFSET(0xB645090)
#define LDPOAPIPHIE_NJMHKAKCIGK_OFFSET UNITYSDK_OFFSET(0xB645170)

inline static constexpr unsigned int LDPOAPIPHIE_TypeDefinitionIndex = 58972;

	class LDPOAPIPHIE : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::LBCPGJBFLDG*>* GEJCMLOAOBG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPOAPIPHIE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPOAPIPHIE_DISPOSE_OFFSET))(this);
		}

		::System::Void NHEACEELNJF(::LBCPGJBFLDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBCPGJBFLDG*))((::PBYTE)hIl2Cpp + LDPOAPIPHIE_NHEACEELNJF_OFFSET))(this, a1);
		}

		::System::Void NJMHKAKCIGK(::LBCPGJBFLDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBCPGJBFLDG*))((::PBYTE)hIl2Cpp + LDPOAPIPHIE_NJMHKAKCIGK_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDPOAPIPHIE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::LBCPGJBFLDG*>* BMHDPJGONFF()
		{
			return ((::System::Collections::Generic::HashSet_1<::LBCPGJBFLDG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPOAPIPHIE_BMHDPJGONFF_OFFSET))(this);
		}

	};
