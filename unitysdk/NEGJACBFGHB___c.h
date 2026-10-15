#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEGJACBFGHB;
namespace System { class Object; }

#define NEGJACBFGHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC7200)
#define NEGJACBFGHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC7240)
#define NEGJACBFGHB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAC7250)

inline static constexpr unsigned int NEGJACBFGHB___c_TypeDefinitionIndex = 34926;

	class NEGJACBFGHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEGJACBFGHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGJACBFGHB___C_CTOR_OFFSET))(this);
		}

		::NEGJACBFGHB* __cctor_b__33_0()
		{
			return ((::NEGJACBFGHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGJACBFGHB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
