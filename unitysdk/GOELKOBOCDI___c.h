#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOELKOBOCDI;
namespace System { class Object; }

#define GOELKOBOCDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4EEFF0)
#define GOELKOBOCDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EF030)
#define GOELKOBOCDI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4EF040)

inline static constexpr unsigned int GOELKOBOCDI___c_TypeDefinitionIndex = 28454;

	class GOELKOBOCDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOELKOBOCDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOELKOBOCDI___C_CTOR_OFFSET))(this);
		}

		::GOELKOBOCDI* __cctor_b__23_0()
		{
			return ((::GOELKOBOCDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOELKOBOCDI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
