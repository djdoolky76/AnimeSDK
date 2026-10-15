#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDOMBJBHFEO;
namespace System { class Object; }

#define IDOMBJBHFEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E633320)
#define IDOMBJBHFEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E633360)
#define IDOMBJBHFEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E633370)

inline static constexpr unsigned int IDOMBJBHFEO___c_TypeDefinitionIndex = 32295;

	class IDOMBJBHFEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDOMBJBHFEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMBJBHFEO___C_CTOR_OFFSET))(this);
		}

		::IDOMBJBHFEO* __cctor_b__23_0()
		{
			return ((::IDOMBJBHFEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMBJBHFEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
