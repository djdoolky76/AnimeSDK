#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGKICDECDMA.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
class DMKNKKKMMHK_JNEKGCGCEAL;
class DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC;
class GGJFAFONDHN;

#define DMKNKKKMMHK_JNEKGCGCEAL_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xFEC4DE0)
#define DMKNKKKMMHK_JNEKGCGCEAL_BCIAKFBMDOA_OFFSET UNITYSDK_OFFSET(0xFEC5010)
#define DMKNKKKMMHK_JNEKGCGCEAL_CCTOR_OFFSET UNITYSDK_OFFSET(0xFEC5050)
#define DMKNKKKMMHK_JNEKGCGCEAL_COKJKBEGGME_OFFSET UNITYSDK_OFFSET(0xFEC3AF0)
#define DMKNKKKMMHK_JNEKGCGCEAL_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC4C10)
#define DMKNKKKMMHK_JNEKGCGCEAL_HAIGNFCCNIK_OFFSET UNITYSDK_OFFSET(0xFEC4C90)

inline static constexpr unsigned int DMKNKKKMMHK_JNEKGCGCEAL_TypeDefinitionIndex = 49451;

	class DMKNKKKMMHK_JNEKGCGCEAL : public ::EGKICDECDMA
	{
	public:
		static ::DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC** StaticGet_IIECJEJFPCI()
		{
			return (::DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC**)UnitySDK::FromName("", "JNEKGCGCEAL")->GetStaticField(0x5E6D0);
		}

		::System::Void _ctor(::RPG::GameCore::EnviromentControlPriority a1, ::GGJFAFONDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + DMKNKKKMMHK_JNEKGCGCEAL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMKNKKKMMHK_JNEKGCGCEAL_CCTOR_OFFSET))();
		}

		::System::Boolean HAIGNFCCNIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKNKKKMMHK_JNEKGCGCEAL_HAIGNFCCNIK_OFFSET))(this);
		}

		static ::DMKNKKKMMHK_JNEKGCGCEAL* COKJKBEGGME(::RPG::GameCore::EnviromentControlPriority a1, ::GGJFAFONDHN* a2)
		{
			return ((::DMKNKKKMMHK_JNEKGCGCEAL*(*)(::RPG::GameCore::EnviromentControlPriority, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + DMKNKKKMMHK_JNEKGCGCEAL_COKJKBEGGME_OFFSET))(a1, a2);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKNKKKMMHK_JNEKGCGCEAL_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Boolean BCIAKFBMDOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKNKKKMMHK_JNEKGCGCEAL_BCIAKFBMDOA_OFFSET))(this);
		}

	};
