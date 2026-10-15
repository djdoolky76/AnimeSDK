#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AOGEACLGGNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1589F240)
#define AOGEACLGGNJ_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x1589F260)
#define AOGEACLGGNJ_HONLOCDAPPB_OFFSET UNITYSDK_OFFSET(0x1589F2F0)
#define AOGEACLGGNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1589F640)
#define AOGEACLGGNJ__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x1589F330)
#define AOGEACLGGNJ__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x1589F4B0)
#define AOGEACLGGNJ__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1589F5C0)

inline static constexpr unsigned int AOGEACLGGNJ_TypeDefinitionIndex = 59891;

	class AOGEACLGGNJ : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::System::UInt32 JBMOIEJNEFD; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOGEACLGGNJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + AOGEACLGGNJ_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::UInt32 HONLOCDAPPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGEACLGGNJ_HONLOCDAPPB_OFFSET))(this);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGEACLGGNJ__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean _IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGEACLGGNJ__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGEACLGGNJ__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGEACLGGNJ_TOSTRING_OFFSET))(this);
		}

	};
