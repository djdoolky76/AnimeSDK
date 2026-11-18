#pragma once
#include "unitysdk/unitysdk.h"

class KOHPAOOBMGD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOONDAGPBGP_MEPLHANEOMK_OFFSET UNITYSDK_OFFSET(0x102485D0)
#define DOONDAGPBGP_METHOD_2_OFFSET UNITYSDK_OFFSET(0x101F6130)
#define DOONDAGPBGP__CTOR_OFFSET UNITYSDK_OFFSET(0x101F6090)

inline static constexpr unsigned int DOONDAGPBGP_TypeDefinitionIndex = 22337;

class DOONDAGPBGP
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::KOHPAOOBMGD*>* Field_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOONDAGPBGP__CTOR_OFFSET))(this);
	}

	::System::Boolean MEPLHANEOMK(::System::UInt16 AMMJIOCMGKE, ::KOHPAOOBMGD*& PKOPHJANABJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::KOHPAOOBMGD*&))((::PBYTE)hIl2Cpp + DOONDAGPBGP_MEPLHANEOMK_OFFSET))(this, AMMJIOCMGKE, PKOPHJANABJ);
	}

	::System::Void Method_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOONDAGPBGP_METHOD_2_OFFSET))(this);
	}
};
