#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEHDPNELHCD;
namespace System { class Object; }

#define MEHDPNELHCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DF620)
#define MEHDPNELHCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DF660)
#define MEHDPNELHCD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9DF670)

inline static constexpr unsigned int MEHDPNELHCD___c_TypeDefinitionIndex = 31915;

	class MEHDPNELHCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D500);
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
