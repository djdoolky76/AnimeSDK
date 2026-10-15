#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJLGNEMNIKI_TextmapDownloadType.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class CDKEBLNOEPH;
class HGDELEAHIJO;
class OAPFEGCKDNG;
class OBPJIBCAKEK;
namespace System { class String; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DJLGNEMNIKI_AJFJAOBNFIF_1_OFFSET UNITYSDK_OFFSET(0xF23AE60)
#define DJLGNEMNIKI_AJFJAOBNFIF_OFFSET UNITYSDK_OFFSET(0xF23ACF0)
#define DJLGNEMNIKI_BDOFIIJLBGM_OFFSET UNITYSDK_OFFSET(0xF23AFF0)
#define DJLGNEMNIKI_BIDJLEEDMFH_OFFSET UNITYSDK_OFFSET(0xF23A6C0)
#define DJLGNEMNIKI_CTOR_OFFSET UNITYSDK_OFFSET(0xF23AA60)
#define DJLGNEMNIKI_DBFJEHOPLMM_OFFSET UNITYSDK_OFFSET(0xF23AF40)
#define DJLGNEMNIKI_DMGPKKNCBLC_OFFSET UNITYSDK_OFFSET(0xF23A4C0)
#define DJLGNEMNIKI_FKLCOIJNPCC_OFFSET UNITYSDK_OFFSET(0xF23A6B0)
#define DJLGNEMNIKI_GCEKDHIOCAP_OFFSET UNITYSDK_OFFSET(0xF23AD40)
#define DJLGNEMNIKI_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xF23A960)
#define DJLGNEMNIKI_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xF23A6D0)
#define DJLGNEMNIKI_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xF23A860)
#define DJLGNEMNIKI_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xF23A850)
#define DJLGNEMNIKI_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xF23A840)
#define DJLGNEMNIKI_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xF23A830)
#define DJLGNEMNIKI_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xF23A7D0)
#define DJLGNEMNIKI_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xF23A870)
#define DJLGNEMNIKI_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xF23A800)
#define DJLGNEMNIKI_HNOCCLAOAJM_OFFSET UNITYSDK_OFFSET(0xF23A4B0)
#define DJLGNEMNIKI_LHIBMOJONAE_OFFSET UNITYSDK_OFFSET(0xF23AC10)
#define DJLGNEMNIKI_MPPDLKLLHIN_OFFSET UNITYSDK_OFFSET(0xF23B050)
#define DJLGNEMNIKI_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xF23ACA0)
#define DJLGNEMNIKI_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xF23B500)
#define DJLGNEMNIKI_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xF23A880)
#define DJLGNEMNIKI__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xF23A890)
#define DJLGNEMNIKI___N__0_OFFSET UNITYSDK_OFFSET(0xF23B590)

	class DJLGNEMNIKI
	{
	public:
		::System::String* ONDHIHPPCIL; // 0x78
		::System::Collections::Generic::HashSet_1<::System::String*>* JMFJDKJMDEB; // 0x80
		::DJLGNEMNIKI_TextmapDownloadType BHFBPMLALOL; // 0x88
		::System::Boolean MGCGBGFALKO; // 0x8C
		::System::Boolean _IsEnable_k__BackingField; // 0x8D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_CTOR_OFFSET))(this);
		}

		::DJLGNEMNIKI_TextmapDownloadType HNOCCLAOAJM()
		{
			return ((::DJLGNEMNIKI_TextmapDownloadType(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_HNOCCLAOAJM_OFFSET))(this);
		}

		::System::Void DMGPKKNCBLC(::DJLGNEMNIKI_TextmapDownloadType a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJLGNEMNIKI_TextmapDownloadType))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_DMGPKKNCBLC_OFFSET))(this, a1);
		}

		::System::String* FKLCOIJNPCC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_FKLCOIJNPCC_OFFSET))(this);
		}

		::System::Void BIDJLEEDMFH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_BIDJLEEDMFH_OFFSET))(this, a1);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* get_BundleVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GET_BUNDLEVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BundleManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
		}

		::System::String* get_BlockVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GET_BLOCKVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BlockManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GET_BLOCKMANIFESTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_SET_ISENABLE_OFFSET))(this, a1);
		}

		::OBPJIBCAKEK* _LoadIndexInfo(::System::String* a1)
		{
			return ((::OBPJIBCAKEK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJLGNEMNIKI__LOADINDEXINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetServerBlockManifestName(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple*>* LHIBMOJONAE(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_LHIBMOJONAE_OFFSET))(this, a1);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_ONALLSUCCEED_OFFSET))(this);
		}

		::System::Boolean AJFJAOBNFIF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_AJFJAOBNFIF_OFFSET))(this, a1);
		}

		::System::Boolean AJFJAOBNFIF_1(::HGDELEAHIJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_AJFJAOBNFIF_1_OFFSET))(this, a1);
		}

		::System::Boolean BDOFIIJLBGM(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_BDOFIIJLBGM_OFFSET))(this, a1);
		}

		::System::Boolean GCEKDHIOCAP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_GCEKDHIOCAP_OFFSET))(this, a1);
		}

		::System::Boolean MPPDLKLLHIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_MPPDLKLLHIN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* OnEnumBlockItems()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_ONENUMBLOCKITEMS_OFFSET))(this);
		}

		static ::System::Boolean DBFJEHOPLMM(::HGDELEAHIJO* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::HGDELEAHIJO*, ::System::String*))((::PBYTE)hIl2Cpp + DJLGNEMNIKI_DBFJEHOPLMM_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* __n__0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLGNEMNIKI___N__0_OFFSET))(this);
		}

	};
