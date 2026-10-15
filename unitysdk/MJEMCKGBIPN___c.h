#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJEMCKGBIPN;
namespace System { class Object; }

#define MJEMCKGBIPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA1AF70)
#define MJEMCKGBIPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1AFB0)
#define MJEMCKGBIPN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA1AFC0)

inline static constexpr unsigned int MJEMCKGBIPN___c_TypeDefinitionIndex = 27137;

	class MJEMCKGBIPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x535D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJEMCKGBIPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEMCKGBIPN___C_CTOR_OFFSET))(this);
		}

		::MJEMCKGBIPN* __cctor_b__23_0()
		{
			return ((::MJEMCKGBIPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEMCKGBIPN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
