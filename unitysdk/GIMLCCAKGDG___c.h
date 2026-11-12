#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIMLCCAKGDG;
namespace System { class Object; }

#define GIMLCCAKGDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F794480)
#define GIMLCCAKGDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7944C0)
#define GIMLCCAKGDG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7944D0)

inline static constexpr unsigned int GIMLCCAKGDG___c_TypeDefinitionIndex = 29548;

	class GIMLCCAKGDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMLCCAKGDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG___C_CTOR_OFFSET))(this);
		}

		::GIMLCCAKGDG* __cctor_b__28_0()
		{
			return ((::GIMLCCAKGDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
