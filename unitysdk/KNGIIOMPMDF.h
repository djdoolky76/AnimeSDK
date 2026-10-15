#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class MaterialSwitchBehavior; }

#define KNGIIOMPMDF_CTOR_OFFSET UNITYSDK_OFFSET(0xB583A50)
#define KNGIIOMPMDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB583A60)
#define KNGIIOMPMDF_HLEELJKDCFI_OFFSET UNITYSDK_OFFSET(0xB583B50)
#define KNGIIOMPMDF_LFJHDLLFIMP_OFFSET UNITYSDK_OFFSET(0xB583AB0)

inline static constexpr unsigned int KNGIIOMPMDF_TypeDefinitionIndex = 57362;

	class KNGIIOMPMDF : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MaterialSwitchBehavior* EHKDPNGAHCG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGIIOMPMDF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGIIOMPMDF_DISPOSE_OFFSET))(this);
		}

		::System::Void LFJHDLLFIMP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNGIIOMPMDF_LFJHDLLFIMP_OFFSET))(this, a1);
		}

		::System::Void HLEELJKDCFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGIIOMPMDF_HLEELJKDCFI_OFFSET))(this);
		}

	};
