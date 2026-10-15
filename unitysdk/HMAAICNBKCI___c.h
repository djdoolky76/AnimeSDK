#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMAAICNBKCI;
namespace System { class Object; }

#define HMAAICNBKCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59B960)
#define HMAAICNBKCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59B990)
#define HMAAICNBKCI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E59B9A0)

inline static constexpr unsigned int HMAAICNBKCI___c_TypeDefinitionIndex = 33015;

	class HMAAICNBKCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMAAICNBKCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAAICNBKCI___C_CTOR_OFFSET))(this);
		}

		::HMAAICNBKCI* __cctor_b__23_0()
		{
			return ((::HMAAICNBKCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAAICNBKCI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
