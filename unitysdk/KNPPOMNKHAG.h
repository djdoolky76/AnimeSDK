#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KNPPOMNKHAG_FHCHJJKKCDG_OFFSET UNITYSDK_OFFSET(0x78CDF0)
#define KNPPOMNKHAG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x78CD70)
#define KNPPOMNKHAG_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x78CDC0)

inline static constexpr unsigned int KNPPOMNKHAG_TypeDefinitionIndex = 42409;

struct alignas(8) KNPPOMNKHAG
{
	// static const ::System::Int32 BOKIMFHDLKO = 0x5; // 0x0
	::Il2CppArray<::UnityEngine::Vector3>* OKDGLNABBAN; // 0x10
	::Il2CppArray<::System::Single>* KOALIPMCKLI; // 0x18
	::System::Int32 OGFPEPEEHLP; // 0x20
	::System::Int32 AOJAMJCLNAN; // 0x24
	::System::Single BMJBDKMOOLM; // 0x28

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPPOMNKHAG_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::Vector3 OKJCHFGIKBH(::UnityEngine::Vector3 NAFPOHLLAID, ::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + KNPPOMNKHAG_OKJCHFGIKBH_OFFSET))(this, NAFPOHLLAID, PMNLNNGEIFM);
	}

	::System::Boolean FHCHJJKKCDG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPPOMNKHAG_FHCHJJKKCDG_OFFSET))(this);
	}
};
