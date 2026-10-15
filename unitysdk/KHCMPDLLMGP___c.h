#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHCMPDLLMGP;
namespace System { class Object; }

#define KHCMPDLLMGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E813A00)
#define KHCMPDLLMGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E813A40)
#define KHCMPDLLMGP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E813A50)

inline static constexpr unsigned int KHCMPDLLMGP___c_TypeDefinitionIndex = 34257;

	class KHCMPDLLMGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHCMPDLLMGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP___C_CTOR_OFFSET))(this);
		}

		::KHCMPDLLMGP* __cctor_b__33_0()
		{
			return ((::KHCMPDLLMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCMPDLLMGP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
