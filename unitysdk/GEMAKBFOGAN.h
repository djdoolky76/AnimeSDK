#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GEMAKBFOGAN_CTOR_OFFSET UNITYSDK_OFFSET(0x159E0BF0)
#define GEMAKBFOGAN_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x159E0C10)
#define GEMAKBFOGAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x159E0D90)
#define GEMAKBFOGAN__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x159E0CA0)

	class GEMAKBFOGAN : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 CIBIJLKEIMN; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEMAKBFOGAN_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + GEMAKBFOGAN_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMAKBFOGAN__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMAKBFOGAN_TOSTRING_OFFSET))(this);
		}

	};
