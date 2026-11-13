#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIMJFGIPDKI;
namespace System { class Object; }

#define GIMJFGIPDKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBD54A0)
#define GIMJFGIPDKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD54E0)
#define GIMJFGIPDKI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FBD54F0)

inline static constexpr unsigned int GIMJFGIPDKI___c_TypeDefinitionIndex = 34529;

	class GIMJFGIPDKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMJFGIPDKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI___C_CTOR_OFFSET))(this);
		}

		::GIMJFGIPDKI* __cctor_b__28_0()
		{
			return ((::GIMJFGIPDKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
