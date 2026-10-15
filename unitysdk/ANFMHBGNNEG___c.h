#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANFMHBGNNEG;
namespace System { class Object; }

#define ANFMHBGNNEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6314E0)
#define ANFMHBGNNEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E631520)
#define ANFMHBGNNEG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E631530)

inline static constexpr unsigned int ANFMHBGNNEG___c_TypeDefinitionIndex = 30462;

	class ANFMHBGNNEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x470B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANFMHBGNNEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFMHBGNNEG___C_CTOR_OFFSET))(this);
		}

		::ANFMHBGNNEG* __cctor_b__23_0()
		{
			return ((::ANFMHBGNNEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFMHBGNNEG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
