#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKJMIJBIIHO;
namespace System { class Object; }

#define EKJMIJBIIHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E297660)
#define EKJMIJBIIHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2976A0)
#define EKJMIJBIIHO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2976B0)

inline static constexpr unsigned int EKJMIJBIIHO___c_TypeDefinitionIndex = 31728;

	class EKJMIJBIIHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x502A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKJMIJBIIHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJMIJBIIHO___C_CTOR_OFFSET))(this);
		}

		::EKJMIJBIIHO* __cctor_b__23_0()
		{
			return ((::EKJMIJBIIHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJMIJBIIHO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
