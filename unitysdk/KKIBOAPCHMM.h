#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"
class KKIBOAPCHMM;

#define KKIBOAPCHMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D09D440)
#define KKIBOAPCHMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D09D450)
#define KKIBOAPCHMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D09D460)
#define KKIBOAPCHMM_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1D09D400)

inline static constexpr unsigned int KKIBOAPCHMM_TypeDefinitionIndex = 15459;

	class KKIBOAPCHMM : public ::System::Object
	{
	public:
		static ::KKIBOAPCHMM** StaticGet_FLMODBLFAGD()
		{
			return (::KKIBOAPCHMM**)UnitySDK::FromName("", "KKIBOAPCHMM")->GetStaticField(0x35A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIBOAPCHMM_CTOR_OFFSET))(this);
		}

		static ::KKIBOAPCHMM* GGBLHEHJBDO()
		{
			return ((::KKIBOAPCHMM*(*)())((::PBYTE)hIl2Cpp + KKIBOAPCHMM_GGBLHEHJBDO_OFFSET))();
		}

		::System::Boolean Equals(::RPG::GameCore::SpaceZooChannelType a1, ::RPG::GameCore::SpaceZooChannelType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpaceZooChannelType, ::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + KKIBOAPCHMM_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::RPG::GameCore::SpaceZooChannelType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + KKIBOAPCHMM_GETHASHCODE_OFFSET))(this, a1);
		}

	};
