#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OIPMNNAHIFP.h"
class IPFNLCFACJH;
namespace RPG::AvatarSystem { class AvatarPath; }

#define LPOKMKKMGAL_ACFBHGPNMHG_OFFSET UNITYSDK_OFFSET(0xC097230)
#define LPOKMKKMGAL_AHKNIGNFOGC_OFFSET UNITYSDK_OFFSET(0xC0972E0)
#define LPOKMKKMGAL_BDIAJMKNMKM_OFFSET UNITYSDK_OFFSET(0xC097330)
#define LPOKMKKMGAL_CTOR_OFFSET UNITYSDK_OFFSET(0xC097130)
#define LPOKMKKMGAL_LEAFDECAGPG_OFFSET UNITYSDK_OFFSET(0xC097180)

inline static constexpr unsigned int LPOKMKKMGAL_TypeDefinitionIndex = 64210;

	class LPOKMKKMGAL : public ::System::Object
	{
	public:
		::IPFNLCFACJH* AILJGGPJPFN; // 0x10
		::System::Void _ctor(::IPFNLCFACJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPFNLCFACJH*))((::PBYTE)hIl2Cpp + LPOKMKKMGAL_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarPath* LEAFDECAGPG(::OIPMNNAHIFP a1)
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + LPOKMKKMGAL_LEAFDECAGPG_OFFSET))(this, a1);
		}

		::System::UInt32 ACFBHGPNMHG(::OIPMNNAHIFP a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + LPOKMKKMGAL_ACFBHGPNMHG_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarPath* AHKNIGNFOGC(::OIPMNNAHIFP a1)
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + LPOKMKKMGAL_AHKNIGNFOGC_OFFSET))(this, a1);
		}

		::System::UInt32 BDIAJMKNMKM(::OIPMNNAHIFP a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + LPOKMKKMGAL_BDIAJMKNMKM_OFFSET))(this, a1);
		}

	};
