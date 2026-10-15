#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define IMAHBKJCNKJ_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0x164CDEF0)
#define IMAHBKJCNKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164CDE80)
#define IMAHBKJCNKJ_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0x164CDE90)

	class IMAHBKJCNKJ : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* NHBCLNHKCHA; // 0x10
		::System::Void _ctor(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + IMAHBKJCNKJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + IMAHBKJCNKJ_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + IMAHBKJCNKJ_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

	};
