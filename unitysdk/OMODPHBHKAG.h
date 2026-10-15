#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLAHHGIFHA;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }

#define OMODPHBHKAG_AFLOFDJMIBO_OFFSET UNITYSDK_OFFSET(0xBF3D720)
#define OMODPHBHKAG_CCJIIDKNOCF_OFFSET UNITYSDK_OFFSET(0xBF3DEB0)
#define OMODPHBHKAG_CODNFBINCMJ_OFFSET UNITYSDK_OFFSET(0xBF3D670)
#define OMODPHBHKAG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF3D3A0)
#define OMODPHBHKAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF3D590)
#define OMODPHBHKAG_HHGHIDJKAFG_OFFSET UNITYSDK_OFFSET(0xBF3DE00)
#define OMODPHBHKAG_IHLPKLIFAMJ_OFFSET UNITYSDK_OFFSET(0xBF3D6B0)

inline static constexpr unsigned int OMODPHBHKAG_TypeDefinitionIndex = 66391;

	class OMODPHBHKAG : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterInputData* ILPPJFFPJEM; // 0x10
		::JOLAHHGIFHA* CKBCNCKPHJL; // 0x18
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
		::System::UInt64 JHOKIFAKAMJ; // 0x28
		::System::Boolean PHMOLAGBNGL; // 0x30
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
