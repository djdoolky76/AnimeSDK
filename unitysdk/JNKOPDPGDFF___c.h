#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNKOPDPGDFF;
namespace System { class Object; }

#define JNKOPDPGDFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76BC90)
#define JNKOPDPGDFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76BCC0)
#define JNKOPDPGDFF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E76BCD0)

inline static constexpr unsigned int JNKOPDPGDFF___c_TypeDefinitionIndex = 34067;

	class JNKOPDPGDFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x683C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNKOPDPGDFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKOPDPGDFF___C_CTOR_OFFSET))(this);
		}

		::JNKOPDPGDFF* __cctor_b__38_0()
		{
			return ((::JNKOPDPGDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKOPDPGDFF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
