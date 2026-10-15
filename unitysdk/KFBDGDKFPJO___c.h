#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFBDGDKFPJO;
namespace System { class Object; }

#define KFBDGDKFPJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8B40)
#define KFBDGDKFPJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8B80)
#define KFBDGDKFPJO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7E8B90)

inline static constexpr unsigned int KFBDGDKFPJO___c_TypeDefinitionIndex = 32222;

	class KFBDGDKFPJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12430);
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
