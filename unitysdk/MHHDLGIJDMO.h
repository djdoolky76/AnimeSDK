#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class CDKEBLNOEPH;
class NKMIDHGFCDI;
class OAPFEGCKDNG;
namespace System { class String; }

#define MHHDLGIJDMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B3587C0)
#define MHHDLGIJDMO_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x1B358990)
#define MHHDLGIJDMO_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1B358650)
#define MHHDLGIJDMO_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x1B358760)
#define MHHDLGIJDMO_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x1B358720)
#define MHHDLGIJDMO_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x1B358710)
#define MHHDLGIJDMO_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x1B358700)
#define MHHDLGIJDMO_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1B3586A0)
#define MHHDLGIJDMO_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1B3587A0)
#define MHHDLGIJDMO_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1B3586D0)
#define MHHDLGIJDMO_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x1B358AD0)
#define MHHDLGIJDMO_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1B3587B0)
#define MHHDLGIJDMO__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1B358940)

inline static constexpr unsigned int MHHDLGIJDMO_TypeDefinitionIndex = 60744;

	class MHHDLGIJDMO
	{
	public:
		::System::Boolean _IsEnable_k__BackingField; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* get_BundleVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_GET_BUNDLEVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BundleManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
		}

		::System::String* get_BlockVersionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_GET_BLOCKVERSIONNAME_OFFSET))(this);
		}

		::System::String* get_BlockManifestName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_GET_BLOCKMANIFESTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_SET_ISENABLE_OFFSET))(this, a1);
		}

		::NKMIDHGFCDI* _LoadIndexInfo(::System::String* a1)
		{
			return ((::NKMIDHGFCDI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MHHDLGIJDMO__LOADINDEXINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetServerBlockManifestName(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHDLGIJDMO_ONALLSUCCEED_OFFSET))(this);
		}

	};
