#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLKKNDMGLPP;
namespace System { class Object; }

#define CLKKNDMGLPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3F1BA0)
#define CLKKNDMGLPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3F1BE0)
#define CLKKNDMGLPP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F3F1BF0)

inline static constexpr unsigned int CLKKNDMGLPP___c_TypeDefinitionIndex = 29753;

	class CLKKNDMGLPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLKKNDMGLPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKKNDMGLPP___C_CTOR_OFFSET))(this);
		}

		::CLKKNDMGLPP* __cctor_b__23_0()
		{
			return ((::CLKKNDMGLPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKKNDMGLPP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
