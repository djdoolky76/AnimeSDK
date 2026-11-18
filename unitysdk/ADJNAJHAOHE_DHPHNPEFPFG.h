#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NDGKNNGJHDE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define ADJNAJHAOHE_DHPHNPEFPFG_JFMNOFHKBID_OFFSET UNITYSDK_OFFSET(0x17CB9160)
#define ADJNAJHAOHE_DHPHNPEFPFG__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB9150)

inline static constexpr unsigned int ADJNAJHAOHE_DHPHNPEFPFG_TypeDefinitionIndex = 41401;

class ADJNAJHAOHE_DHPHNPEFPFG : public ::System::Object
{
public:
	::System::Func_2<::NDGKNNGJHDE*, ::System::Boolean>* KPDNJEDICCM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_DHPHNPEFPFG__CTOR_OFFSET))(this);
	}

	::System::Boolean JFMNOFHKBID(::NDGKNNGJHDE* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::NDGKNNGJHDE*))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_DHPHNPEFPFG_JFMNOFHKBID_OFFSET))(this, CBLGCIFLMKL);
	}
};
