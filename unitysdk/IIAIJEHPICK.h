#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace RPG::Client { class ActivityData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IIAIJEHPICK_CTOR_OFFSET UNITYSDK_OFFSET(0x164229B0)
#define IIAIJEHPICK_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x164229D0)
#define IIAIJEHPICK_ODCNKFDDBIJ_OFFSET UNITYSDK_OFFSET(0x16422B50)
#define IIAIJEHPICK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16422BF0)
#define IIAIJEHPICK__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x16422AD0)

inline static constexpr unsigned int IIAIJEHPICK_TypeDefinitionIndex = 59870;

	class IIAIJEHPICK : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::RPG::Client::ActivityData* NJNNCOCIGCC; // 0x10
		::System::UInt32 DBIMHPGKEJK; // 0x18
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIAIJEHPICK_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + IIAIJEHPICK_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIJEHPICK__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Void ODCNKFDDBIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIJEHPICK_ODCNKFDDBIJ_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIJEHPICK_TOSTRING_OFFSET))(this);
		}

	};
