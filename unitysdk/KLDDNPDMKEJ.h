#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"
class AOGEACLGGNJ;
class CMNDOAPOPEI;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KLDDNPDMKEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4ED110)
#define KLDDNPDMKEJ_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB4ED3A0)
#define KLDDNPDMKEJ_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0xB4ED2E0)
#define KLDDNPDMKEJ_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0xB4ED710)
#define KLDDNPDMKEJ_JNMKEMLOCNP_OFFSET UNITYSDK_OFFSET(0xB4ED760)
#define KLDDNPDMKEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB4ED660)
#define KLDDNPDMKEJ__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB4ED410)
#define KLDDNPDMKEJ__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xB4ED480)
#define KLDDNPDMKEJ__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xB4ED4F0)

	class KLDDNPDMKEJ : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::AOGEACLGGNJ* ABHOEPODOJD; // 0x10
		::CMNDOAPOPEI* LAAMFNNDKLL; // 0x18
		::System::UInt32 AENNMCLOKOA; // 0x20
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLDDNPDMKEJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + KLDDNPDMKEJ_FILLRSPCMDIDSTO_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + KLDDNPDMKEJ_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDDNPDMKEJ__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean _IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDDNPDMKEJ__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDDNPDMKEJ__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDDNPDMKEJ_TOSTRING_OFFSET))(this);
		}

		::System::String* GetCheckItemInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDDNPDMKEJ_GETCHECKITEMINFO_OFFSET))(this);
		}

		::System::UInt32 JNMKEMLOCNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDDNPDMKEJ_JNMKEMLOCNP_OFFSET))(this);
		}

	};
