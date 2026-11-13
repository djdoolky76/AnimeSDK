#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNFNBEENNKI;
class NOEOAMBCKHB;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define EJJDGONFDOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19AB75C0)
#define EJJDGONFDOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19AB7600)
#define EJJDGONFDOC___C___INITDEVICEABILITIES_B__30_0_OFFSET UNITYSDK_OFFSET(0x19AB7650)
#define EJJDGONFDOC___C___LOADRECIPES_B__27_0_OFFSET UNITYSDK_OFFSET(0x19AB7610)

inline static constexpr unsigned int EJJDGONFDOC___c_TypeDefinitionIndex = 79874;

	class EJJDGONFDOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19E40);
		}

		static ::System::Comparison_1<::NOEOAMBCKHB*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::NOEOAMBCKHB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19E48);
		}

		static ::System::Comparison_1<::FNFNBEENNKI*>** StaticGet___9__30_0()
		{
			return (::System::Comparison_1<::FNFNBEENNKI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJJDGONFDOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJDGONFDOC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __LoadRecipes_b__27_0(::NOEOAMBCKHB* a1, ::NOEOAMBCKHB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::NOEOAMBCKHB*, ::NOEOAMBCKHB*))((::PBYTE)hIl2Cpp + EJJDGONFDOC___C___LOADRECIPES_B__27_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __InitDeviceAbilities_b__30_0(::FNFNBEENNKI* a1, ::FNFNBEENNKI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::FNFNBEENNKI*, ::FNFNBEENNKI*))((::PBYTE)hIl2Cpp + EJJDGONFDOC___C___INITDEVICEABILITIES_B__30_0_OFFSET))(this, a1, a2);
		}

	};
