#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNNPCBKMLIM.h"

class AAPCFDDBMJP;
class IHNJCJPPBIH;
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }

#define GJFDKBKHOEK_BLNAIDHHDLK_OFFSET UNITYSDK_OFFSET(0x1F8BEBE0)
#define GJFDKBKHOEK_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x1F8BEC30)
#define GJFDKBKHOEK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F8BEA60)
#define GJFDKBKHOEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BE9E0)

inline static constexpr unsigned int GJFDKBKHOEK_TypeDefinitionIndex = 18184;

class GJFDKBKHOEK : public ::DNNPCBKMLIM
{
public:
	::System::Void _ctor(::System::Reflection::PropertyInfo* BGJOPBCCMOC, ::AAPCFDDBMJP* DOOHCBBJGFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::AAPCFDDBMJP*))((::PBYTE)hIl2Cpp + GJFDKBKHOEK__CTOR_OFFSET))(this, BGJOPBCCMOC, DOOHCBBJGFD);
	}

	::System::Void PHOADBJGFBE(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + GJFDKBKHOEK_PHOADBJGFBE_OFFSET))(this, NAPFALLANDL);
	}

	::System::Boolean BLNAIDHHDLK(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + GJFDKBKHOEK_BLNAIDHHDLK_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void MBHJJNFNGPE(::IHNJCJPPBIH* NAPFALLANDL, ::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*, ::System::Object*))((::PBYTE)hIl2Cpp + GJFDKBKHOEK_MBHJJNFNGPE_OFFSET))(this, NAPFALLANDL, EGEGIMGMJHN);
	}
};
