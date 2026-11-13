#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAIPALPGNKD;
namespace System { class Object; }

#define JAIPALPGNKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEF1020)
#define JAIPALPGNKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEF1060)
#define JAIPALPGNKD___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FEF1070)

inline static constexpr unsigned int JAIPALPGNKD___c_TypeDefinitionIndex = 31556;

	class JAIPALPGNKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x569D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAIPALPGNKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD___C_CTOR_OFFSET))(this);
		}

		::JAIPALPGNKD* __cctor_b__43_0()
		{
			return ((::JAIPALPGNKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
