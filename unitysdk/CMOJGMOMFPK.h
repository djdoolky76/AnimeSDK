#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendRewardType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class FHDJBLEGAHH;
namespace RPG::Client { class ActivityLocalLegendRewardData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMOJGMOMFPK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDA39770)
#define CMOJGMOMFPK_CTOR_OFFSET UNITYSDK_OFFSET(0xDA39F60)
#define CMOJGMOMFPK_HBHAFMJNNLD_OFFSET UNITYSDK_OFFSET(0xDA39A30)
#define CMOJGMOMFPK_HFOEHLHMDDI_OFFSET UNITYSDK_OFFSET(0xDA39ED0)
#define CMOJGMOMFPK_MEGJEOFGDND_OFFSET UNITYSDK_OFFSET(0xDA39DC0)

inline static constexpr unsigned int CMOJGMOMFPK_TypeDefinitionIndex = 61568;

	class CMOJGMOMFPK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOJGMOMFPK_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityLocalLegendRewardData* BPLPBPMEODA()
		{
			return ((::RPG::Client::ActivityLocalLegendRewardData*(*)())((::PBYTE)hIl2Cpp + CMOJGMOMFPK_BPLPBPMEODA_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityLocalLegendRewardType, ::System::Collections::Generic::List_1<::FHDJBLEGAHH*>*>* HBHAFMJNNLD()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityLocalLegendRewardType, ::System::Collections::Generic::List_1<::FHDJBLEGAHH*>*>*(*)())((::PBYTE)hIl2Cpp + CMOJGMOMFPK_HBHAFMJNNLD_OFFSET))();
		}

		static ::RPG::Client::TextID MEGJEOFGDND(::RPG::GameCore::ActivityLocalLegendRewardType a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::ActivityLocalLegendRewardType))((::PBYTE)hIl2Cpp + CMOJGMOMFPK_MEGJEOFGDND_OFFSET))(a1);
		}

		static ::System::String* HFOEHLHMDDI(::RPG::GameCore::ActivityLocalLegendRewardType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::ActivityLocalLegendRewardType))((::PBYTE)hIl2Cpp + CMOJGMOMFPK_HFOEHLHMDDI_OFFSET))(a1);
		}

	};
