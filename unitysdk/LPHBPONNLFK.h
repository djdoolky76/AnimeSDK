#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADILGMDJEJF.h"
#include "unitysdk/RPG/GameCore/AvatarCreateType.h"
class DLIBCMNBLGF;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }

#define LPHBPONNLFK_CCMOKFPHJAB_OFFSET UNITYSDK_OFFSET(0xB8195A0)
#define LPHBPONNLFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB819460)
#define LPHBPONNLFK_KFHCMJCFINH_OFFSET UNITYSDK_OFFSET(0xB819470)
#define LPHBPONNLFK_KKGCLHKOEGF_OFFSET UNITYSDK_OFFSET(0xB819630)
#define LPHBPONNLFK_LGPLAOGBGLM_OFFSET UNITYSDK_OFFSET(0xB819480)
#define LPHBPONNLFK_OJBNPHBOJPP_OFFSET UNITYSDK_OFFSET(0xB819530)

inline static constexpr unsigned int LPHBPONNLFK_TypeDefinitionIndex = 56877;

	class LPHBPONNLFK : public ::ADILGMDJEJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + LPHBPONNLFK_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarCreateType KFHCMJCFINH()
		{
			return ((::RPG::GameCore::AvatarCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHBPONNLFK_KFHCMJCFINH_OFFSET))(this);
		}

		::System::Void LGPLAOGBGLM(::DLIBCMNBLGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLIBCMNBLGF*))((::PBYTE)hIl2Cpp + LPHBPONNLFK_LGPLAOGBGLM_OFFSET))(this, a1);
		}

		::System::Void OJBNPHBOJPP(::RPG::GameCore::AvatarDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + LPHBPONNLFK_OJBNPHBOJPP_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* CCMOKFPHJAB(::RPG::GameCore::IAvatarCommonRowWrap* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + LPHBPONNLFK_CCMOKFPHJAB_OFFSET))(this, a1);
		}

		::System::Void KKGCLHKOEGF(::RPG::GameCore::AvatarRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + LPHBPONNLFK_KKGCLHKOEGF_OFFSET))(this, a1);
		}

	};
