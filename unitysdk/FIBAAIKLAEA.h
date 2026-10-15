#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKFLHBCAKFC.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define FIBAAIKLAEA_ALNAEEDEENP_OFFSET UNITYSDK_OFFSET(0x15797580)
#define FIBAAIKLAEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15797300)
#define FIBAAIKLAEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15797520)
#define FIBAAIKLAEA_EGNMAGMPEDK_OFFSET UNITYSDK_OFFSET(0x15797860)
#define FIBAAIKLAEA_NKMPPIDGFJF_OFFSET UNITYSDK_OFFSET(0x15797330)
#define FIBAAIKLAEA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15797760)

inline static constexpr unsigned int FIBAAIKLAEA_TypeDefinitionIndex = 60277;

	class FIBAAIKLAEA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
		::FKFLHBCAKFC EJHODPJIFIN; // 0x18
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x40
		::System::Int32 APJNLBCCHPG; // 0x48
		::System::Boolean LANGKOOBONL; // 0x4C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::FKFLHBCAKFC a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::FKFLHBCAKFC))((::PBYTE)hIl2Cpp + FIBAAIKLAEA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBAAIKLAEA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean PAGKOAEOLKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBAAIKLAEA_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void NKMPPIDGFJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBAAIKLAEA_NKMPPIDGFJF_OFFSET))(this);
		}

		::System::Void ALNAEEDEENP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBAAIKLAEA_ALNAEEDEENP_OFFSET))(this);
		}

		::System::Void EGNMAGMPEDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBAAIKLAEA_EGNMAGMPEDK_OFFSET))(this);
		}

	};
