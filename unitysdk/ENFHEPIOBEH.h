#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ENFHEPIOBEH_CTOR_OFFSET UNITYSDK_OFFSET(0x164BBB50)
#define ENFHEPIOBEH_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x164BBBF0)
#define ENFHEPIOBEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164BBD20)
#define ENFHEPIOBEH__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x164BBC80)

inline static constexpr unsigned int ENFHEPIOBEH_TypeDefinitionIndex = 61155;

	class ENFHEPIOBEH : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 CEEADNDBJPJ; // 0x10
		::System::UInt32 OFEEMOCGHCA; // 0x14
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENFHEPIOBEH_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + ENFHEPIOBEH_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFHEPIOBEH__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFHEPIOBEH_TOSTRING_OFFSET))(this);
		}

	};
