#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F0869A6D6E215C5E_B666AA917A0169FB;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define F0869A6D6E215C5E_ACC434988A04202F_E0D455E06ABFA0A6_OFFSET UNITYSDK_OFFSET(0x2A5FF00)
#define F0869A6D6E215C5E_ACC434988A04202F__CTOR_OFFSET UNITYSDK_OFFSET(0x2A60210)

inline static constexpr unsigned int F0869A6D6E215C5E_ACC434988A04202F_TypeDefinitionIndex = 18435;

class F0869A6D6E215C5E_ACC434988A04202F : public ::System::Object
{
public:
	::F0869A6D6E215C5E_B666AA917A0169FB* B305282FBBA723F6; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* B1F901C7F4996120; // 0x18

	::System::Void E0D455E06ABFA0A6(::System::Single FF0A37159A523E06, ::System::Boolean BAEB69B62E754BB7, ::UnityEngine::Transform* F249A74E7BFBE1A7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + F0869A6D6E215C5E_ACC434988A04202F_E0D455E06ABFA0A6_OFFSET))(this, FF0A37159A523E06, BAEB69B62E754BB7, F249A74E7BFBE1A7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0869A6D6E215C5E_ACC434988A04202F__CTOR_OFFSET))(this);
	}
};
