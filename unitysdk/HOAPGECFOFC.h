#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class HOAPGECFOFC;

#define HOAPGECFOFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A381110)
#define HOAPGECFOFC_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1A381080)
#define HOAPGECFOFC_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1A381120)

inline static constexpr unsigned int HOAPGECFOFC_TypeDefinitionIndex = 63948;

	class HOAPGECFOFC : public ::System::Object
	{
	public:
		static ::HOAPGECFOFC** StaticGet_FLMODBLFAGD()
		{
			return (::HOAPGECFOFC**)UnitySDK::FromName("", "HOAPGECFOFC")->GetStaticField(0x21B00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAPGECFOFC_CTOR_OFFSET))(this);
		}

		static ::HOAPGECFOFC* GGBLHEHJBDO()
		{
			return ((::HOAPGECFOFC*(*)())((::PBYTE)hIl2Cpp + HOAPGECFOFC_GGBLHEHJBDO_OFFSET))();
		}

		::RPG::GameCore::FixPoint PKADDEPKJFN(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HOAPGECFOFC_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
