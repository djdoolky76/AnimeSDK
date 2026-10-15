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

#define ICONDBACCHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E629F0)
#define ICONDBACCHJ_DHEOAMBKNMM_OFFSET UNITYSDK_OFFSET(0x15E62C60)
#define ICONDBACCHJ_LBDINHCAPAI_OFFSET UNITYSDK_OFFSET(0x15E62D60)
#define ICONDBACCHJ_NICPOPJIFKC_OFFSET UNITYSDK_OFFSET(0x15E62B70)

	class ICONDBACCHJ : public ::System::Object
	{
	public:
		::KADMNKEGHGH* HELPPBKGMLD; // 0x10
		::ENJKEDGCLJF* IJPANNPNBFG; // 0x18
		::EPAAAILJEKE* HPNDAEDOHNN; // 0x20
		::OADLCEKKGBC* AAMACNCICKH; // 0x28
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x30
		::ICHBMEFJIHP* IIGOMJPLLBD; // 0x38
		::System::Void _ctor(::OADLCEKKGBC* a1, ::ICHBMEFJIHP* a2, ::AJHEFPNNKKC* a3, ::KADMNKEGHGH* a4, ::EPAAAILJEKE* a5, ::ENJKEDGCLJF* a6)
		{
			return ((::System::Void(*)(::PVOID, ::OADLCEKKGBC*, ::ICHBMEFJIHP*, ::AJHEFPNNKKC*, ::KADMNKEGHGH*, ::EPAAAILJEKE*, ::ENJKEDGCLJF*))((::PBYTE)hIl2Cpp + ICONDBACCHJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::AvatarSystem::IAvatar* NICPOPJIFKC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ICONDBACCHJ_NICPOPJIFKC_OFFSET))(this, a1, a2);
		}

		::AHHNGJGLOKA DHEOAMBKNMM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::AHHNGJGLOKA(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ICONDBACCHJ_DHEOAMBKNMM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LBDINHCAPAI(::AHHNGJGLOKA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + ICONDBACCHJ_LBDINHCAPAI_OFFSET))(this, a1);
		}

	};
