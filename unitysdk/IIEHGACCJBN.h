#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNNPCBKMLIM.h"

class AAPCFDDBMJP;
class IHNJCJPPBIH;
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }

#define IIEHGACCJBN_BLNAIDHHDLK_OFFSET UNITYSDK_OFFSET(0x1FA10620)
#define IIEHGACCJBN_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x1FA10670)
#define IIEHGACCJBN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1FA104A0)
#define IIEHGACCJBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA10420)

inline static constexpr unsigned int IIEHGACCJBN_TypeDefinitionIndex = 18271;

class IIEHGACCJBN : public ::DNNPCBKMLIM
{
public:
	::System::Void _ctor(::System::Reflection::PropertyInfo* BGJOPBCCMOC, ::AAPCFDDBMJP* DOOHCBBJGFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::AAPCFDDBMJP*))((::PBYTE)hIl2Cpp + IIEHGACCJBN__CTOR_OFFSET))(this, BGJOPBCCMOC, DOOHCBBJGFD);
	}

	::System::Void PHOADBJGFBE(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + IIEHGACCJBN_PHOADBJGFBE_OFFSET))(this, NAPFALLANDL);
	}

	::System::Boolean BLNAIDHHDLK(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + IIEHGACCJBN_BLNAIDHHDLK_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void MBHJJNFNGPE(::IHNJCJPPBIH* NAPFALLANDL, ::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*, ::System::Object*))((::PBYTE)hIl2Cpp + IIEHGACCJBN_MBHJJNFNGPE_OFFSET))(this, NAPFALLANDL, EGEGIMGMJHN);
	}
};
