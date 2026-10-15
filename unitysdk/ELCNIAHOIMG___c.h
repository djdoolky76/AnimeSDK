#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELCNIAHOIMG;
namespace System { class Object; }

#define ELCNIAHOIMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CB800)
#define ELCNIAHOIMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CB830)
#define ELCNIAHOIMG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2CB840)

inline static constexpr unsigned int ELCNIAHOIMG___c_TypeDefinitionIndex = 32125;

	class ELCNIAHOIMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELCNIAHOIMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCNIAHOIMG___C_CTOR_OFFSET))(this);
		}

		::ELCNIAHOIMG* __cctor_b__23_0()
		{
			return ((::ELCNIAHOIMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCNIAHOIMG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
