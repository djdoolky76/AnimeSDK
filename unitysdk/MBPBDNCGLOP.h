#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }

#define MBPBDNCGLOP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15E1C660)
#define MBPBDNCGLOP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15E1C890)
#define MBPBDNCGLOP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15E1C800)
#define MBPBDNCGLOP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15E1C570)
#define MBPBDNCGLOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E1C6B0)
#define MBPBDNCGLOP__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1C730)

inline static constexpr unsigned int MBPBDNCGLOP_TypeDefinitionIndex = 39352;

class MBPBDNCGLOP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x3C; // 0x0
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Single>* AJIKBEHPCLE; // 0x48
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* DMKKMHMBMDD; // 0x50
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Single>* LNOEBPEODNB; // 0x58
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Single>* KCPDLPHINCK; // 0x60
	::System::Single PFJMGHLBLJC; // 0x68
	::System::Single OICMMHBBJCE; // 0x6C
	::System::Single DGLKOIPKAGJ; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPBDNCGLOP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPBDNCGLOP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPBDNCGLOP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPBDNCGLOP_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPBDNCGLOP_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MBPBDNCGLOP* JFDOOELFAOA()
	{
		return ((::MBPBDNCGLOP*(*)())((::PBYTE)hIl2Cpp + MBPBDNCGLOP_JFDOOELFAOA_OFFSET))();
	}
};
