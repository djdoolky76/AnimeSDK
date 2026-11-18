#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CINLPJBGEBK;
class DOGBOEKEHAG;
class IBFPPEJMHJK;
namespace System { template <typename T> class Comparison_1; }

#define JBFNGOIBGLE_FBEPKPEOJEL_LGHHPFIONCN_OFFSET UNITYSDK_OFFSET(0x1DB84A90)
#define JBFNGOIBGLE_FBEPKPEOJEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB84A80)

inline static constexpr unsigned int JBFNGOIBGLE_FBEPKPEOJEL_TypeDefinitionIndex = 93742;

class JBFNGOIBGLE_FBEPKPEOJEL : public ::System::Object
{
public:
	::System::Comparison_1<::CINLPJBGEBK*>* AMHGBGMOMLL; // 0x10
	::DOGBOEKEHAG* CPNBOFHKDIL; // 0x18
	::IBFPPEJMHJK* FKANFGDADAB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFNGOIBGLE_FBEPKPEOJEL__CTOR_OFFSET))(this);
	}

	::System::Int32 LGHHPFIONCN(::CINLPJBGEBK* EJCBEJMGFAJ, ::CINLPJBGEBK* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CINLPJBGEBK*, ::CINLPJBGEBK*))((::PBYTE)hIl2Cpp + JBFNGOIBGLE_FBEPKPEOJEL_LGHHPFIONCN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
