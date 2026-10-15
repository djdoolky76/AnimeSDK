#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMOJJIAKPPG;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define EDGKHGLGIGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1330FD70)
#define EDGKHGLGIGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1330FDB0)
#define EDGKHGLGIGD___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1330FDC0)

inline static constexpr unsigned int EDGKHGLGIGD___c_TypeDefinitionIndex = 81068;

	class EDGKHGLGIGD___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::PMOJJIAKPPG*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::PMOJJIAKPPG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDGKHGLGIGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGKHGLGIGD___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::PMOJJIAKPPG* a1, ::PMOJJIAKPPG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PMOJJIAKPPG*, ::PMOJJIAKPPG*))((::PBYTE)hIl2Cpp + EDGKHGLGIGD___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}

	};
