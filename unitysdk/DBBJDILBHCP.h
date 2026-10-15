#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define DBBJDILBHCP_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0xDFD6900)
#define DBBJDILBHCP_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD6890)
#define DBBJDILBHCP_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0xDFD68A0)

	class DBBJDILBHCP : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType BFPOCEDAOMA; // 0x10
		::RPG::GameCore::AvatarPropertyType IDAHMOONBCA; // 0x14
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + DBBJDILBHCP_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + DBBJDILBHCP_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + DBBJDILBHCP_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

	};
