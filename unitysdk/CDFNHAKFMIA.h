#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
class CJLCPMDGIBO;
class HABOIOEBDOA;
class HCBHBJEOCHL;
class ILIMGHEIAMG;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define CDFNHAKFMIA_CTOR_OFFSET UNITYSDK_OFFSET(0xC763B70)
#define CDFNHAKFMIA_GGGFIFKDHDA_OFFSET UNITYSDK_OFFSET(0xC763D30)
#define CDFNHAKFMIA_MAPOJCHIIAG_OFFSET UNITYSDK_OFFSET(0xC763C20)

inline static constexpr unsigned int CDFNHAKFMIA_TypeDefinitionIndex = 62738;

	class CDFNHAKFMIA : public ::System::Object
	{
	public:
		::ILIMGHEIAMG* CEFLLELKFOP; // 0x10
		::HABOIOEBDOA* LPFNKPGFIFA; // 0x18
		::System::Void _ctor(::ILIMGHEIAMG* a1, ::HABOIOEBDOA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ILIMGHEIAMG*, ::HABOIOEBDOA*))((::PBYTE)hIl2Cpp + CDFNHAKFMIA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* MAPOJCHIIAG(::APCGKBOPGJL a1, ::System::UInt32 a2, ::System::String* a3, ::Proto::DisplayAvatarDetailInfo* a4, ::CJLCPMDGIBO* a5)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32, ::System::String*, ::Proto::DisplayAvatarDetailInfo*, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + CDFNHAKFMIA_MAPOJCHIIAG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::AvatarSystem::IAvatar* GGGFIFKDHDA(::HCBHBJEOCHL* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + CDFNHAKFMIA_GGGFIFKDHDA_OFFSET))(this, a1);
		}

	};
