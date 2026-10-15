#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGAIKFKNFDC_JKKACMIHCLN;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define CGAIKFKNFDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD16B70)
#define CGAIKFKNFDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD16BB0)
#define CGAIKFKNFDC___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1DD16BC0)

	class CGAIKFKNFDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21A50);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGAIKFKNFDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAIKFKNFDC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__1_0(::CGAIKFKNFDC_JKKACMIHCLN* a1, ::CGAIKFKNFDC_JKKACMIHCLN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CGAIKFKNFDC_JKKACMIHCLN*, ::CGAIKFKNFDC_JKKACMIHCLN*))((::PBYTE)hIl2Cpp + CGAIKFKNFDC___C__CREATE_B__1_0_OFFSET))(this, a1, a2);
		}

	};
