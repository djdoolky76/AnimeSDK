#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGKNKCKLNBJ;
namespace UnityEngine { class Transform; }

#define MGKNKCKLNBJ_BJHMLENECKP_EBKGFPGKJCO_OFFSET UNITYSDK_OFFSET(0x177BD5F0)
#define MGKNKCKLNBJ_BJHMLENECKP_HCIMILMBLCK_OFFSET UNITYSDK_OFFSET(0x177BD3F0)
#define MGKNKCKLNBJ_BJHMLENECKP_NBEDBJBKCGO_OFFSET UNITYSDK_OFFSET(0x177BD460)
#define MGKNKCKLNBJ_BJHMLENECKP__CTOR_OFFSET UNITYSDK_OFFSET(0x177BD3E0)

inline static constexpr unsigned int MGKNKCKLNBJ_BJHMLENECKP_TypeDefinitionIndex = 83579;

class MGKNKCKLNBJ_BJHMLENECKP : public ::System::Object
{
public:
	::MGKNKCKLNBJ* KLHPEBKNIFB; // 0x10
	::System::Boolean EDHNNNPONGP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKNKCKLNBJ_BJHMLENECKP__CTOR_OFFSET))(this);
	}

	::System::Void HCIMILMBLCK(::UnityEngine::Transform* IBMHNNJOMMG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MGKNKCKLNBJ_BJHMLENECKP_HCIMILMBLCK_OFFSET))(this, IBMHNNJOMMG);
	}

	::System::Void NBEDBJBKCGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKNKCKLNBJ_BJHMLENECKP_NBEDBJBKCGO_OFFSET))(this);
	}

	::System::Void EBKGFPGKJCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKNKCKLNBJ_BJHMLENECKP_EBKGFPGKJCO_OFFSET))(this);
	}
};
