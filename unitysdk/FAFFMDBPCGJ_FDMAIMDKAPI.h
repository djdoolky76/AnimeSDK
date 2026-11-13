#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAFFMDBPCGJ_EIGPLIGCGJE;
class FiveDimRenderingItem;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FAFFMDBPCGJ_FDMAIMDKAPI_AMCPODIGFJL_OFFSET UNITYSDK_OFFSET(0x1BA247E0)
#define FAFFMDBPCGJ_FDMAIMDKAPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA24E80)
#define FAFFMDBPCGJ_FDMAIMDKAPI_DEPHPLPMEPN_OFFSET UNITYSDK_OFFSET(0x1BA24880)
#define FAFFMDBPCGJ_FDMAIMDKAPI_EHOOBPECFLE_OFFSET UNITYSDK_OFFSET(0x1BA24980)
#define FAFFMDBPCGJ_FDMAIMDKAPI_GDBKPMPDJOF_OFFSET UNITYSDK_OFFSET(0x1BA246E0)
#define FAFFMDBPCGJ_FDMAIMDKAPI_GET_CURRENTSCOPEID_OFFSET UNITYSDK_OFFSET(0x1BA245B0)
#define FAFFMDBPCGJ_FDMAIMDKAPI_GET_DIRTYVERSION_OFFSET UNITYSDK_OFFSET(0x1BA245D0)
#define FAFFMDBPCGJ_FDMAIMDKAPI_GET_FORCEREWRITEFORCURRENTUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA24610)
#define FAFFMDBPCGJ_FDMAIMDKAPI_GET_ISREFRESHREQUESTED_OFFSET UNITYSDK_OFFSET(0x1BA245F0)
#define FAFFMDBPCGJ_FDMAIMDKAPI_HFLKAJMAHFH_OFFSET UNITYSDK_OFFSET(0x1BA24A60)
#define FAFFMDBPCGJ_FDMAIMDKAPI_HGAAIJIJBAK_OFFSET UNITYSDK_OFFSET(0x1BA24A20)
#define FAFFMDBPCGJ_FDMAIMDKAPI_HOPJMFJMOBD_OFFSET UNITYSDK_OFFSET(0x1BA24630)
#define FAFFMDBPCGJ_FDMAIMDKAPI_LKENKBOMECB_OFFSET UNITYSDK_OFFSET(0x1BA248F0)
#define FAFFMDBPCGJ_FDMAIMDKAPI_MDBMPCGLPDK_OFFSET UNITYSDK_OFFSET(0x1BA24BF0)
#define FAFFMDBPCGJ_FDMAIMDKAPI_NAGADEEMABM_OFFSET UNITYSDK_OFFSET(0x1BA24C90)
#define FAFFMDBPCGJ_FDMAIMDKAPI_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1BA24D20)
#define FAFFMDBPCGJ_FDMAIMDKAPI_SET_CURRENTSCOPEID_OFFSET UNITYSDK_OFFSET(0x1BA245C0)
#define FAFFMDBPCGJ_FDMAIMDKAPI_SET_DIRTYVERSION_OFFSET UNITYSDK_OFFSET(0x1BA245E0)
#define FAFFMDBPCGJ_FDMAIMDKAPI_SET_FORCEREWRITEFORCURRENTUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA24620)
#define FAFFMDBPCGJ_FDMAIMDKAPI_SET_ISREFRESHREQUESTED_OFFSET UNITYSDK_OFFSET(0x1BA24600)

inline static constexpr unsigned int FAFFMDBPCGJ_FDMAIMDKAPI_TypeDefinitionIndex = 79065;

	class FAFFMDBPCGJ_FDMAIMDKAPI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* OCBJOFHBOEM; // 0x10
		::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::System::Object*>* LFDBJPPAODO; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* EEKAAHDMCEA; // 0x20
		::System::UInt32 _DirtyVersion_k__BackingField; // 0x28
		::System::Int32 _CurrentScopeID_k__BackingField; // 0x2C
		::System::Boolean _IsRefreshRequested_k__BackingField; // 0x30
		::System::Boolean _ForceRewriteForCurrentUpdate_k__BackingField; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_CTOR_OFFSET))(this);
		}

		::System::Int32 get_CurrentScopeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_GET_CURRENTSCOPEID_OFFSET))(this);
		}

		::System::Void set_CurrentScopeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_SET_CURRENTSCOPEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DirtyVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_GET_DIRTYVERSION_OFFSET))(this);
		}

		::System::Void set_DirtyVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_SET_DIRTYVERSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRefreshRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_GET_ISREFRESHREQUESTED_OFFSET))(this);
		}

		::System::Void set_IsRefreshRequested(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_SET_ISREFRESHREQUESTED_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceRewriteForCurrentUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_GET_FORCEREWRITEFORCURRENTUPDATE_OFFSET))(this);
		}

		::System::Void set_ForceRewriteForCurrentUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_SET_FORCEREWRITEFORCURRENTUPDATE_OFFSET))(this, a1);
		}

		::System::Void HOPJMFJMOBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_HOPJMFJMOBD_OFFSET))(this);
		}

		::System::Void GDBKPMPDJOF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_GDBKPMPDJOF_OFFSET))(this, a1);
		}

		::System::Boolean AMCPODIGFJL(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_AMCPODIGFJL_OFFSET))(this, a1);
		}

		::System::Void DEPHPLPMEPN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_DEPHPLPMEPN_OFFSET))(this, a1);
		}

		::System::Void LKENKBOMECB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_LKENKBOMECB_OFFSET))(this, a1);
		}

		::System::Boolean EHOOBPECFLE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_EHOOBPECFLE_OFFSET))(this, a1);
		}

		::System::Void HGAAIJIJBAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_HGAAIJIJBAK_OFFSET))(this);
		}

		::FAFFMDBPCGJ_EIGPLIGCGJE* HFLKAJMAHFH(::FiveDimRenderingItem* a1)
		{
			return ((::FAFFMDBPCGJ_EIGPLIGCGJE*(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_HFLKAJMAHFH_OFFSET))(this, a1);
		}

		::System::Void MDBMPCGLPDK(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_MDBMPCGLPDK_OFFSET))(this, a1);
		}

		::System::Void NAGADEEMABM(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_NAGADEEMABM_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDMAIMDKAPI_PJPFIHFAHGO_OFFSET))(this);
		}

	};
