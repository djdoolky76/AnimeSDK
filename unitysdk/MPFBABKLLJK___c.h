#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPFBABKLLJK;
namespace System { class Object; }

#define MPFBABKLLJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8A1D0)
#define MPFBABKLLJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8A210)
#define MPFBABKLLJK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA8A220)

inline static constexpr unsigned int MPFBABKLLJK___c_TypeDefinitionIndex = 30957;

	class MPFBABKLLJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPFBABKLLJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK___C_CTOR_OFFSET))(this);
		}

		::MPFBABKLLJK* __cctor_b__28_0()
		{
			return ((::MPFBABKLLJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFBABKLLJK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
