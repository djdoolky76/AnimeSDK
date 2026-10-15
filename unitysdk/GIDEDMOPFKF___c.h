#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDEDMOPFKF;
namespace System { class Object; }

#define GIDEDMOPFKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E466740)
#define GIDEDMOPFKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E466780)
#define GIDEDMOPFKF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E466790)

inline static constexpr unsigned int GIDEDMOPFKF___c_TypeDefinitionIndex = 29206;

	class GIDEDMOPFKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIDEDMOPFKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDEDMOPFKF___C_CTOR_OFFSET))(this);
		}

		::GIDEDMOPFKF* __cctor_b__23_0()
		{
			return ((::GIDEDMOPFKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDEDMOPFKF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
