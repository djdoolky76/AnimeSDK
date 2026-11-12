#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGLCGNCLHLJ;
namespace System { class Object; }

#define BGLCGNCLHLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFFB420)
#define BGLCGNCLHLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFFB460)
#define BGLCGNCLHLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EFFB470)

inline static constexpr unsigned int BGLCGNCLHLJ___c_TypeDefinitionIndex = 26031;

	class BGLCGNCLHLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x464A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLCGNCLHLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ___C_CTOR_OFFSET))(this);
		}

		::BGLCGNCLHLJ* __cctor_b__23_0()
		{
			return ((::BGLCGNCLHLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
