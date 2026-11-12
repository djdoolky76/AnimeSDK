#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIFMLFKCOOG;
namespace System { class Object; }

#define PIFMLFKCOOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F216030)
#define PIFMLFKCOOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F216070)
#define PIFMLFKCOOG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F216080)

inline static constexpr unsigned int PIFMLFKCOOG___c_TypeDefinitionIndex = 30034;

	class PIFMLFKCOOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIFMLFKCOOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG___C_CTOR_OFFSET))(this);
		}

		::PIFMLFKCOOG* __cctor_b__23_0()
		{
			return ((::PIFMLFKCOOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFMLFKCOOG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
