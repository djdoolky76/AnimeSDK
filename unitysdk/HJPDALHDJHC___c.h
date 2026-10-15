#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJPDALHDJHC;
namespace System { class Object; }

#define HJPDALHDJHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AD6D0)
#define HJPDALHDJHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AD710)
#define HJPDALHDJHC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5AD720)

inline static constexpr unsigned int HJPDALHDJHC___c_TypeDefinitionIndex = 29483;

	class HJPDALHDJHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJPDALHDJHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPDALHDJHC___C_CTOR_OFFSET))(this);
		}

		::HJPDALHDJHC* __cctor_b__18_0()
		{
			return ((::HJPDALHDJHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPDALHDJHC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
