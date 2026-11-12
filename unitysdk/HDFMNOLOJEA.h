#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define HDFMNOLOJEA_CTOR_OFFSET UNITYSDK_OFFSET(0x16B76D20)
#define HDFMNOLOJEA_IBFEDCIACJP_OFFSET UNITYSDK_OFFSET(0x16B767C0)
#define HDFMNOLOJEA_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0x16B76C70)
#define HDFMNOLOJEA_JDNAABGAHNK_OFFSET UNITYSDK_OFFSET(0x16B76820)
#define HDFMNOLOJEA_JEJGCKJCFPO_OFFSET UNITYSDK_OFFSET(0x16B76880)
#define HDFMNOLOJEA_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x16B76CD0)
#define HDFMNOLOJEA_JNGAKJANHKA_OFFSET UNITYSDK_OFFSET(0x16B76760)
#define HDFMNOLOJEA_LPAAKPBFHJF_OFFSET UNITYSDK_OFFSET(0x16B76700)
#define HDFMNOLOJEA__ONBIND_OFFSET UNITYSDK_OFFSET(0x16B768E0)
#define HDFMNOLOJEA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16B76BF0)

inline static constexpr unsigned int HDFMNOLOJEA_TypeDefinitionIndex = 73625;

	class HDFMNOLOJEA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* PPCNBKDKEKA; // 0x60
		::UnityEngine::Transform* BEINMJOCHIL; // 0x68
		::UnityEngine::ParticleSystem* JEDDHPEJCMN; // 0x70
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
