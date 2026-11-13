#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFKJKLJJLKN;
namespace System { class Object; }

#define AFKJKLJJLKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5ED690)
#define AFKJKLJJLKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5ED6D0)
#define AFKJKLJJLKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5ED6E0)

inline static constexpr unsigned int AFKJKLJJLKN___c_TypeDefinitionIndex = 28893;

	class AFKJKLJJLKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFKJKLJJLKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKJKLJJLKN___C_CTOR_OFFSET))(this);
		}

		::AFKJKLJJLKN* __cctor_b__23_0()
		{
			return ((::AFKJKLJJLKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKJKLJJLKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
