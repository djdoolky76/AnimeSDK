#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDKEBLNOEPH;
class HGCEOEHGPPE;
class OAPFEGCKDNG;
namespace System { class String; }

#define AODPGPILMKK_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0x1A8418F0)
#define AODPGPILMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A841B30)
#define AODPGPILMKK_EDBFDKJNNGH_OFFSET UNITYSDK_OFFSET(0x1A8418D0)
#define AODPGPILMKK_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1A8417F0)
#define AODPGPILMKK_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1A8418E0)
#define AODPGPILMKK_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1A841840)
#define AODPGPILMKK_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1A8418A0)
#define AODPGPILMKK_GET_ISNEEDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1A8418C0)
#define AODPGPILMKK_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1A841870)
#define AODPGPILMKK_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x1A841930)
#define AODPGPILMKK_POIPBCKGABI_OFFSET UNITYSDK_OFFSET(0x1A841AD0)
#define AODPGPILMKK_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1A8418B0)

inline static constexpr unsigned int AODPGPILMKK_TypeDefinitionIndex = 60753;

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
