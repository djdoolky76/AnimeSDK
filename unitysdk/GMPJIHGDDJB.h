#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreCharacterStatus.h"
#include "unitysdk/RPG/GameCore/PreAvatarType.h"
#include "unitysdk/System/Object.h"
class PNHJNKGPPCC;

#define GMPJIHGDDJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD1D60)
#define GMPJIHGDDJB_EGDKAOEJKDJ_OFFSET UNITYSDK_OFFSET(0x15AD1FC0)
#define GMPJIHGDDJB_GFPAJCLILAO_OFFSET UNITYSDK_OFFSET(0x15AD1D70)
#define GMPJIHGDDJB_GIIBNDFKECO_OFFSET UNITYSDK_OFFSET(0x15AD1EE0)
#define GMPJIHGDDJB_JPKMKMDGMHK_OFFSET UNITYSDK_OFFSET(0x15AD2670)
#define GMPJIHGDDJB_LJJJNPJEHEB_OFFSET UNITYSDK_OFFSET(0x15AD26F0)

inline static constexpr unsigned int GMPJIHGDDJB_TypeDefinitionIndex = 66707;

	class GMPJIHGDDJB : public ::System::Object
	{
	public:
		::PNHJNKGPPCC* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::PNHJNKGPPCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNHJNKGPPCC*))((::PBYTE)hIl2Cpp + GMPJIHGDDJB_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::PreCharacterStatus GFPAJCLILAO(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::PreAvatarType a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::PreCharacterStatus(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PreAvatarType, ::System::UInt32))((::PBYTE)hIl2Cpp + GMPJIHGDDJB_GFPAJCLILAO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GIIBNDFKECO(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::PreAvatarType a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PreAvatarType, ::System::UInt32))((::PBYTE)hIl2Cpp + GMPJIHGDDJB_GIIBNDFKECO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EGDKAOEJKDJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMPJIHGDDJB_EGDKAOEJKDJ_OFFSET))(this, a1);
		}

		::System::Boolean JPKMKMDGMHK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMPJIHGDDJB_JPKMKMDGMHK_OFFSET))(this, a1);
		}

		::System::Boolean LJJJNPJEHEB(::System::UInt32 a1, ::RPG::Client::PreCharacterStatus a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PreCharacterStatus))((::PBYTE)hIl2Cpp + GMPJIHGDDJB_LJJJNPJEHEB_OFFSET))(this, a1, a2);
		}

	};
