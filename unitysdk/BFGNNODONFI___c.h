#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFGNNODONFI;
namespace System { class Object; }

#define BFGNNODONFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3FA10)
#define BFGNNODONFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA3FA50)
#define BFGNNODONFI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA3FA60)

inline static constexpr unsigned int BFGNNODONFI___c_TypeDefinitionIndex = 27200;

	class BFGNNODONFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFGNNODONFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI___C_CTOR_OFFSET))(this);
		}

		::BFGNNODONFI* __cctor_b__18_0()
		{
			return ((::BFGNNODONFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
