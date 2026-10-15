#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class CDKEBLNOEPH;
class HKPOAGEKMAM;
class OAPFEGCKDNG;
namespace System { class String; }

#define OFLJCMOBHIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3F000)
#define OFLJCMOBHIH_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBE3EE20)
#define OFLJCMOBHIH_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBE3EC00)
#define OFLJCMOBHIH_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBE3EC80)
#define OFLJCMOBHIH_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBE3ED70)
#define OFLJCMOBHIH_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBE3ED60)
#define OFLJCMOBHIH_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBE3ED50)
#define OFLJCMOBHIH_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBE3ED40)
#define OFLJCMOBHIH_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBE3EC50)
#define OFLJCMOBHIH_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBE3ED80)
#define OFLJCMOBHIH_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xBE3ED10)
#define OFLJCMOBHIH_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xBE3EFA0)
#define OFLJCMOBHIH_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBE3ED90)
#define OFLJCMOBHIH__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xBE3EDA0)

inline static constexpr unsigned int OFLJCMOBHIH_TypeDefinitionIndex = 59477;

	class OFLJCMOBHIH
	{
	public:
		::System::Boolean _IsEnable_k__BackingField; // 0x78
		::System::Boolean PGGLMENELHH; // 0x79
		// static const ::System::String* MHFEDJMCMMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_BaseAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GET_BASEABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* get_BundleVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GET_BUNDLEVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BundleManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
		}

		::System::String* get_BlockVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GET_BLOCKVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BlockManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GET_BLOCKMANIFESTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_SET_ISENABLE_OFFSET))(this, a1);
		}

		::HKPOAGEKMAM* _LoadIndexInfo(::System::String* a1)
		{
			return ((::HKPOAGEKMAM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OFLJCMOBHIH__LOADINDEXINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetServerBlockManifestName(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLJCMOBHIH_ONALLSUCCEED_OFFSET))(this);
		}

	};
