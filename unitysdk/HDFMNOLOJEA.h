#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define HDFMNOLOJEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C26640)
#define HDFMNOLOJEA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15C26510)
#define HDFMNOLOJEA_IBFEDCIACJP_OFFSET UNITYSDK_OFFSET(0x15C262A0)
#define HDFMNOLOJEA_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0x15C26590)
#define HDFMNOLOJEA_JDNAABGAHNK_OFFSET UNITYSDK_OFFSET(0x15C26300)
#define HDFMNOLOJEA_JEJGCKJCFPO_OFFSET UNITYSDK_OFFSET(0x15C26360)
#define HDFMNOLOJEA_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15C265F0)
#define HDFMNOLOJEA_JNGAKJANHKA_OFFSET UNITYSDK_OFFSET(0x15C26240)
#define HDFMNOLOJEA_LPAAKPBFHJF_OFFSET UNITYSDK_OFFSET(0x15C261E0)
#define HDFMNOLOJEA__ONBIND_OFFSET UNITYSDK_OFFSET(0x15C263C0)

inline static constexpr unsigned int HDFMNOLOJEA_TypeDefinitionIndex = 71636;

	class HDFMNOLOJEA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::ParticleSystem* JEDDHPEJCMN; // 0x60
		::UnityEngine::ParticleSystem* BJGCAMLMHON; // 0x68
		::UnityEngine::Transform* PPCNBKDKEKA; // 0x70
		::UnityEngine::Transform* BEINMJOCHIL; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA_CTOR_OFFSET))(this);
		}

		::System::Void LPAAKPBFHJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA_LPAAKPBFHJF_OFFSET))(this);
		}

		::System::Void JNGAKJANHKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA_JNGAKJANHKA_OFFSET))(this);
		}

		::System::Void IBFEDCIACJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA_IBFEDCIACJP_OFFSET))(this);
		}

		::System::Void JDNAABGAHNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA_JDNAABGAHNK_OFFSET))(this);
		}

		::System::Void JEJGCKJCFPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA_JEJGCKJCFPO_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDFMNOLOJEA_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void IILIABMPCNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA_IILIABMPCNB_OFFSET))(this);
		}

	};
