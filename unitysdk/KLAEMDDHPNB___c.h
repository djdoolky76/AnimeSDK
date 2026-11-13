#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLAEMDDHPNB;
namespace System { class Object; }

#define KLAEMDDHPNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFF2AD0)
#define KLAEMDDHPNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFF2B10)
#define KLAEMDDHPNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FFF2B20)

inline static constexpr unsigned int KLAEMDDHPNB___c_TypeDefinitionIndex = 33696;

	class KLAEMDDHPNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLAEMDDHPNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB___C_CTOR_OFFSET))(this);
		}

		::KLAEMDDHPNB* __cctor_b__28_0()
		{
			return ((::KLAEMDDHPNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
