#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GBBMJFIIHAO_JDDJENCEPMC;
class MOMODPMFIKE;

#define GBBMJFIIHAO_CAGLJEMEJIK_OFFSET UNITYSDK_OFFSET(0x1593FB10)
#define GBBMJFIIHAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1593FBC0)
#define GBBMJFIIHAO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1593FBA0)
#define GBBMJFIIHAO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1593FAC0)
#define GBBMJFIIHAO_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1593FBB0)

inline static constexpr unsigned int GBBMJFIIHAO_TypeDefinitionIndex = 54027;

	class GBBMJFIIHAO : public ::System::Object
	{
	public:
		::GBBMJFIIHAO_JDDJENCEPMC* KEHLKFIJHGK; // 0x10
		::MOMODPMFIKE* _Owner_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMJFIIHAO_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMJFIIHAO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void CAGLJEMEJIK(::RPG::GameCore::FixPoint a1, ::HJIOMFDJLLA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + GBBMJFIIHAO_CAGLJEMEJIK_OFFSET))(this, a1, a2);
		}

		::MOMODPMFIKE* get_Owner()
		{
			return ((::MOMODPMFIKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMJFIIHAO_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::MOMODPMFIKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOMODPMFIKE*))((::PBYTE)hIl2Cpp + GBBMJFIIHAO_SET_OWNER_OFFSET))(this, a1);
		}

	};
