#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class DBLIGELPPIA;
class ICHBMEFJIHP;
class PCNOHEGKHKM;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJGBHDLFLCA_CPBGIHFIHGG_OFFSET UNITYSDK_OFFSET(0xB711280)
#define LJGBHDLFLCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB710F10)
#define LJGBHDLFLCA_EPKGDEJAAJH_OFFSET UNITYSDK_OFFSET(0xB711310)
#define LJGBHDLFLCA_KFJEGIEJPBM_OFFSET UNITYSDK_OFFSET(0xB711090)
#define LJGBHDLFLCA_NICPOPJIFKC_OFFSET UNITYSDK_OFFSET(0xB711040)

inline static constexpr unsigned int LJGBHDLFLCA_TypeDefinitionIndex = 62829;

	class LJGBHDLFLCA : public ::System::Object
	{
	public:
		::PCNOHEGKHKM* LPFNKPGFIFA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::Avatar*>* IGDOPPODBGI; // 0x18
		::ICHBMEFJIHP* IIGOMJPLLBD; // 0x20
		::DBLIGELPPIA* HEJEGOGBFMP; // 0x28
		::System::Void _ctor(::DBLIGELPPIA* a1, ::ICHBMEFJIHP* a2, ::PCNOHEGKHKM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DBLIGELPPIA*, ::ICHBMEFJIHP*, ::PCNOHEGKHKM*))((::PBYTE)hIl2Cpp + LJGBHDLFLCA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::AvatarSystem::IAvatar* NICPOPJIFKC(::AHHNGJGLOKA a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + LJGBHDLFLCA_NICPOPJIFKC_OFFSET))(this, a1);
		}

		::System::Boolean CPBGIHFIHGG(::RPG::AvatarSystem::Avatar* a1, ::AHHNGJGLOKA a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::Avatar*, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + LJGBHDLFLCA_CPBGIHFIHGG_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* KFJEGIEJPBM(::AHHNGJGLOKA a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + LJGBHDLFLCA_KFJEGIEJPBM_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* EPKGDEJAAJH(::AHHNGJGLOKA a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + LJGBHDLFLCA_EPKGDEJAAJH_OFFSET))(this, a1);
		}

	};
