#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADILGMDJEJF;
class DLIBCMNBLGF;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }

#define ADILGMDJEJF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x182AF6D0)
#define ADILGMDJEJF_CCMOKFPHJAB_OFFSET UNITYSDK_OFFSET(0x182AF7A0)
#define ADILGMDJEJF_CTOR_OFFSET UNITYSDK_OFFSET(0x182AF6B0)
#define ADILGMDJEJF_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x182AF6C0)
#define ADILGMDJEJF_KKGCLHKOEGF_OFFSET UNITYSDK_OFFSET(0x182AF7F0)
#define ADILGMDJEJF_LGPLAOGBGLM_OFFSET UNITYSDK_OFFSET(0x182AF750)
#define ADILGMDJEJF_OJBNPHBOJPP_OFFSET UNITYSDK_OFFSET(0x182AF840)

inline static constexpr unsigned int ADILGMDJEJF_TypeDefinitionIndex = 58099;

	class ADILGMDJEJF : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarDataComponent* _Owner_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + ADILGMDJEJF_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarDataComponent* get_Owner()
		{
			return ((::RPG::GameCore::AvatarDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADILGMDJEJF_GET_OWNER_OFFSET))(this);
		}

		static ::ADILGMDJEJF* BPLPBPMEODA(::RPG::GameCore::AvatarDataComponent* a1)
		{
			return ((::ADILGMDJEJF*(*)(::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + ADILGMDJEJF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void LGPLAOGBGLM(::DLIBCMNBLGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLIBCMNBLGF*))((::PBYTE)hIl2Cpp + ADILGMDJEJF_LGPLAOGBGLM_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* CCMOKFPHJAB(::RPG::GameCore::IAvatarCommonRowWrap* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + ADILGMDJEJF_CCMOKFPHJAB_OFFSET))(this, a1);
		}

		::System::Void KKGCLHKOEGF(::RPG::GameCore::AvatarRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + ADILGMDJEJF_KKGCLHKOEGF_OFFSET))(this, a1);
		}

		::System::Void OJBNPHBOJPP(::RPG::GameCore::AvatarDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + ADILGMDJEJF_OJBNPHBOJPP_OFFSET))(this, a1);
		}

	};
