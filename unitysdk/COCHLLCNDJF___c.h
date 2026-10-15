#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COCHLLCNDJF;
namespace System { class Object; }

#define COCHLLCNDJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1315C0)
#define COCHLLCNDJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E131600)
#define COCHLLCNDJF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E131610)

inline static constexpr unsigned int COCHLLCNDJF___c_TypeDefinitionIndex = 27499;

	class COCHLLCNDJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COCHLLCNDJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHLLCNDJF___C_CTOR_OFFSET))(this);
		}

		::COCHLLCNDJF* __cctor_b__23_0()
		{
			return ((::COCHLLCNDJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHLLCNDJF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
