#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DFHFOEODPLF;
class ECBCBEIADBI;
class EFANNBCFAOD;
class GAHPNAEGACM;
class IKBAMHGDEJC;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define PMMMEFBPCEK_CBIOIPDNAIO_OFFSET UNITYSDK_OFFSET(0xC320600)
#define PMMMEFBPCEK_CTOR_OFFSET UNITYSDK_OFFSET(0xC320820)
#define PMMMEFBPCEK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC3203B0)
#define PMMMEFBPCEK_ELALDJFJDLD_OFFSET UNITYSDK_OFFSET(0xC3206C0)
#define PMMMEFBPCEK_NDFIOHCJIFA_OFFSET UNITYSDK_OFFSET(0xC320510)
#define PMMMEFBPCEK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC320570)
#define PMMMEFBPCEK_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xC3207C0)
#define PMMMEFBPCEK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC320450)

inline static constexpr unsigned int PMMMEFBPCEK_TypeDefinitionIndex = 71238;

	class PMMMEFBPCEK : public ::FMPCODLIOLG
	{
	public:
		::IKBAMHGDEJC* PICMKGJOBLH; // 0x60
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0x68
		::DFHFOEODPLF* EFCFPGDPOPG; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMMEFBPCEK_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PMMMEFBPCEK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMMEFBPCEK__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::EFANNBCFAOD* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFANNBCFAOD*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PMMMEFBPCEK_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + PMMMEFBPCEK_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void CBIOIPDNAIO(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PMMMEFBPCEK_CBIOIPDNAIO_OFFSET))(this, a1, a2);
		}

		::System::Void NDFIOHCJIFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMMEFBPCEK_NDFIOHCJIFA_OFFSET))(this);
		}

		::System::Void ELALDJFJDLD(::Il2CppArray<::ECBCBEIADBI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ECBCBEIADBI*>*))((::PBYTE)hIl2Cpp + PMMMEFBPCEK_ELALDJFJDLD_OFFSET))(this, a1);
		}

	};
