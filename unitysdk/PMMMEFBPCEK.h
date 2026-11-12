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

#define PMMMEFBPCEK_CBIOIPDNAIO_OFFSET UNITYSDK_OFFSET(0xCC57240)
#define PMMMEFBPCEK_CTOR_OFFSET UNITYSDK_OFFSET(0xCC57460)
#define PMMMEFBPCEK_ELALDJFJDLD_OFFSET UNITYSDK_OFFSET(0xCC57300)
#define PMMMEFBPCEK_NDFIOHCJIFA_OFFSET UNITYSDK_OFFSET(0xCC57150)
#define PMMMEFBPCEK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xCC571B0)
#define PMMMEFBPCEK_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xCC57400)
#define PMMMEFBPCEK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xCC57090)
#define PMMMEFBPCEK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCC56FF0)

inline static constexpr unsigned int PMMMEFBPCEK_TypeDefinitionIndex = 73216;

	class PMMMEFBPCEK : public ::FMPCODLIOLG
	{
	public:
		::DFHFOEODPLF* EFCFPGDPOPG; // 0x60
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0x68
		::IKBAMHGDEJC* PICMKGJOBLH; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMMEFBPCEK_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PMMMEFBPCEK__ONINITPARAMS_OFFSET))(this, a1);
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
