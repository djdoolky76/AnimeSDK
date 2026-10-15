#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKFPICOFNDF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AIAMKDMMJFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB91D00)
#define AIAMKDMMJFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEB91D40)
#define AIAMKDMMJFE___C__APPLY_B__1_0_OFFSET UNITYSDK_OFFSET(0xEB91D50)

inline static constexpr unsigned int AIAMKDMMJFE___c_TypeDefinitionIndex = 77850;

	class AIAMKDMMJFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57530);
		}

		static ::System::Func_2<::LKFPICOFNDF*, ::System::Single>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::LKFPICOFNDF*, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIAMKDMMJFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIAMKDMMJFE___C_CTOR_OFFSET))(this);
		}

		::System::Single _Apply_b__1_0(::LKFPICOFNDF* a1)
		{
			return ((::System::Single(*)(::PVOID, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + AIAMKDMMJFE___C__APPLY_B__1_0_OFFSET))(this, a1);
		}

	};
