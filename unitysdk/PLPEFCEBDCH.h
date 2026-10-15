#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define PLPEFCEBDCH_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xC30E650)
#define PLPEFCEBDCH_CTOR_OFFSET UNITYSDK_OFFSET(0xC30E6C0)
#define PLPEFCEBDCH_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xC30E060)
#define PLPEFCEBDCH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC30E4C0)
#define PLPEFCEBDCH_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0xC30E5D0)
#define PLPEFCEBDCH_IMFAHAHGPEL_OFFSET UNITYSDK_OFFSET(0xC30E150)
#define PLPEFCEBDCH_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC30E520)
#define PLPEFCEBDCH_JLPLBEKOCMP_OFFSET UNITYSDK_OFFSET(0xC30E270)
#define PLPEFCEBDCH__ONBIND_OFFSET UNITYSDK_OFFSET(0xC30E2D0)

inline static constexpr unsigned int PLPEFCEBDCH_TypeDefinitionIndex = 72011;

	class PLPEFCEBDCH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* JEDDHPEJCMN; // 0x60
		::UnityEngine::Transform* BJGCAMLMHON; // 0x68
		::UnityEngine::Transform* BEINMJOCHIL; // 0x70
		::UnityEngine::Transform* PPCNBKDKEKA; // 0x78
		::UnityEngine::Animation* KNGEOHAPLCF; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH_CTOR_OFFSET))(this);
		}

		::System::Void DKKJNPPHDPM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLPEFCEBDCH_DKKJNPPHDPM_OFFSET))(this, a1);
		}

		::System::Void IMFAHAHGPEL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLPEFCEBDCH_IMFAHAHGPEL_OFFSET))(this, a1);
		}

		::System::Void JLPLBEKOCMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLPEFCEBDCH_JLPLBEKOCMP_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLPEFCEBDCH_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLPEFCEBDCH_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void IILIABMPCNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPEFCEBDCH_IILIABMPCNB_OFFSET))(this);
		}

	};
