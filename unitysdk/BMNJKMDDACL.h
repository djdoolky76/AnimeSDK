#pragma once
#include "unitysdk/unitysdk.h"
class BJHAIOJBFAK;
class CDKEBLNOEPH;
class HGDELEAHIJO;
class OAPFEGCKDNG;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BMNJKMDDACL_CTOR_OFFSET UNITYSDK_OFFSET(0xBDBB8C0)
#define BMNJKMDDACL_DBPNHDJILOO_OFFSET UNITYSDK_OFFSET(0xBDBB570)
#define BMNJKMDDACL_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBDBB380)
#define BMNJKMDDACL_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBDBB400)
#define BMNJKMDDACL_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBDBB4F0)
#define BMNJKMDDACL_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBDBB4E0)
#define BMNJKMDDACL_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBDBB4D0)
#define BMNJKMDDACL_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBDBB4C0)
#define BMNJKMDDACL_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBDBB3D0)
#define BMNJKMDDACL_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBDBB500)
#define BMNJKMDDACL_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xBDBB490)
#define BMNJKMDDACL_LHIBMOJONAE_OFFSET UNITYSDK_OFFSET(0xBDBB7E0)
#define BMNJKMDDACL_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xBDBB870)
#define BMNJKMDDACL_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xBDBB750)
#define BMNJKMDDACL_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBDBB510)
#define BMNJKMDDACL__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xBDBB520)

inline static constexpr unsigned int BMNJKMDDACL_TypeDefinitionIndex = 59473;

	class BMNJKMDDACL
	{
	public:
		::System::Boolean _IsEnable_k__BackingField; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_BaseAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_GET_BASEABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* get_BundleVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_GET_BUNDLEVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BundleManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
		}

		::System::String* get_BlockVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_GET_BLOCKVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BlockManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_GET_BLOCKMANIFESTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMNJKMDDACL_SET_ISENABLE_OFFSET))(this, a1);
		}

		::BJHAIOJBFAK* _LoadIndexInfo(::System::String* a1)
		{
			return ((::BJHAIOJBFAK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BMNJKMDDACL__LOADINDEXINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* DBPNHDJILOO()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_DBPNHDJILOO_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* OnEnumBlockItems()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_ONENUMBLOCKITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* LHIBMOJONAE(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMNJKMDDACL_LHIBMOJONAE_OFFSET))(this, a1);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJKMDDACL_ONALLSUCCEED_OFFSET))(this);
		}

	};
