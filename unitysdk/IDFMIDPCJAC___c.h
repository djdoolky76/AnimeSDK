#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDFMIDPCJAC;
namespace System { class Object; }

#define IDFMIDPCJAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F947AE0)
#define IDFMIDPCJAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F947B20)
#define IDFMIDPCJAC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F947B30)

inline static constexpr unsigned int IDFMIDPCJAC___c_TypeDefinitionIndex = 30885;

	class IDFMIDPCJAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDFMIDPCJAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC___C_CTOR_OFFSET))(this);
		}

		::IDFMIDPCJAC* __cctor_b__28_0()
		{
			return ((::IDFMIDPCJAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIDPCJAC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
