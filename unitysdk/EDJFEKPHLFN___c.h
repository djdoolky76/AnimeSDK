#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDJFEKPHLFN;
namespace System { class Object; }

#define EDJFEKPHLFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F55E3F0)
#define EDJFEKPHLFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F55E430)
#define EDJFEKPHLFN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F55E440)

inline static constexpr unsigned int EDJFEKPHLFN___c_TypeDefinitionIndex = 29930;

	class EDJFEKPHLFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDJFEKPHLFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFEKPHLFN___C_CTOR_OFFSET))(this);
		}

		::EDJFEKPHLFN* __cctor_b__18_0()
		{
			return ((::EDJFEKPHLFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFEKPHLFN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
