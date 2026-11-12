#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class AHEFENOJHLH;
class JAANHJGOINJ;
class PDCNJEMOOID;
namespace RPG::AvatarSystem { class Avatar; }

#define DPDPDOIKOAG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12DF61A0)
#define DPDPDOIKOAG_CTOR_OFFSET UNITYSDK_OFFSET(0x12DF60C0)
#define DPDPDOIKOAG_LGAHHFJDAJD_OFFSET UNITYSDK_OFFSET(0x12DF62C0)

inline static constexpr unsigned int DPDPDOIKOAG_TypeDefinitionIndex = 63951;

	class DPDPDOIKOAG : public ::System::Object
	{
	public:
		::AHEFENOJHLH* EEFMDEHLLFI; // 0x10
		::JAANHJGOINJ* LIOJKFIGGIJ; // 0x18
		::System::Void _ctor(::PDCNJEMOOID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDCNJEMOOID*))((::PBYTE)hIl2Cpp + DPDPDOIKOAG_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Avatar* BPLPBPMEODA(::AHHNGJGLOKA a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::AHHNGJGLOKA, ::System::UInt32))((::PBYTE)hIl2Cpp + DPDPDOIKOAG_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::System::Void LGAHHFJDAJD(::AHHNGJGLOKA a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AHHNGJGLOKA, ::System::UInt32))((::PBYTE)hIl2Cpp + DPDPDOIKOAG_LGAHHFJDAJD_OFFSET))(this, a1, a2);
		}

	};
