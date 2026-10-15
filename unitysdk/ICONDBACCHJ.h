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

#define ICONDBACCHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E55980)
#define ICONDBACCHJ_DHEOAMBKNMM_OFFSET UNITYSDK_OFFSET(0x15E55C00)
#define ICONDBACCHJ_LBDINHCAPAI_OFFSET UNITYSDK_OFFSET(0x15E55D00)
#define ICONDBACCHJ_NICPOPJIFKC_OFFSET UNITYSDK_OFFSET(0x15E55B00)

inline static constexpr unsigned int ICONDBACCHJ_TypeDefinitionIndex = 62830;

	class ICONDBACCHJ : public ::System::Object
	{
	public:
		::EPAAAILJEKE* HPNDAEDOHNN; // 0x10
		::ICHBMEFJIHP* IIGOMJPLLBD; // 0x18
		::ENJKEDGCLJF* IJPANNPNBFG; // 0x20
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x28
		::OADLCEKKGBC* AAMACNCICKH; // 0x30
		::KADMNKEGHGH* HELPPBKGMLD; // 0x38
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
