#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHCLFOHEKNM_CharaProp.h"
#include "unitysdk/HHCLFOHEKNM_FaceProp.h"
#include "unitysdk/HHCLFOHEKNM_HairProp.h"
#include "unitysdk/HHCLFOHEKNM_OtherProp.h"
#include "unitysdk/System/Object.h"

#define MHNGEOGEIIN_HJKIEKODDAL_1_OFFSET UNITYSDK_OFFSET(0xB947990)
#define MHNGEOGEIIN_HJKIEKODDAL_2_OFFSET UNITYSDK_OFFSET(0xB9479E0)
#define MHNGEOGEIIN_HJKIEKODDAL_3_OFFSET UNITYSDK_OFFSET(0xB947A30)
#define MHNGEOGEIIN_HJKIEKODDAL_OFFSET UNITYSDK_OFFSET(0xB947940)

inline static constexpr unsigned int MHNGEOGEIIN_TypeDefinitionIndex = 69957;

	class MHNGEOGEIIN : public ::System::Object
	{
	public:
		static ::System::Boolean HJKIEKODDAL(::HHCLFOHEKNM_CharaProp a1, ::HHCLFOHEKNM_CharaProp a2)
		{
			return ((::System::Boolean(*)(::HHCLFOHEKNM_CharaProp, ::HHCLFOHEKNM_CharaProp))((::PBYTE)hIl2Cpp + MHNGEOGEIIN_HJKIEKODDAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean HJKIEKODDAL_1(::HHCLFOHEKNM_FaceProp a1, ::HHCLFOHEKNM_FaceProp a2)
		{
			return ((::System::Boolean(*)(::HHCLFOHEKNM_FaceProp, ::HHCLFOHEKNM_FaceProp))((::PBYTE)hIl2Cpp + MHNGEOGEIIN_HJKIEKODDAL_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean HJKIEKODDAL_2(::HHCLFOHEKNM_HairProp a1, ::HHCLFOHEKNM_HairProp a2)
		{
			return ((::System::Boolean(*)(::HHCLFOHEKNM_HairProp, ::HHCLFOHEKNM_HairProp))((::PBYTE)hIl2Cpp + MHNGEOGEIIN_HJKIEKODDAL_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean HJKIEKODDAL_3(::HHCLFOHEKNM_OtherProp a1, ::HHCLFOHEKNM_OtherProp a2)
		{
			return ((::System::Boolean(*)(::HHCLFOHEKNM_OtherProp, ::HHCLFOHEKNM_OtherProp))((::PBYTE)hIl2Cpp + MHNGEOGEIIN_HJKIEKODDAL_3_OFFSET))(a1, a2);
		}

	};
