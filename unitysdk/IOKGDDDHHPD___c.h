#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOKGDDDHHPD;
namespace System { class Object; }

#define IOKGDDDHHPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D8DC0)
#define IOKGDDDHHPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D8E00)
#define IOKGDDDHHPD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6D8E10)

inline static constexpr unsigned int IOKGDDDHHPD___c_TypeDefinitionIndex = 35023;

	class IOKGDDDHHPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOKGDDDHHPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD___C_CTOR_OFFSET))(this);
		}

		::IOKGDDDHHPD* __cctor_b__28_0()
		{
			return ((::IOKGDDDHHPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKGDDDHHPD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
