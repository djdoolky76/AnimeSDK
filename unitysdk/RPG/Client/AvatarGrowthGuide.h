#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
class PMDLIGBIKAA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarGrowthGuide; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4C5DA0)
#define RPG_CLIENT_AVATARGROWTHGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C5E60)
#define RPG_CLIENT_AVATARGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0x1A4C6080)
#define RPG_CLIENT_AVATARGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x1A4C5EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowthGuide_TypeDefinitionIndex = 67460;

	class AvatarGrowthGuide : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::PMDLIGBIKAA* _Factory; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AvatarGrowthGuide* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::AvatarGrowthGuide*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

	};
}
