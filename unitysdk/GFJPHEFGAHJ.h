#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace RPG::Client { class ActivityData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GFJPHEFGAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x159FAE30)
#define GFJPHEFGAHJ_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x159FAE50)
#define GFJPHEFGAHJ_ODCNKFDDBIJ_OFFSET UNITYSDK_OFFSET(0x159FAFC0)
#define GFJPHEFGAHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x159FB060)
#define GFJPHEFGAHJ__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x159FAF50)

	class GFJPHEFGAHJ : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::RPG::Client::ActivityData* NJNNCOCIGCC; // 0x10
		::System::UInt32 DBIMHPGKEJK; // 0x18
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFJPHEFGAHJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + GFJPHEFGAHJ_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJPHEFGAHJ__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Void ODCNKFDDBIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJPHEFGAHJ_ODCNKFDDBIJ_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJPHEFGAHJ_TOSTRING_OFFSET))(this);
		}

	};
