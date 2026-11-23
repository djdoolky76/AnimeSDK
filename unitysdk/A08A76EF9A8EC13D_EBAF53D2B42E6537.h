#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBB21DA78384CC14;
namespace UnityEngine { class Collider; }

#define A08A76EF9A8EC13D_EBAF53D2B42E6537_E723A25B2C0BB384_OFFSET UNITYSDK_OFFSET(0x19DA080)
#define A08A76EF9A8EC13D_EBAF53D2B42E6537__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A08A76EF9A8EC13D_EBAF53D2B42E6537_TypeDefinitionIndex = 1715;

class A08A76EF9A8EC13D_EBAF53D2B42E6537 : public ::System::Object
{
public:
	::EBB21DA78384CC14* A7F506C8D8CAA37A; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A08A76EF9A8EC13D_EBAF53D2B42E6537__CTOR_OFFSET))(this);
	}

	::System::Boolean E723A25B2C0BB384(::UnityEngine::Collider* EC35F88C87A83BEB)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + A08A76EF9A8EC13D_EBAF53D2B42E6537_E723A25B2C0BB384_OFFSET))(this, EC35F88C87A83BEB);
	}
};
