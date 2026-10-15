#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJLCPMDGIBO;
class IFJOADBBGHG;
namespace RPG::Client { class AvatarOutfit; }

#define MMPOBKCOIGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB9DA620)
#define MMPOBKCOIGH_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0xB9DA610)
#define MMPOBKCOIGH_LAEKOKGBDIG_OFFSET UNITYSDK_OFFSET(0xB9DA790)
#define MMPOBKCOIGH_MKHOINGLJDN_OFFSET UNITYSDK_OFFSET(0xB9DA700)

inline static constexpr unsigned int MMPOBKCOIGH_TypeDefinitionIndex = 62675;

	class MMPOBKCOIGH : public ::System::Object
	{
	public:
		::IFJOADBBGHG* FHPLLDMHOJK; // 0x10
		::RPG::Client::AvatarOutfit* _Outfit_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPOBKCOIGH_CTOR_OFFSET))(this);
		}

		::RPG::Client::AvatarOutfit* get_Outfit()
		{
			return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPOBKCOIGH_GET_OUTFIT_OFFSET))(this);
		}

		::System::Boolean MKHOINGLJDN(::CJLCPMDGIBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + MMPOBKCOIGH_MKHOINGLJDN_OFFSET))(this, a1);
		}

		::System::Void LAEKOKGBDIG(::CJLCPMDGIBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + MMPOBKCOIGH_LAEKOKGBDIG_OFFSET))(this, a1);
		}

	};
