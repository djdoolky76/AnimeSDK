#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class AJHEFPNNKKC;
class ENJKEDGCLJF;
class EPAAAILJEKE;
class ICHBMEFJIHP;
class KADMNKEGHGH;
class OADLCEKKGBC;
namespace RPG::AvatarSystem { class IAvatar; }

#define ICONDBACCHJ_AHBEFELLFJI_OFFSET UNITYSDK_OFFSET(0x16E102C0)
#define ICONDBACCHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16E10140)
#define ICONDBACCHJ_KKKKEKGDNBB_OFFSET UNITYSDK_OFFSET(0x16E103B0)
#define ICONDBACCHJ_NICPOPJIFKC_OFFSET UNITYSDK_OFFSET(0x16E104C0)

inline static constexpr unsigned int ICONDBACCHJ_TypeDefinitionIndex = 64268;

	class ICONDBACCHJ : public ::System::Object
	{
	public:
		::OADLCEKKGBC* AAMACNCICKH; // 0x10
		::ENJKEDGCLJF* IJPANNPNBFG; // 0x18
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x20
		::KADMNKEGHGH* HELPPBKGMLD; // 0x28
		::ICHBMEFJIHP* IIGOMJPLLBD; // 0x30
		::EPAAAILJEKE* HPNDAEDOHNN; // 0x38
		::System::Void _ctor(::OADLCEKKGBC* a1, ::ICHBMEFJIHP* a2, ::AJHEFPNNKKC* a3, ::KADMNKEGHGH* a4, ::EPAAAILJEKE* a5, ::ENJKEDGCLJF* a6)
		{
			return ((::System::Void(*)(::PVOID, ::OADLCEKKGBC*, ::ICHBMEFJIHP*, ::AJHEFPNNKKC*, ::KADMNKEGHGH*, ::EPAAAILJEKE*, ::ENJKEDGCLJF*))((::PBYTE)hIl2Cpp + ICONDBACCHJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean AHBEFELLFJI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ICONDBACCHJ_AHBEFELLFJI_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* NICPOPJIFKC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ICONDBACCHJ_NICPOPJIFKC_OFFSET))(this, a1, a2);
		}

		::System::Boolean KKKKEKGDNBB(::System::UInt32 a1, ::System::UInt32 a2, ::AHHNGJGLOKA a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + ICONDBACCHJ_KKKKEKGDNBB_OFFSET))(this, a1, a2, a3);
		}

	};
