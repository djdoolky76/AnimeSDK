#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFAEAGLMJEL;
namespace System { class Object; }

#define AFAEAGLMJEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1102D0)
#define AFAEAGLMJEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E110300)
#define AFAEAGLMJEL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E110310)

inline static constexpr unsigned int AFAEAGLMJEL___c_TypeDefinitionIndex = 34514;

	class AFAEAGLMJEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFAEAGLMJEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL___C_CTOR_OFFSET))(this);
		}

		::AFAEAGLMJEL* __cctor_b__23_0()
		{
			return ((::AFAEAGLMJEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
