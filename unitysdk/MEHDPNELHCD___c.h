#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEHDPNELHCD;
namespace System { class Object; }

#define MEHDPNELHCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB08F50)
#define MEHDPNELHCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB08F90)
#define MEHDPNELHCD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FB08FA0)

inline static constexpr unsigned int MEHDPNELHCD___c_TypeDefinitionIndex = 32828;

	class MEHDPNELHCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEHDPNELHCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD___C_CTOR_OFFSET))(this);
		}

		::MEHDPNELHCD* __cctor_b__33_0()
		{
			return ((::MEHDPNELHCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
