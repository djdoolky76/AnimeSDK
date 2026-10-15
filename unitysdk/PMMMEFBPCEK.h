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

#define PMMMEFBPCEK_CBIOIPDNAIO_OFFSET UNITYSDK_OFFSET(0xC327F00)
#define PMMMEFBPCEK_CTOR_OFFSET UNITYSDK_OFFSET(0xC328120)
#define PMMMEFBPCEK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC327CB0)
#define PMMMEFBPCEK_ELALDJFJDLD_OFFSET UNITYSDK_OFFSET(0xC327FC0)
#define PMMMEFBPCEK_NDFIOHCJIFA_OFFSET UNITYSDK_OFFSET(0xC327E10)
#define PMMMEFBPCEK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC327E70)
#define PMMMEFBPCEK_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xC3280C0)
#define PMMMEFBPCEK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC327D50)

inline static constexpr unsigned int PMMMEFBPCEK_TypeDefinitionIndex = 71239;

	class PMMMEFBPCEK : public ::FMPCODLIOLG
	{
	public:
		::DFHFOEODPLF* EFCFPGDPOPG; // 0x60
		::IKBAMHGDEJC* PICMKGJOBLH; // 0x68
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0x70
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
