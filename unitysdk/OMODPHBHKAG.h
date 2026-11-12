#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLAHHGIFHA;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }

#define OMODPHBHKAG_AFLOFDJMIBO_OFFSET UNITYSDK_OFFSET(0xC8426C0)
#define OMODPHBHKAG_CCJIIDKNOCF_OFFSET UNITYSDK_OFFSET(0xC842E50)
#define OMODPHBHKAG_CODNFBINCMJ_OFFSET UNITYSDK_OFFSET(0xC842610)
#define OMODPHBHKAG_CTOR_OFFSET UNITYSDK_OFFSET(0xC842340)
#define OMODPHBHKAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC842530)
#define OMODPHBHKAG_HHGHIDJKAFG_OFFSET UNITYSDK_OFFSET(0xC842DA0)
#define OMODPHBHKAG_IHLPKLIFAMJ_OFFSET UNITYSDK_OFFSET(0xC842650)

inline static constexpr unsigned int OMODPHBHKAG_TypeDefinitionIndex = 68327;

	class OMODPHBHKAG : public ::System::Object
	{
	public:
		::JOLAHHGIFHA* CKBCNCKPHJL; // 0x10
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
		::RPG::GameCore::CharacterInputData* ILPPJFFPJEM; // 0x20
		::System::Boolean PHMOLAGBNGL; // 0x28
		::System::Byte _padding0[0x7];
		::System::UInt64 JHOKIFAKAMJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODPHBHKAG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODPHBHKAG_DISPOSE_OFFSET))(this);
		}

		::System::Void CODNFBINCMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODPHBHKAG_CODNFBINCMJ_OFFSET))(this);
		}

		::System::Void IHLPKLIFAMJ(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + OMODPHBHKAG_IHLPKLIFAMJ_OFFSET))(this, a1, a2);
		}

		::System::Void AFLOFDJMIBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODPHBHKAG_AFLOFDJMIBO_OFFSET))(this);
		}

		::System::Boolean HHGHIDJKAFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODPHBHKAG_HHGHIDJKAFG_OFFSET))(this);
		}

		::System::Boolean CCJIIDKNOCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODPHBHKAG_CCJIIDKNOCF_OFFSET))(this);
		}

	};
