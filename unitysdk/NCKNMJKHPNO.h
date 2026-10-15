#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BEFICCNFBPC;
class OFAKEFLLHNP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCKNMJKHPNO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0EAE0)
#define NCKNMJKHPNO_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0xBB0E790)
#define NCKNMJKHPNO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBB0E570)
#define NCKNMJKHPNO_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0xBB0E960)

inline static constexpr unsigned int NCKNMJKHPNO_TypeDefinitionIndex = 62509;

	class NCKNMJKHPNO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::BEFICCNFBPC*>* IAFNNMFIMOI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKNMJKHPNO_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKNMJKHPNO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void EIMIIHEDKFM(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NCKNMJKHPNO_EIMIIHEDKFM_OFFSET))(this, a1, a2);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + NCKNMJKHPNO_PAMKOLICNOL_OFFSET))(this, a1);
		}

	};
