#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LACGKNHJGKN;
namespace System { class Object; }

#define LACGKNHJGKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203836E0)
#define LACGKNHJGKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20383720)
#define LACGKNHJGKN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20383730)

inline static constexpr unsigned int LACGKNHJGKN___c_TypeDefinitionIndex = 35816;

	class LACGKNHJGKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x235A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACGKNHJGKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN___C_CTOR_OFFSET))(this);
		}

		::LACGKNHJGKN* __cctor_b__33_0()
		{
			return ((::LACGKNHJGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
