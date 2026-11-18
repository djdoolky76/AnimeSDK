#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAPCFDDBMJP;
class IHNJCJPPBIH;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class PropertyInfo; }

#define DNNPCBKMLIM_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x1FA61FC0)
#define DNNPCBKMLIM_HBDBJDANMLP_OFFSET UNITYSDK_OFFSET(0x1FA61FB0)
#define DNNPCBKMLIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA61F30)

inline static constexpr unsigned int DNNPCBKMLIM_TypeDefinitionIndex = 18285;

class DNNPCBKMLIM : public ::System::Object
{
public:
	::AAPCFDDBMJP* DOOHCBBJGFD; // 0x10
	::System::Func_2<::IHNJCJPPBIH*, ::System::Object*>* HCOAEFEPGLC; // 0x18

	::System::Void _ctor(::System::Reflection::PropertyInfo* BGJOPBCCMOC, ::AAPCFDDBMJP* DOOHCBBJGFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::AAPCFDDBMJP*))((::PBYTE)hIl2Cpp + DNNPCBKMLIM__CTOR_OFFSET))(this, BGJOPBCCMOC, DOOHCBBJGFD);
	}

	::AAPCFDDBMJP* HBDBJDANMLP()
	{
		return ((::AAPCFDDBMJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNPCBKMLIM_HBDBJDANMLP_OFFSET))(this);
	}

	::System::Object* FHDJDIIPGGP(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Object*(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + DNNPCBKMLIM_FHDJDIIPGGP_OFFSET))(this, NAPFALLANDL);
	}
};
