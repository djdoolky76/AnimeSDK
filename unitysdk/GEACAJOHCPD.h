#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OKLBEPJCBJG.h"
class LPBNBKGHOGA;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define GEACAJOHCPD_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x17CC7FD0)
#define GEACAJOHCPD_DCLPFNEHBFH_OFFSET UNITYSDK_OFFSET(0x17CC8BC0)
#define GEACAJOHCPD_EPPIECAGGLG_OFFSET UNITYSDK_OFFSET(0x17CC88D0)
#define GEACAJOHCPD_KPIGDFGAMJC_OFFSET UNITYSDK_OFFSET(0x17CC6EA0)
#define GEACAJOHCPD_MEODFKNFKEN_OFFSET UNITYSDK_OFFSET(0x17CC8450)
#define GEACAJOHCPD_NDJAOMNHOKM_OFFSET UNITYSDK_OFFSET(0x17CC8C70)
#define GEACAJOHCPD_PMNKOMKCILA_OFFSET UNITYSDK_OFFSET(0x17CC7920)

inline static constexpr unsigned int GEACAJOHCPD_TypeDefinitionIndex = 54758;

	class GEACAJOHCPD : public ::System::Object
	{
	public:
		static ::System::Void KPIGDFGAMJC(::LPBNBKGHOGA* a1, ::RPG::GameCore::BlockNodeConfig* a2)
		{
			return ((::System::Void(*)(::LPBNBKGHOGA*, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + GEACAJOHCPD_KPIGDFGAMJC_OFFSET))(a1, a2);
		}

		static ::System::Void BJMNKLGEMPM(::LPBNBKGHOGA* a1)
		{
			return ((::System::Void(*)(::LPBNBKGHOGA*))((::PBYTE)hIl2Cpp + GEACAJOHCPD_BJMNKLGEMPM_OFFSET))(a1);
		}

		static ::System::Void MEODFKNFKEN(::LPBNBKGHOGA* a1)
		{
			return ((::System::Void(*)(::LPBNBKGHOGA*))((::PBYTE)hIl2Cpp + GEACAJOHCPD_MEODFKNFKEN_OFFSET))(a1);
		}

		static ::Il2CppArray<::OKLBEPJCBJG>* EPPIECAGGLG(::LPBNBKGHOGA* a1)
		{
			return ((::Il2CppArray<::OKLBEPJCBJG>*(*)(::LPBNBKGHOGA*))((::PBYTE)hIl2Cpp + GEACAJOHCPD_EPPIECAGGLG_OFFSET))(a1);
		}

		static ::System::Void PMNKOMKCILA(::LPBNBKGHOGA* a1)
		{
			return ((::System::Void(*)(::LPBNBKGHOGA*))((::PBYTE)hIl2Cpp + GEACAJOHCPD_PMNKOMKCILA_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* DCLPFNEHBFH(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + GEACAJOHCPD_DCLPFNEHBFH_OFFSET))(a1);
		}

		static ::System::Void NDJAOMNHOKM(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GEACAJOHCPD_NDJAOMNHOKM_OFFSET))(a1);
		}

	};
