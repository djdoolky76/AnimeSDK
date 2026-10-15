#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBMGIOIHEI;
namespace System { class Object; }

#define EPBMGIOIHEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D95D0)
#define EPBMGIOIHEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D9600)
#define EPBMGIOIHEI___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1E2D9610)

inline static constexpr unsigned int EPBMGIOIHEI___c_TypeDefinitionIndex = 25864;

	class EPBMGIOIHEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPBMGIOIHEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBMGIOIHEI___C_CTOR_OFFSET))(this);
		}

		::EPBMGIOIHEI* __cctor_b__108_0()
		{
			return ((::EPBMGIOIHEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBMGIOIHEI___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};
