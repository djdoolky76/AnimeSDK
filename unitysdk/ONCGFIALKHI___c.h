#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONCGFIALKHI;
namespace System { class Object; }

#define ONCGFIALKHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE95B40)
#define ONCGFIALKHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE95B80)
#define ONCGFIALKHI___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DE95B90)

inline static constexpr unsigned int ONCGFIALKHI___c_TypeDefinitionIndex = 31985;

	class ONCGFIALKHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x241A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONCGFIALKHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI___C_CTOR_OFFSET))(this);
		}

		::ONCGFIALKHI* __cctor_b__48_0()
		{
			return ((::ONCGFIALKHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
