#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJDDOLALFI;
namespace System { class Object; }

#define BMJDDOLALFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC78750)
#define BMJDDOLALFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC78790)
#define BMJDDOLALFI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC787A0)

inline static constexpr unsigned int BMJDDOLALFI___c_TypeDefinitionIndex = 28592;

	class BMJDDOLALFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMJDDOLALFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI___C_CTOR_OFFSET))(this);
		}

		::BMJDDOLALFI* __cctor_b__28_0()
		{
			return ((::BMJDDOLALFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJDDOLALFI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
