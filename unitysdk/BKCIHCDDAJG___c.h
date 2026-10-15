#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCLLCONFADM;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define BKCIHCDDAJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7A8C50)
#define BKCIHCDDAJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A8C90)
#define BKCIHCDDAJG___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xB7A8CA0)

inline static constexpr unsigned int BKCIHCDDAJG___c_TypeDefinitionIndex = 80781;

	class BKCIHCDDAJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E8A0);
		}

		static ::System::Comparison_1<::HCLLCONFADM*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::HCLLCONFADM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E8A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKCIHCDDAJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCIHCDDAJG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::HCLLCONFADM* a1, ::HCLLCONFADM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HCLLCONFADM*, ::HCLLCONFADM*))((::PBYTE)hIl2Cpp + BKCIHCDDAJG___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}

	};
