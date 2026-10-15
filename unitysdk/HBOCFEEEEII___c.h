#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBOCFEEEEII;
namespace System { class Object; }

#define HBOCFEEEEII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5029D0)
#define HBOCFEEEEII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E502A10)
#define HBOCFEEEEII___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E502A20)

inline static constexpr unsigned int HBOCFEEEEII___c_TypeDefinitionIndex = 26600;

	class HBOCFEEEEII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBOCFEEEEII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII___C_CTOR_OFFSET))(this);
		}

		::HBOCFEEEEII* __cctor_b__38_0()
		{
			return ((::HBOCFEEEEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
