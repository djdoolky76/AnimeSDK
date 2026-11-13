#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define HOIMPNMCBEI_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x16F69AE0)
#define HOIMPNMCBEI_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x16F69AC0)
#define HOIMPNMCBEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DCB780)
#define HOIMPNMCBEI_CTOR_OFFSET UNITYSDK_OFFSET(0x3DCB760)
#define HOIMPNMCBEI_EJJAGKAIAGK_OFFSET UNITYSDK_OFFSET(0x16F69B10)
#define HOIMPNMCBEI_GKDHMJMPOHC_OFFSET UNITYSDK_OFFSET(0x3DCB820)
#define HOIMPNMCBEI_HBFKMECBOND_OFFSET UNITYSDK_OFFSET(0x16F69B00)
#define HOIMPNMCBEI_IMJBPOJJKDM_OFFSET UNITYSDK_OFFSET(0x16F69B30)
#define HOIMPNMCBEI_JGIAAGKKOAN_OFFSET UNITYSDK_OFFSET(0x16F69AF0)
#define HOIMPNMCBEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3DCB7A0)

inline static constexpr unsigned int HOIMPNMCBEI_TypeDefinitionIndex = 6554;

	struct alignas(8) HOIMPNMCBEI
	{
		::System::Boolean MNDFOPKBHKP; // 0x10
		::System::Byte _padding0[0x7];
		::System::Object* LNCGFNKKHGL; // 0x18
		::System::Object* GGNLMNGNKAD; // 0x20
		::System::Int32 ADNAIJJLNAN; // 0x28
		::System::Void _ctor(::System::Boolean a1, ::System::Object* a2, ::System::Object* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		/*
		static ::HOIMPNMCBEI BBNJCKPKPDN(::System::Boolean a1)
		{
			return ((::HOIMPNMCBEI(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean BBNJCKPKPDN_1(::HOIMPNMCBEI a1)
		{
			return ((::System::Boolean(*)(::HOIMPNMCBEI))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_BBNJCKPKPDN_1_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean JGIAAGKKOAN(::HOIMPNMCBEI a1)
		{
			return ((::System::Boolean(*)(::HOIMPNMCBEI))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_JGIAAGKKOAN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean HBFKMECBOND(::HOIMPNMCBEI a1)
		{
			return ((::System::Boolean(*)(::HOIMPNMCBEI))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_HBFKMECBOND_OFFSET))(a1);
		}
		*/

		/*
		static ::HOIMPNMCBEI EJJAGKAIAGK(::HOIMPNMCBEI a1, ::HOIMPNMCBEI a2)
		{
			return ((::HOIMPNMCBEI(*)(::HOIMPNMCBEI, ::HOIMPNMCBEI))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_EJJAGKAIAGK_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::HOIMPNMCBEI IMJBPOJJKDM(::HOIMPNMCBEI a1, ::HOIMPNMCBEI a2)
		{
			return ((::HOIMPNMCBEI(*)(::HOIMPNMCBEI, ::HOIMPNMCBEI))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_IMJBPOJJKDM_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_TOSTRING_OFFSET))(this);
		}

		::System::String* GKDHMJMPOHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIMPNMCBEI_GKDHMJMPOHC_OFFSET))(this);
		}

	};
