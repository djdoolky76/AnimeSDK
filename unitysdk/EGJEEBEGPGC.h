#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define EGJEEBEGPGC_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0x14518600)
#define EGJEEBEGPGC_CTOR_OFFSET UNITYSDK_OFFSET(0x14518360)
#define EGJEEBEGPGC_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0x14518370)

inline static constexpr unsigned int EGJEEBEGPGC_TypeDefinitionIndex = 62523;

	class EGJEEBEGPGC : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType JCHIBAFOHOB; // 0x10
		::RPG::GameCore::AvatarPropertyType PHEGHDPHALH; // 0x14
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + EGJEEBEGPGC_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + EGJEEBEGPGC_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + EGJEEBEGPGC_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

	};
