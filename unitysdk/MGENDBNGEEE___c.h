#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGENDBNGEEE;
namespace System { class Object; }

#define MGENDBNGEEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB25060)
#define MGENDBNGEEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB250A0)
#define MGENDBNGEEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB250B0)

inline static constexpr unsigned int MGENDBNGEEE___c_TypeDefinitionIndex = 29550;

	class MGENDBNGEEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGENDBNGEEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDBNGEEE___C_CTOR_OFFSET))(this);
		}

		::MGENDBNGEEE* __cctor_b__23_0()
		{
			return ((::MGENDBNGEEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDBNGEEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
