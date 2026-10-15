#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EBBIEPLGOEC;
class NJGDIEAIHPD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILEMEHDHELP_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0x164AF930)
#define ILEMEHDHELP_CTOR_OFFSET UNITYSDK_OFFSET(0x164AFDF0)
#define ILEMEHDHELP_KCHKMMFCPBD_OFFSET UNITYSDK_OFFSET(0x164AFD30)
#define ILEMEHDHELP_KJAGMKOFOCF_OFFSET UNITYSDK_OFFSET(0x164AFB30)

inline static constexpr unsigned int ILEMEHDHELP_TypeDefinitionIndex = 62511;

	class ILEMEHDHELP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::EBBIEPLGOEC*>* FOBOPMENMHD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEMEHDHELP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::NJGDIEAIHPD* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + ILEMEHDHELP_ANOGKEGBNJE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint KJAGMKOFOCF(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::NJGDIEAIHPD* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + ILEMEHDHELP_KJAGMKOFOCF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KCHKMMFCPBD(::RPG::GameCore::AvatarPropertyType a1, ::EBBIEPLGOEC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::EBBIEPLGOEC*))((::PBYTE)hIl2Cpp + ILEMEHDHELP_KCHKMMFCPBD_OFFSET))(this, a1, a2);
		}

	};
