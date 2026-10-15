#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class AHEFENOJHLH;
class CEKGGHILKPC;
class JAANHJGOINJ;
class NEEGEMFMEAJ;
namespace RPG::AvatarSystem { class IAvatar; }

#define JJNNAGMLCIC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB203690)
#define JJNNAGMLCIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2035B0)
#define JJNNAGMLCIC_FIPOHANBOMM_OFFSET UNITYSDK_OFFSET(0xB2039C0)

inline static constexpr unsigned int JJNNAGMLCIC_TypeDefinitionIndex = 81215;

	class JJNNAGMLCIC : public ::System::Object
	{
	public:
		::AHEFENOJHLH* EEFMDEHLLFI; // 0x10
		::JAANHJGOINJ* LIOJKFIGGIJ; // 0x18
		::System::Void _ctor(::NEEGEMFMEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEEGEMFMEAJ*))((::PBYTE)hIl2Cpp + JJNNAGMLCIC_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* BPLPBPMEODA(::CEKGGHILKPC* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::CEKGGHILKPC*))((::PBYTE)hIl2Cpp + JJNNAGMLCIC_BPLPBPMEODA_OFFSET))(this, a1);
		}

		static ::AHHNGJGLOKA FIPOHANBOMM(::CEKGGHILKPC* a1)
		{
			return ((::AHHNGJGLOKA(*)(::CEKGGHILKPC*))((::PBYTE)hIl2Cpp + JJNNAGMLCIC_FIPOHANBOMM_OFFSET))(a1);
		}

	};
