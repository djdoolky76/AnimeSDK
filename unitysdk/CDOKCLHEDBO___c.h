#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDOKCLHEDBO;
namespace System { class Object; }

#define CDOKCLHEDBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F351CE0)
#define CDOKCLHEDBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F351D20)
#define CDOKCLHEDBO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F351D30)

inline static constexpr unsigned int CDOKCLHEDBO___c_TypeDefinitionIndex = 33680;

	class CDOKCLHEDBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D3E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDOKCLHEDBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOKCLHEDBO___C_CTOR_OFFSET))(this);
		}

		::CDOKCLHEDBO* __cctor_b__23_0()
		{
			return ((::CDOKCLHEDBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOKCLHEDBO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
