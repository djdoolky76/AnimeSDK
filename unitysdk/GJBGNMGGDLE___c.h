#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJBGNMGGDLE;
namespace System { class Object; }

#define GJBGNMGGDLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBD9350)
#define GJBGNMGGDLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD9390)
#define GJBGNMGGDLE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FBD93A0)

inline static constexpr unsigned int GJBGNMGGDLE___c_TypeDefinitionIndex = 31346;

	class GJBGNMGGDLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x128D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJBGNMGGDLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGNMGGDLE___C_CTOR_OFFSET))(this);
		}

		::GJBGNMGGDLE* __cctor_b__23_0()
		{
			return ((::GJBGNMGGDLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGNMGGDLE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
