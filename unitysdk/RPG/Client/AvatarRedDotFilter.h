#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xD0714F0)
#define RPG_CLIENT_AVATARREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xD071A50)
#define RPG_CLIENT_AVATARREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD071490)
#define RPG_CLIENT_AVATARREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xD070E80)
#define RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYADDNEWAVATAR_OFFSET UNITYSDK_OFFSET(0xD071720)
#define RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYALL_OFFSET UNITYSDK_OFFSET(0xD0716D0)
#define RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYONE_OFFSET UNITYSDK_OFFSET(0xD071860)
#define RPG_CLIENT_AVATARREDDOTFILTER__UPDATEALLAVATAR_OFFSET UNITYSDK_OFFSET(0xD070ED0)
#define RPG_CLIENT_AVATARREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0xD071920)
#define RPG_CLIENT_AVATARREDDOTFILTER__UPDATEONEAVATAR_OFFSET UNITYSDK_OFFSET(0xD0717E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRedDotFilter_TypeDefinitionIndex = 68766;

	class AvatarRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotAvatarIDs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnNotifyAll(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYALL_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyAddNewAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYADDNEWAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyOne(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYONE_OFFSET))(this, a1);
		}

		::System::Void _UpdateAllAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__UPDATEALLAVATAR_OFFSET))(this);
		}

		::System::Void _UpdateOneAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__UPDATEONEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _UpdateAvatarRedDot(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET))(this, a1, a2);
		}

	};
}
