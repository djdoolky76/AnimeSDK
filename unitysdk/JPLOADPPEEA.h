#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JPLOADPPEEA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17B5E5F0)
#define JPLOADPPEEA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17B5E820)
#define JPLOADPPEEA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17B5E790)
#define JPLOADPPEEA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17B5E560)
#define JPLOADPPEEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B5E640)
#define JPLOADPPEEA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5E6C0)

inline static constexpr unsigned int JPLOADPPEEA_TypeDefinitionIndex = 76771;

class JPLOADPPEEA : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xD0; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* IKOJOFGAMGD; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPLOADPPEEA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLOADPPEEA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLOADPPEEA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLOADPPEEA_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLOADPPEEA_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::JPLOADPPEEA* JFDOOELFAOA()
	{
		return ((::JPLOADPPEEA*(*)())((::PBYTE)hIl2Cpp + JPLOADPPEEA_JFDOOELFAOA_OFFSET))();
	}
};
