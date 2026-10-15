#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DesignDataMgr.h"
namespace System { class String; }

#define APPPABDOEJN_CFPLCJOJCEN_OFFSET UNITYSDK_OFFSET(0x1C434200)
#define APPPABDOEJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C433FA0)
#define APPPABDOEJN_FICABEOCKGP_OFFSET UNITYSDK_OFFSET(0x1C434050)
#define APPPABDOEJN_JGHPPCEKOGA_OFFSET UNITYSDK_OFFSET(0x1C433F40)
#define APPPABDOEJN_KOBLMIABNDB_OFFSET UNITYSDK_OFFSET(0x1C434000)
#define APPPABDOEJN_OCMANHDJEDF_OFFSET UNITYSDK_OFFSET(0x1C433E70)
#define APPPABDOEJN_SYNCLOADBYTESFROMFILE_OFFSET UNITYSDK_OFFSET(0x1C434710)
#define APPPABDOEJN__INITASSETLOADERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C434430)

	class APPPABDOEJN : public ::RPG::Client::DesignDataMgr
	{
	public:
		::System::Boolean JKEPCPBCKBB; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APPPABDOEJN_CTOR_OFFSET))(this);
		}

		static ::System::Boolean OCMANHDJEDF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + APPPABDOEJN_OCMANHDJEDF_OFFSET))(a1);
		}

		static ::System::Boolean JGHPPCEKOGA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + APPPABDOEJN_JGHPPCEKOGA_OFFSET))(a1);
		}

		::System::Boolean KOBLMIABNDB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APPPABDOEJN_KOBLMIABNDB_OFFSET))(this);
		}

		::System::Void FICABEOCKGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APPPABDOEJN_FICABEOCKGP_OFFSET))(this, a1);
		}

		::System::Void CFPLCJOJCEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APPPABDOEJN_CFPLCJOJCEN_OFFSET))(this);
		}

		::System::Void _InitAssetLoaderProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APPPABDOEJN__INITASSETLOADERPROVIDER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* SyncLoadBytesFromFile(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + APPPABDOEJN_SYNCLOADBYTESFROMFILE_OFFSET))(this, a1, a2, a3);
		}

	};
