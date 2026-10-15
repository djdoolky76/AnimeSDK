#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define HDFMNOLOJEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C333A0)
#define HDFMNOLOJEA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15C33270)
#define HDFMNOLOJEA_IBFEDCIACJP_OFFSET UNITYSDK_OFFSET(0x15C33000)
#define HDFMNOLOJEA_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0x15C332F0)
#define HDFMNOLOJEA_JDNAABGAHNK_OFFSET UNITYSDK_OFFSET(0x15C33060)
#define HDFMNOLOJEA_JEJGCKJCFPO_OFFSET UNITYSDK_OFFSET(0x15C330C0)
#define HDFMNOLOJEA_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15C33350)
#define HDFMNOLOJEA_JNGAKJANHKA_OFFSET UNITYSDK_OFFSET(0x15C32FA0)
#define HDFMNOLOJEA_LPAAKPBFHJF_OFFSET UNITYSDK_OFFSET(0x15C32F40)
#define HDFMNOLOJEA__ONBIND_OFFSET UNITYSDK_OFFSET(0x15C33120)

inline static constexpr unsigned int HDFMNOLOJEA_TypeDefinitionIndex = 71637;

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
