#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/System/Object.h"
class LOBFOKCKPKB;
namespace RPG::Client { class ClockParkAttributeItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB734C0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCB72E50)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_GET_ATTRIBUTEITEMSDICT_OFFSET UNITYSDK_OFFSET(0xCB734A0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xCB72E60)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_SET_ATTRIBUTEITEMSDICT_OFFSET UNITYSDK_OFFSET(0xCB734B0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xCB73370)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkAttributeInfo_TypeDefinitionIndex = 61483;

	class ClockParkAttributeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>* _AttributeItemsDict_k__BackingField; // 0x10
		static ::System::Collections::Generic::List_1<::RPG::Client::ClockParkAttributeType>** StaticGet_AttributeTypeList()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::ClockParkAttributeType>**)UnitySDK::FromName("RPG.Client", "ClockParkAttributeInfo")->GetStaticField(0x152C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_INIT_OFFSET))(this);
		}

		::System::Void Sync(::LOBFOKCKPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOBFOKCKPKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>* get_AttributeItemsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_GET_ATTRIBUTEITEMSDICT_OFFSET))(this);
		}

		::System::Void set_AttributeItemsDict(::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEINFO_SET_ATTRIBUTEITEMSDICT_OFFSET))(this, a1);
		}

	};
}
