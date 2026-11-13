#pragma once
#include "unitysdk/unitysdk.h"
class CDKEBLNOEPH;
class HKPOAGEKMAM;
class OAPFEGCKDNG;
class OFLJCMOBHIH;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EADIJOHAPHK_CTOR_OFFSET UNITYSDK_OFFSET(0x181C7D80)
#define EADIJOHAPHK_DBPNHDJILOO_OFFSET UNITYSDK_OFFSET(0x181C7AB0)
#define EADIJOHAPHK_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x181C7890)
#define EADIJOHAPHK_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x181C7910)
#define EADIJOHAPHK_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x181C7A00)
#define EADIJOHAPHK_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x181C79F0)
#define EADIJOHAPHK_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x181C79E0)
#define EADIJOHAPHK_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x181C79D0)
#define EADIJOHAPHK_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x181C78E0)
#define EADIJOHAPHK_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x181C7A10)
#define EADIJOHAPHK_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x181C79A0)
#define EADIJOHAPHK_LHIBMOJONAE_OFFSET UNITYSDK_OFFSET(0x181C7C90)
#define EADIJOHAPHK_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x181C7D20)
#define EADIJOHAPHK_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x181C7A20)
#define EADIJOHAPHK__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x181C7A30)

inline static constexpr unsigned int EADIJOHAPHK_TypeDefinitionIndex = 60737;

	class EADIJOHAPHK
	{
	public:
		::OFLJCMOBHIH* MNMGKCNJJMO; // 0x78
		::System::Boolean _IsEnable_k__BackingField; // 0x80
		// static const ::System::String* MHFEDJMCMMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_BaseAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_GET_BASEABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* get_BundleVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_GET_BUNDLEVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BundleManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
		}

		::System::String* get_BlockVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_GET_BLOCKVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BlockManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_GET_BLOCKMANIFESTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EADIJOHAPHK_SET_ISENABLE_OFFSET))(this, a1);
		}

		::HKPOAGEKMAM* _LoadIndexInfo(::System::String* a1)
		{
			return ((::HKPOAGEKMAM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EADIJOHAPHK__LOADINDEXINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* DBPNHDJILOO()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_DBPNHDJILOO_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* LHIBMOJONAE(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EADIJOHAPHK_LHIBMOJONAE_OFFSET))(this, a1);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADIJOHAPHK_ONALLSUCCEED_OFFSET))(this);
		}

	};
