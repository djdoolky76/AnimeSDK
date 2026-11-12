#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPFBABKLLJK;
namespace System { class Object; }

#define MPFBABKLLJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDF2640)
#define MPFBABKLLJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF2680)
#define MPFBABKLLJK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FDF2690)

inline static constexpr unsigned int MPFBABKLLJK___c_TypeDefinitionIndex = 31870;

	class MPFBABKLLJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66340);
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
