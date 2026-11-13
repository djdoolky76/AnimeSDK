#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJBIFIJCBCJ;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define ONCOEBGNBEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B08D4C0)
#define ONCOEBGNBEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B08D500)
#define ONCOEBGNBEJ___C__BUILDROBOTDECISIONS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B08D510)

inline static constexpr unsigned int ONCOEBGNBEJ___c_TypeDefinitionIndex = 38283;

	class ONCOEBGNBEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14CE0);
		}

		static ::System::Comparison_1<::KJBIFIJCBCJ*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::KJBIFIJCBCJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14CE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONCOEBGNBEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCOEBGNBEJ___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildRobotDecisions_b__2_0(::KJBIFIJCBCJ* a1, ::KJBIFIJCBCJ* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KJBIFIJCBCJ*, ::KJBIFIJCBCJ*))((::PBYTE)hIl2Cpp + ONCOEBGNBEJ___C__BUILDROBOTDECISIONS_B__2_0_OFFSET))(this, a1, a2);
		}

	};
