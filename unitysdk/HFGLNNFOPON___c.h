#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFGLNNFOPON;
namespace System { class Object; }

#define HFGLNNFOPON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8636D0)
#define HFGLNNFOPON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F863710)
#define HFGLNNFOPON___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F863720)

inline static constexpr unsigned int HFGLNNFOPON___c_TypeDefinitionIndex = 32888;

	class HFGLNNFOPON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD90);
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
