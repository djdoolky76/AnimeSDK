#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDKEBLNOEPH;
class HGCEOEHGPPE;
class OAPFEGCKDNG;
namespace System { class String; }

#define IBNCECGKMNI_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0x15E43420)
#define IBNCECGKMNI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E43500)
#define IBNCECGKMNI_EDBFDKJNNGH_OFFSET UNITYSDK_OFFSET(0x15E43400)
#define IBNCECGKMNI_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x15E43300)
#define IBNCECGKMNI_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x15E43410)
#define IBNCECGKMNI_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x15E43370)
#define IBNCECGKMNI_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x15E433D0)
#define IBNCECGKMNI_GET_ISNEEDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x15E433F0)
#define IBNCECGKMNI_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x15E433A0)
#define IBNCECGKMNI_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x15E43460)
#define IBNCECGKMNI_POIPBCKGABI_OFFSET UNITYSDK_OFFSET(0x15E434A0)
#define IBNCECGKMNI_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x15E433E0)

inline static constexpr unsigned int IBNCECGKMNI_TypeDefinitionIndex = 59462;

	class IBNCECGKMNI : public ::System::Object
	{
	public:
		::System::Boolean _IsEnable_k__BackingField; // 0x10
		// static const ::System::String* MHFEDJMCMMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBNCECGKMNI_SET_ISENABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNeedDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_GET_ISNEEDDOWNLOAD_OFFSET))(this);
		}

		::System::String* EDBFDKJNNGH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_EDBFDKJNNGH_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_BaseAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_GET_BASEABSOLUTEPATH_OFFSET))(this);
		}

		::System::Void ClearServerCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_CLEARSERVERCACHE_OFFSET))(this);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCECGKMNI_ONALLSUCCEED_OFFSET))(this);
		}

		::System::Void POIPBCKGABI(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + IBNCECGKMNI_POIPBCKGABI_OFFSET))(this, a1);
		}

	};
