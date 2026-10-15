#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOFKKOEJFHI;
namespace System { class Object; }

#define IOFKKOEJFHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D4FD0)
#define IOFKKOEJFHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D5010)
#define IOFKKOEJFHI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6D5020)

inline static constexpr unsigned int IOFKKOEJFHI___c_TypeDefinitionIndex = 25707;

	class IOFKKOEJFHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOFKKOEJFHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI___C_CTOR_OFFSET))(this);
		}

		::IOFKKOEJFHI* __cctor_b__28_0()
		{
			return ((::IOFKKOEJFHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
