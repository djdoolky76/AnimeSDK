#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFGLNNFOPON;
namespace System { class Object; }

#define HFGLNNFOPON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53BC80)
#define HFGLNNFOPON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53BCC0)
#define HFGLNNFOPON___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E53BCD0)

inline static constexpr unsigned int HFGLNNFOPON___c_TypeDefinitionIndex = 31975;

	class HFGLNNFOPON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFGLNNFOPON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLNNFOPON___C_CTOR_OFFSET))(this);
		}

		::HFGLNNFOPON* __cctor_b__18_0()
		{
			return ((::HFGLNNFOPON*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLNNFOPON___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
