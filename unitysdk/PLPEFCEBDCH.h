#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define PLPEFCEBDCH_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xC306DD0)
#define PLPEFCEBDCH_CTOR_OFFSET UNITYSDK_OFFSET(0xC306E40)
#define PLPEFCEBDCH_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xC306660)
#define PLPEFCEBDCH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC306C40)
#define PLPEFCEBDCH_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0xC306D50)
#define PLPEFCEBDCH_IMFAHAHGPEL_OFFSET UNITYSDK_OFFSET(0xC306750)
#define PLPEFCEBDCH_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC306CA0)
#define PLPEFCEBDCH_JLPLBEKOCMP_OFFSET UNITYSDK_OFFSET(0xC306870)
#define PLPEFCEBDCH__ONBIND_OFFSET UNITYSDK_OFFSET(0xC3068E0)

inline static constexpr unsigned int PLPEFCEBDCH_TypeDefinitionIndex = 72010;

	class PLPEFCEBDCH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KNGEOHAPLCF; // 0x60
		::UnityEngine::Transform* BJGCAMLMHON; // 0x68
		::UnityEngine::Transform* JEDDHPEJCMN; // 0x70
		::UnityEngine::Transform* PPCNBKDKEKA; // 0x78
		::UnityEngine::Transform* BEINMJOCHIL; // 0x80
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
