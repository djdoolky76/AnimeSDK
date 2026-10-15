#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOELKOBOCDI;
namespace System { class Object; }

#define GOELKOBOCDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C1960)
#define GOELKOBOCDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C19A0)
#define GOELKOBOCDI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4C19B0)

inline static constexpr unsigned int GOELKOBOCDI___c_TypeDefinitionIndex = 28454;

	class GOELKOBOCDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22850);
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
