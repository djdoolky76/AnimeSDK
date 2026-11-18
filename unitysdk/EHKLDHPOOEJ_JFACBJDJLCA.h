#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OGGDNMKMCCL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define EHKLDHPOOEJ_JFACBJDJLCA_DJDEAMIDJDH_OFFSET UNITYSDK_OFFSET(0x14A964C0)
#define EHKLDHPOOEJ_JFACBJDJLCA__CTOR_OFFSET UNITYSDK_OFFSET(0x14A964B0)

inline static constexpr unsigned int EHKLDHPOOEJ_JFACBJDJLCA_TypeDefinitionIndex = 62614;

class EHKLDHPOOEJ_JFACBJDJLCA : public ::System::Object
{
public:
	::OGGDNMKMCCL* MKNHFPCJHLH; // 0x10
	::System::Func_2<::OGGDNMKMCCL*, ::System::Boolean>* AMHGBGMOMLL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLDHPOOEJ_JFACBJDJLCA__CTOR_OFFSET))(this);
	}

	::System::Boolean DJDEAMIDJDH(::OGGDNMKMCCL* MDLNMDJMMJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OGGDNMKMCCL*))((::PBYTE)hIl2Cpp + EHKLDHPOOEJ_JFACBJDJLCA_DJDEAMIDJDH_OFFSET))(this, MDLNMDJMMJP);
	}
};
