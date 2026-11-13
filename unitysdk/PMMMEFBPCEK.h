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

#define PMMMEFBPCEK_CBIOIPDNAIO_OFFSET UNITYSDK_OFFSET(0x1849B2F0)
#define PMMMEFBPCEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1849B510)
#define PMMMEFBPCEK_ELALDJFJDLD_OFFSET UNITYSDK_OFFSET(0x1849B3B0)
#define PMMMEFBPCEK_NDFIOHCJIFA_OFFSET UNITYSDK_OFFSET(0x1849B200)
#define PMMMEFBPCEK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1849B260)
#define PMMMEFBPCEK_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x1849B4B0)
#define PMMMEFBPCEK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1849B140)
#define PMMMEFBPCEK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1849B0A0)

inline static constexpr unsigned int PMMMEFBPCEK_TypeDefinitionIndex = 73215;

	class PMMMEFBPCEK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0x60
		::DFHFOEODPLF* EFCFPGDPOPG; // 0x68
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
