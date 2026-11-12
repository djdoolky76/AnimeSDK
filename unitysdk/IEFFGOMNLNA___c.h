#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEFFGOMNLNA;
namespace System { class Object; }

#define IEFFGOMNLNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F956B10)
#define IEFFGOMNLNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F956B50)
#define IEFFGOMNLNA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F956B60)

inline static constexpr unsigned int IEFFGOMNLNA___c_TypeDefinitionIndex = 33702;

	class IEFFGOMNLNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x461C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEFFGOMNLNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA___C_CTOR_OFFSET))(this);
		}

		::IEFFGOMNLNA* __cctor_b__23_0()
		{
			return ((::IEFFGOMNLNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
