#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IKAALIEGBOG_CTOR_OFFSET UNITYSDK_OFFSET(0x164740F0)
#define IKAALIEGBOG_ECFLFDGEALH_OFFSET UNITYSDK_OFFSET(0x164740B0)
#define IKAALIEGBOG_FLJNFJFIHOI_OFFSET UNITYSDK_OFFSET(0x16473F70)
#define IKAALIEGBOG_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0x16474060)
#define IKAALIEGBOG_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0x16474010)
#define IKAALIEGBOG_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x16473FC0)

inline static constexpr unsigned int IKAALIEGBOG_TypeDefinitionIndex = 72198;

	class IKAALIEGBOG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAALIEGBOG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ElationTimeAtmosphereType FLJNFJFIHOI()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAALIEGBOG_FLJNFJFIHOI_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAALIEGBOG_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAALIEGBOG_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAALIEGBOG_HOBKJMHIJHC_OFFSET))(this);
		}

		::System::Boolean ECFLFDGEALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAALIEGBOG_ECFLFDGEALH_OFFSET))(this);
		}

	};
