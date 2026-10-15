#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class CDKEBLNOEPH;
class HGDELEAHIJO;
class MEHEMFNHEMK;
class OAPFEGCKDNG;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EMGAGCLHCNL_CTOR_OFFSET UNITYSDK_OFFSET(0x15529330)
#define EMGAGCLHCNL_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x155290C0)
#define EMGAGCLHCNL_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x15528F20)
#define EMGAGCLHCNL_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x15529000)
#define EMGAGCLHCNL_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x15528FF0)
#define EMGAGCLHCNL_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x15528FE0)
#define EMGAGCLHCNL_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x15528FD0)
#define EMGAGCLHCNL_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x15528F70)
#define EMGAGCLHCNL_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x15529010)
#define EMGAGCLHCNL_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x15528FA0)
#define EMGAGCLHCNL_LHIBMOJONAE_OFFSET UNITYSDK_OFFSET(0x15529250)
#define EMGAGCLHCNL_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x155292E0)
#define EMGAGCLHCNL_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x155291C0)
#define EMGAGCLHCNL_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x15529020)
#define EMGAGCLHCNL__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x15529030)

inline static constexpr unsigned int EMGAGCLHCNL_TypeDefinitionIndex = 59470;

	class EMGAGCLHCNL
	{
	public:
		::System::Boolean _IsEnable_k__BackingField; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* get_BundleVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_GET_BUNDLEVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BundleManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
		}

		::System::String* get_BlockVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_GET_BLOCKVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BlockManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_GET_BLOCKMANIFESTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_SET_ISENABLE_OFFSET))(this, a1);
		}

		::MEHEMFNHEMK* _LoadIndexInfo(::System::String* a1)
		{
			return ((::MEHEMFNHEMK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EMGAGCLHCNL__LOADINDEXINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetServerBlockManifestName(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* OnEnumBlockItems()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_ONENUMBLOCKITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* LHIBMOJONAE(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_LHIBMOJONAE_OFFSET))(this, a1);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGAGCLHCNL_ONALLSUCCEED_OFFSET))(this);
		}

	};
