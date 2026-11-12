#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFBDGDKFPJO;
namespace System { class Object; }

#define KFBDGDKFPJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB2C780)
#define KFBDGDKFPJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB2C7C0)
#define KFBDGDKFPJO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB2C7D0)

inline static constexpr unsigned int KFBDGDKFPJO___c_TypeDefinitionIndex = 33135;

	class KFBDGDKFPJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFBDGDKFPJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO___C_CTOR_OFFSET))(this);
		}

		::KFBDGDKFPJO* __cctor_b__28_0()
		{
			return ((::KFBDGDKFPJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
