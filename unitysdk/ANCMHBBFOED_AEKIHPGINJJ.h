#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANCMHBBFOED;
class EAOMCKHAMBD;
class GAAJJLLEPDA;
namespace System { template <typename T1, typename T2> class Action_2; }

#define ANCMHBBFOED_AEKIHPGINJJ_EEOEJDNAFKM_OFFSET UNITYSDK_OFFSET(0x1422F5B0)
#define ANCMHBBFOED_AEKIHPGINJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1422F5A0)

inline static constexpr unsigned int ANCMHBBFOED_AEKIHPGINJJ_TypeDefinitionIndex = 55177;

class ANCMHBBFOED_AEKIHPGINJJ : public ::System::Object
{
public:
	::GAAJJLLEPDA* HEJIBNEHLIG; // 0x10
	::System::Action_2<::System::Boolean, ::EAOMCKHAMBD*>* NPFIONPDFED; // 0x18
	::ANCMHBBFOED* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AEKIHPGINJJ__CTOR_OFFSET))(this);
	}

	::System::Void EEOEJDNAFKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_AEKIHPGINJJ_EEOEJDNAFKM_OFFSET))(this);
	}
};
