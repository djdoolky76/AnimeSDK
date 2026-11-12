#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAOIIOIGCOJ.h"
class LJFHKAJPFNE;
class OCEHGBFCHMC;
namespace RPG::GameCore { class StageVoxelDataIndex; }

#define NOCCOPGOIKK_CTOR_OFFSET UNITYSDK_OFFSET(0xC5D1DE0)
#define NOCCOPGOIKK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC5D1FE0)
#define NOCCOPGOIKK_JNFMLHDMEJO_OFFSET UNITYSDK_OFFSET(0xC5D1F60)
#define NOCCOPGOIKK_LLFGOHPOOIK_OFFSET UNITYSDK_OFFSET(0xC5D2060)
#define NOCCOPGOIKK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC5D1EF0)

inline static constexpr unsigned int NOCCOPGOIKK_TypeDefinitionIndex = 76117;

	class NOCCOPGOIKK : public ::PAOIIOIGCOJ
	{
	public:
		::OCEHGBFCHMC* PENKELGKKKF; // 0x18
		::RPG::GameCore::StageVoxelDataIndex* DAAFKMFHHJL; // 0x20
		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + NOCCOPGOIKK_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOCCOPGOIKK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void JNFMLHDMEJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCCOPGOIKK_JNFMLHDMEJO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCCOPGOIKK_HADOHLNHHGB_OFFSET))(this);
		}

		::OCEHGBFCHMC* LLFGOHPOOIK()
		{
			return ((::OCEHGBFCHMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCCOPGOIKK_LLFGOHPOOIK_OFFSET))(this);
		}

	};
