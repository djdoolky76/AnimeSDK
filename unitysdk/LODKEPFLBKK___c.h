#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LODKEPFLBKK;
namespace System { class Object; }

#define LODKEPFLBKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98D200)
#define LODKEPFLBKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98D240)
#define LODKEPFLBKK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E98D250)

inline static constexpr unsigned int LODKEPFLBKK___c_TypeDefinitionIndex = 32254;

	class LODKEPFLBKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x411C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LODKEPFLBKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKEPFLBKK___C_CTOR_OFFSET))(this);
		}

		::LODKEPFLBKK* __cctor_b__23_0()
		{
			return ((::LODKEPFLBKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKEPFLBKK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
