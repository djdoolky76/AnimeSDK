#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AADFONOBBKJ;
namespace System { class Object; }

#define AADFONOBBKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB8C40)
#define AADFONOBBKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB8C80)
#define AADFONOBBKJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDB8C90)

inline static constexpr unsigned int AADFONOBBKJ___c_TypeDefinitionIndex = 28039;

	class AADFONOBBKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AADFONOBBKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ___C_CTOR_OFFSET))(this);
		}

		::AADFONOBBKJ* __cctor_b__28_0()
		{
			return ((::AADFONOBBKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADFONOBBKJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
