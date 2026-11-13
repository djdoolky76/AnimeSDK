#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJHOIFEBACE;
namespace System { class Object; }

#define MJHOIFEBACE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205C22D0)
#define MJHOIFEBACE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205C2300)
#define MJHOIFEBACE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205C2310)

inline static constexpr unsigned int MJHOIFEBACE___c_TypeDefinitionIndex = 31681;

	class MJHOIFEBACE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJHOIFEBACE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHOIFEBACE___C_CTOR_OFFSET))(this);
		}

		::MJHOIFEBACE* __cctor_b__23_0()
		{
			return ((::MJHOIFEBACE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHOIFEBACE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
