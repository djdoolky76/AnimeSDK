#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEODAOIOGLO_DownloadType.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class CDKEBLNOEPH;
class DHFEKMIILBP;
class HGDELEAHIJO;
class KLBIIOCGHGD;
class OAPFEGCKDNG;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OEODAOIOGLO_AJFJAOBNFIF_OFFSET UNITYSDK_OFFSET(0xBE2DCF0)
#define OEODAOIOGLO_BLENANJGCMC_OFFSET UNITYSDK_OFFSET(0xBE2D5B0)
#define OEODAOIOGLO_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0xBE2D530)
#define OEODAOIOGLO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2D2C0)
#define OEODAOIOGLO_DBPNHDJILOO_OFFSET UNITYSDK_OFFSET(0xBE2DDD0)
#define OEODAOIOGLO_DPAMAONPKHM_OFFSET UNITYSDK_OFFSET(0xBE2D030)
#define OEODAOIOGLO_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBE2D6C0)
#define OEODAOIOGLO_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBE2CB30)
#define OEODAOIOGLO_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBE2CC30)
#define OEODAOIOGLO_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBE2CDD0)
#define OEODAOIOGLO_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBE2CDC0)
#define OEODAOIOGLO_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBE2CDB0)
#define OEODAOIOGLO_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBE2CDA0)
#define OEODAOIOGLO_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBE2CC20)
#define OEODAOIOGLO_GET_FORCEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xBE2CF80)
#define OEODAOIOGLO_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBE2CFA0)
#define OEODAOIOGLO_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xBE2CD70)
#define OEODAOIOGLO_IKDDBODBGGN_OFFSET UNITYSDK_OFFSET(0xBE2D7F0)
#define OEODAOIOGLO_LHIBMOJONAE_OFFSET UNITYSDK_OFFSET(0xBE2E030)
#define OEODAOIOGLO_MIMMIDDKCFI_OFFSET UNITYSDK_OFFSET(0xBE2CFC0)
#define OEODAOIOGLO_MKLBCIMAAII_OFFSET UNITYSDK_OFFSET(0xBE2D630)
#define OEODAOIOGLO_MKODEGIFBBP_OFFSET UNITYSDK_OFFSET(0xBE2CDF0)
#define OEODAOIOGLO_MLCDLBDFIBI_OFFSET UNITYSDK_OFFSET(0xBE2CCA0)
#define OEODAOIOGLO_NDNOIBMCAAG_OFFSET UNITYSDK_OFFSET(0xBE2D920)
#define OEODAOIOGLO_OJBLMJJKIKE_OFFSET UNITYSDK_OFFSET(0xBE2CDE0)
#define OEODAOIOGLO_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xBE2E0C0)
#define OEODAOIOGLO_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xBE2D230)
#define OEODAOIOGLO_PKPIJPGKCPE_OFFSET UNITYSDK_OFFSET(0xBE2CFD0)
#define OEODAOIOGLO_PMFICHIDACL_OFFSET UNITYSDK_OFFSET(0xBE2D100)
#define OEODAOIOGLO_RESET_OFFSET UNITYSDK_OFFSET(0xBE2D490)
#define OEODAOIOGLO_SET_FORCEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xBE2CF90)
#define OEODAOIOGLO_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBE2CFB0)
#define OEODAOIOGLO__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xBE2D1E0)

inline static constexpr unsigned int OEODAOIOGLO_TypeDefinitionIndex = 59455;

	class OEODAOIOGLO
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* PMBBODCDDFE; // 0x78
		::System::Collections::Generic::HashSet_1<::System::String*>* OPOIKENIKON; // 0x80
		::DHFEKMIILBP* HALKKPCOLGM; // 0x88
		::System::String* ALAKHHHOMDO; // 0x90
		::CDKEBLNOEPH* IAJHKEAAIAH; // 0x98
		::System::Int64 KOBICGMNELO; // 0xA0
		::System::Boolean _ForceDownload_k__BackingField; // 0xA8
		::System::Boolean _IsEnable_k__BackingField; // 0xA9
		::System::Boolean PPPPLDEDOLB; // 0xAA
		::System::Byte _padding0[0x1];
		::OEODAOIOGLO_DownloadType ANPNIOLDGAO; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_BaseAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GET_BASEABSOLUTEPATH_OFFSET))(this);
		}

		::System::Void MLCDLBDFIBI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEODAOIOGLO_MLCDLBDFIBI_OFFSET))(this, a1);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* get_BundleVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GET_BUNDLEVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BundleManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
		}

		::System::String* get_BlockVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GET_BLOCKVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BlockManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GET_BLOCKMANIFESTNAME_OFFSET))(this);
		}

		::OEODAOIOGLO_DownloadType OJBLMJJKIKE()
		{
			return ((::OEODAOIOGLO_DownloadType(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_OJBLMJJKIKE_OFFSET))(this);
		}

		::System::Void MKODEGIFBBP(::OEODAOIOGLO_DownloadType a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEODAOIOGLO_DownloadType))((::PBYTE)hIl2Cpp + OEODAOIOGLO_MKODEGIFBBP_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GET_FORCEDOWNLOAD_OFFSET))(this);
		}

		::System::Void set_ForceDownload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEODAOIOGLO_SET_FORCEDOWNLOAD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEODAOIOGLO_SET_ISENABLE_OFFSET))(this, a1);
		}

		::System::String* MIMMIDDKCFI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_MIMMIDDKCFI_OFFSET))(this);
		}

		::System::Void PKPIJPGKCPE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEODAOIOGLO_PKPIJPGKCPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* DPAMAONPKHM()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_DPAMAONPKHM_OFFSET))(this);
		}

		::System::Void PMFICHIDACL(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OEODAOIOGLO_PMFICHIDACL_OFFSET))(this, a1);
		}

		::KLBIIOCGHGD* _LoadIndexInfo(::System::String* a1)
		{
			return ((::KLBIIOCGHGD*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEODAOIOGLO__LOADINDEXINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* OnEnumBlockItems()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_ONENUMBLOCKITEMS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_RESET_OFFSET))(this);
		}

		::System::Void ClearServerCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_CLEARSERVERCACHE_OFFSET))(this);
		}

		::System::Boolean BLENANJGCMC(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEODAOIOGLO_BLENANJGCMC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* MKLBCIMAAII()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_MKLBCIMAAII_OFFSET))(this);
		}

		::System::Boolean GetServerBlockManifestName(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + OEODAOIOGLO_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IKDDBODBGGN(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OEODAOIOGLO_IKDDBODBGGN_OFFSET))(this, a1, a2);
		}

		::System::String* NDNOIBMCAAG(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OEODAOIOGLO_NDNOIBMCAAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean AJFJAOBNFIF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEODAOIOGLO_AJFJAOBNFIF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* DBPNHDJILOO()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_DBPNHDJILOO_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* LHIBMOJONAE(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEODAOIOGLO_LHIBMOJONAE_OFFSET))(this, a1);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEODAOIOGLO_ONALLSUCCEED_OFFSET))(this);
		}

	};
