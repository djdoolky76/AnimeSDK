#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"
class AOGEACLGGNJ;
namespace RPG::Client { class CheckItemFinishMainMission; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KGPKDGKJHOH_CCIPLGIIKEC_OFFSET UNITYSDK_OFFSET(0xB3F2DF0)
#define KGPKDGKJHOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F28F0)
#define KGPKDGKJHOH_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB3F2A80)
#define KGPKDGKJHOH_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0xB3F29C0)
#define KGPKDGKJHOH_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0xB3F2E30)
#define KGPKDGKJHOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB3F2D40)
#define KGPKDGKJHOH__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB3F2AF0)
#define KGPKDGKJHOH__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xB3F2B60)
#define KGPKDGKJHOH__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xB3F2BD0)

inline static constexpr unsigned int KGPKDGKJHOH_TypeDefinitionIndex = 59889;

	class KGPKDGKJHOH : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::AOGEACLGGNJ* ABHOEPODOJD; // 0x10
		::RPG::Client::CheckItemFinishMainMission* FOPGEDMDIKE; // 0x18
		::System::UInt32 DOANFEPKNKG; // 0x20
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGPKDGKJHOH_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + KGPKDGKJHOH_FILLRSPCMDIDSTO_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + KGPKDGKJHOH_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPKDGKJHOH__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean _IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPKDGKJHOH__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPKDGKJHOH__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPKDGKJHOH_TOSTRING_OFFSET))(this);
		}

		::System::UInt32 CCIPLGIIKEC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPKDGKJHOH_CCIPLGIIKEC_OFFSET))(this);
		}

		::System::String* GetCheckItemInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPKDGKJHOH_GETCHECKITEMINFO_OFFSET))(this);
		}

	};
