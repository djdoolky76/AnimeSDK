#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNNPCBKMLIM.h"

class AAPCFDDBMJP;
class IHNJCJPPBIH;
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class PropertyInfo; }

#define FNJOKMFJGEH_BLNAIDHHDLK_OFFSET UNITYSDK_OFFSET(0x1FB08CB0)
#define FNJOKMFJGEH_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x1FB08D10)
#define FNJOKMFJGEH_OFMJHKMAJJC_OFFSET UNITYSDK_OFFSET(0x1FB08AB0)
#define FNJOKMFJGEH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1FB08C50)
#define FNJOKMFJGEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB084D0)

inline static constexpr unsigned int FNJOKMFJGEH_TypeDefinitionIndex = 18124;

class FNJOKMFJGEH : public ::DNNPCBKMLIM
{
public:
	::System::Func_2<::IHNJCJPPBIH*, ::System::Boolean>* BNOLFEINGEF; // 0x20
	::System::Action_1<::IHNJCJPPBIH*>* FMPMFGPHODJ; // 0x28
	::System::Action_2<::IHNJCJPPBIH*, ::System::Object*>* JIHMNNGNJIP; // 0x30

	::System::Void _ctor(::System::Type* LGAKEEIFJLO, ::System::Reflection::PropertyInfo* BGJOPBCCMOC, ::AAPCFDDBMJP* DOOHCBBJGFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::PropertyInfo*, ::AAPCFDDBMJP*))((::PBYTE)hIl2Cpp + FNJOKMFJGEH__CTOR_OFFSET))(this, LGAKEEIFJLO, BGJOPBCCMOC, DOOHCBBJGFD);
	}

	::System::Void PHOADBJGFBE(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + FNJOKMFJGEH_PHOADBJGFBE_OFFSET))(this, NAPFALLANDL);
	}

	::System::Boolean BLNAIDHHDLK(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + FNJOKMFJGEH_BLNAIDHHDLK_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void MBHJJNFNGPE(::IHNJCJPPBIH* NAPFALLANDL, ::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*, ::System::Object*))((::PBYTE)hIl2Cpp + FNJOKMFJGEH_MBHJJNFNGPE_OFFSET))(this, NAPFALLANDL, EGEGIMGMJHN);
	}

	static ::System::Object* OFMJHKMAJJC(::AAPCFDDBMJP* DOOHCBBJGFD)
	{
		return ((::System::Object*(*)(::AAPCFDDBMJP*))((::PBYTE)hIl2Cpp + FNJOKMFJGEH_OFMJHKMAJJC_OFFSET))(DOOHCBBJGFD);
	}
};
