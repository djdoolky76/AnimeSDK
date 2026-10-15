#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class AGNDLIOMDIG;
class CDKEBLNOEPH;
class HGDELEAHIJO;
class OAPFEGCKDNG;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OAHKEMMHANM_BLENANJGCMC_OFFSET UNITYSDK_OFFSET(0xBD1AC80)
#define OAHKEMMHANM_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0xBD1AC00)
#define OAHKEMMHANM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1B360)
#define OAHKEMMHANM_DBPNHDJILOO_OFFSET UNITYSDK_OFFSET(0xBD1ADC0)
#define OAHKEMMHANM_DPAMAONPKHM_OFFSET UNITYSDK_OFFSET(0xBD1A880)
#define OAHKEMMHANM_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBD1AA80)
#define OAHKEMMHANM_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBD1A6E0)
#define OAHKEMMHANM_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBD1A760)
#define OAHKEMMHANM_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBD1A850)
#define OAHKEMMHANM_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBD1A840)
#define OAHKEMMHANM_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBD1A830)
#define OAHKEMMHANM_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBD1A820)
#define OAHKEMMHANM_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBD1A730)
#define OAHKEMMHANM_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBD1A860)
#define OAHKEMMHANM_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xBD1A7F0)
#define OAHKEMMHANM_IKDDBODBGGN_OFFSET UNITYSDK_OFFSET(0xBD1B070)
#define OAHKEMMHANM_LHIBMOJONAE_OFFSET UNITYSDK_OFFSET(0xBD1AFE0)
#define OAHKEMMHANM_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xBD1B260)
#define OAHKEMMHANM_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xBD1AD30)
#define OAHKEMMHANM_PMFICHIDACL_OFFSET UNITYSDK_OFFSET(0xBD1A950)
#define OAHKEMMHANM_RESET_OFFSET UNITYSDK_OFFSET(0xBD1AB60)
#define OAHKEMMHANM_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBD1A870)
#define OAHKEMMHANM__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xBD1AA30)

inline static constexpr unsigned int OAHKEMMHANM_TypeDefinitionIndex = 59478;

	class OAHKEMMHANM
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* PMBBODCDDFE; // 0x78
		::System::Boolean _IsEnable_k__BackingField; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_BaseAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GET_BASEABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* get_BundleVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GET_BUNDLEVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BundleManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
		}

		::System::String* get_BlockVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GET_BLOCKVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BlockManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GET_BLOCKMANIFESTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAHKEMMHANM_SET_ISENABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* DPAMAONPKHM()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_DPAMAONPKHM_OFFSET))(this);
		}

		::System::Void PMFICHIDACL(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OAHKEMMHANM_PMFICHIDACL_OFFSET))(this, a1);
		}

		::AGNDLIOMDIG* _LoadIndexInfo(::System::String* a1)
		{
			return ((::AGNDLIOMDIG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OAHKEMMHANM__LOADINDEXINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetServerBlockManifestName(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + OAHKEMMHANM_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_RESET_OFFSET))(this);
		}

		::System::Void ClearServerCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_CLEARSERVERCACHE_OFFSET))(this);
		}

		::System::Boolean BLENANJGCMC(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OAHKEMMHANM_BLENANJGCMC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* OnEnumBlockItems()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_ONENUMBLOCKITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* DBPNHDJILOO()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_DBPNHDJILOO_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* LHIBMOJONAE(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAHKEMMHANM_LHIBMOJONAE_OFFSET))(this, a1);
		}

		::System::Boolean IKDDBODBGGN(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OAHKEMMHANM_IKDDBODBGGN_OFFSET))(this, a1, a2);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM_ONALLSUCCEED_OFFSET))(this);
		}

	};
