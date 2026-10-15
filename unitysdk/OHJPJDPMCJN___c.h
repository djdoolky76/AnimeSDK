#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHJPJDPMCJN;
namespace System { class Object; }

#define OHJPJDPMCJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE360B0)
#define OHJPJDPMCJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE360E0)
#define OHJPJDPMCJN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DE360F0)

inline static constexpr unsigned int OHJPJDPMCJN___c_TypeDefinitionIndex = 33893;

	class OHJPJDPMCJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHJPJDPMCJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJPJDPMCJN___C_CTOR_OFFSET))(this);
		}

		::OHJPJDPMCJN* __cctor_b__48_0()
		{
			return ((::OHJPJDPMCJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJPJDPMCJN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
