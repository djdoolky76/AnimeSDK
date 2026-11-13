#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define HDFMNOLOJEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C7010)
#define HDFMNOLOJEA_IBFEDCIACJP_OFFSET UNITYSDK_OFFSET(0x1B7C6AB0)
#define HDFMNOLOJEA_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0x1B7C6F60)
#define HDFMNOLOJEA_JDNAABGAHNK_OFFSET UNITYSDK_OFFSET(0x1B7C6B10)
#define HDFMNOLOJEA_JEJGCKJCFPO_OFFSET UNITYSDK_OFFSET(0x1B7C6B70)
#define HDFMNOLOJEA_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1B7C6FC0)
#define HDFMNOLOJEA_JNGAKJANHKA_OFFSET UNITYSDK_OFFSET(0x1B7C6A50)
#define HDFMNOLOJEA_LPAAKPBFHJF_OFFSET UNITYSDK_OFFSET(0x1B7C69F0)
#define HDFMNOLOJEA__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B7C6BD0)
#define HDFMNOLOJEA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B7C6EE0)

inline static constexpr unsigned int HDFMNOLOJEA_TypeDefinitionIndex = 73624;

	class HDFMNOLOJEA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::ParticleSystem* JEDDHPEJCMN; // 0x60
		::UnityEngine::Transform* PPCNBKDKEKA; // 0x68
		::UnityEngine::Transform* BEINMJOCHIL; // 0x70
		::UnityEngine::ParticleSystem* BJGCAMLMHON; // 0x78
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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMNOLOJEA__SETUPVIEW_OFFSET))(this);
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
