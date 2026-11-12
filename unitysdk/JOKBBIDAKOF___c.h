#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMABMBCFEJH;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define JOKBBIDAKOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBAD26E0)
#define JOKBBIDAKOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBAD2720)
#define JOKBBIDAKOF___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBAD2730)

inline static constexpr unsigned int JOKBBIDAKOF___c_TypeDefinitionIndex = 61458;

	class JOKBBIDAKOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B8B0);
		}

		static ::System::Comparison_1<::HMABMBCFEJH*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::HMABMBCFEJH*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B8B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOKBBIDAKOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::HMABMBCFEJH* a1, ::HMABMBCFEJH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HMABMBCFEJH*, ::HMABMBCFEJH*))((::PBYTE)hIl2Cpp + JOKBBIDAKOF___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}

	};
