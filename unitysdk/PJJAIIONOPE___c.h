#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJJAIIONOPE;
namespace System { class Object; }

#define PJJAIIONOPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4E3A0)
#define PJJAIIONOPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4E3E0)
#define PJJAIIONOPE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF4E3F0)

inline static constexpr unsigned int PJJAIIONOPE___c_TypeDefinitionIndex = 29073;

	class PJJAIIONOPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJJAIIONOPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJAIIONOPE___C_CTOR_OFFSET))(this);
		}

		::PJJAIIONOPE* __cctor_b__23_0()
		{
			return ((::PJJAIIONOPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJAIIONOPE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
