#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELDJBEKOLHB;
namespace System { class Object; }

#define ELDJBEKOLHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE64AF0)
#define ELDJBEKOLHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE64B30)
#define ELDJBEKOLHB___C___CCTOR_B__113_0_OFFSET UNITYSDK_OFFSET(0x1FE64B40)

inline static constexpr unsigned int ELDJBEKOLHB___c_TypeDefinitionIndex = 30357;

	class ELDJBEKOLHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELDJBEKOLHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDJBEKOLHB___C_CTOR_OFFSET))(this);
		}

		::ELDJBEKOLHB* __cctor_b__113_0()
		{
			return ((::ELDJBEKOLHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDJBEKOLHB___C___CCTOR_B__113_0_OFFSET))(this);
		}

	};
