#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xCF90410)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xCF90690)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF903B0)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xCF90360)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_UPDATEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xCF900A0)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__ONUPDATEALLREDDOT_OFFSET UNITYSDK_OFFSET(0xCF905F0)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__ONUPDATEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xCF90640)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherSkillCoreItemRedDotFilter_TypeDefinitionIndex = 68761;

	class AetherSkillCoreItemRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* IsNewSkillCoreIdList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_CTOR_OFFSET))(this);
		}

		::System::Void UpdateIsNewRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_UPDATEISNEWREDDOT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUpdateAllRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__ONUPDATEALLREDDOT_OFFSET))(this, a1);
		}

		::System::Void _OnUpdateIsNewRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__ONUPDATEISNEWREDDOT_OFFSET))(this, a1);
		}

	};
}
