#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDIKCLEFPJL;
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class SkillTreeGrowthGuide; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0xE0E72A0)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xE0E7380)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0xE0E75C0)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xE0E73F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeGrowthGuide_TypeDefinitionIndex = 65560;

	class SkillTreeGrowthGuide : public ::System::Object
	{
	public:
		::CDIKCLEFPJL* _Factory; // 0x10
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SkillTreeGrowthGuide* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::SkillTreeGrowthGuide*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

	};
}
