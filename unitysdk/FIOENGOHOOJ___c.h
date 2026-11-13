#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIOENGOHOOJ;
namespace System { class Object; }

#define FIOENGOHOOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206A3460)
#define FIOENGOHOOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206A34A0)
#define FIOENGOHOOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206A34B0)

inline static constexpr unsigned int FIOENGOHOOJ___c_TypeDefinitionIndex = 31959;

	class FIOENGOHOOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIOENGOHOOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOENGOHOOJ___C_CTOR_OFFSET))(this);
		}

		::FIOENGOHOOJ* __cctor_b__23_0()
		{
			return ((::FIOENGOHOOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOENGOHOOJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
