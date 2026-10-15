#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDKEBLNOEPH;
class HGCEOEHGPPE;
class OAPFEGCKDNG;
namespace System { class String; }

#define AODPGPILMKK_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0x158A7DD0)
#define AODPGPILMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x158A8010)
#define AODPGPILMKK_EDBFDKJNNGH_OFFSET UNITYSDK_OFFSET(0x158A7DB0)
#define AODPGPILMKK_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x158A7CD0)
#define AODPGPILMKK_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x158A7DC0)
#define AODPGPILMKK_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x158A7D20)
#define AODPGPILMKK_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x158A7D80)
#define AODPGPILMKK_GET_ISNEEDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x158A7DA0)
#define AODPGPILMKK_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x158A7D50)
#define AODPGPILMKK_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x158A7E10)
#define AODPGPILMKK_POIPBCKGABI_OFFSET UNITYSDK_OFFSET(0x158A7FB0)
#define AODPGPILMKK_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x158A7D90)

inline static constexpr unsigned int AODPGPILMKK_TypeDefinitionIndex = 59476;

	class AODPGPILMKK : public ::System::Object
	{
	public:
		::System::Boolean _IsEnable_k__BackingField; // 0x10
		// static const ::System::String* MHFEDJMCMMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AODPGPILMKK_SET_ISENABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNeedDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_GET_ISNEEDDOWNLOAD_OFFSET))(this);
		}

		::System::String* EDBFDKJNNGH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_EDBFDKJNNGH_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_BaseAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_GET_BASEABSOLUTEPATH_OFFSET))(this);
		}

		::System::Void ClearServerCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_CLEARSERVERCACHE_OFFSET))(this);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPGPILMKK_ONALLSUCCEED_OFFSET))(this);
		}

		::System::Void POIPBCKGABI(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + AODPGPILMKK_POIPBCKGABI_OFFSET))(this, a1);
		}

	};
