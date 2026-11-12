#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AKMFECNJFBG;
class ECCFPCCFGNG;
namespace System { class String; }

#define ECCFPCCFGNG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x13AB9AC0)
#define ECCFPCCFGNG_CTOR_OFFSET UNITYSDK_OFFSET(0x13AB9B60)
#define ECCFPCCFGNG_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x13AB9A60)
#define ECCFPCCFGNG_GET_PRODUCTPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x13AB9A80)
#define ECCFPCCFGNG_GET_PRODUCTSTATS_OFFSET UNITYSDK_OFFSET(0x13AB9AA0)
#define ECCFPCCFGNG_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x13AB9A70)
#define ECCFPCCFGNG_SET_PRODUCTPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x13AB9A90)
#define ECCFPCCFGNG_SET_PRODUCTSTATS_OFFSET UNITYSDK_OFFSET(0x13AB9AB0)

inline static constexpr unsigned int ECCFPCCFGNG_TypeDefinitionIndex = 82965;

	class ECCFPCCFGNG : public ::System::Object
	{
	public:
		::AKMFECNJFBG* _ProductStats_k__BackingField; // 0x10
		::System::String* _ProductPortraitPath_k__BackingField; // 0x18
		::RPG::Client::TextID _ProductName_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::TextID a1, ::System::String* a2, ::AKMFECNJFBG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*, ::AKMFECNJFBG*))((::PBYTE)hIl2Cpp + ECCFPCCFGNG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID get_ProductName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCFPCCFGNG_GET_PRODUCTNAME_OFFSET))(this);
		}

		::System::Void set_ProductName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + ECCFPCCFGNG_SET_PRODUCTNAME_OFFSET))(this, a1);
		}

		::System::String* get_ProductPortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCFPCCFGNG_GET_PRODUCTPORTRAITPATH_OFFSET))(this);
		}

		::System::Void set_ProductPortraitPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECCFPCCFGNG_SET_PRODUCTPORTRAITPATH_OFFSET))(this, a1);
		}

		::AKMFECNJFBG* get_ProductStats()
		{
			return ((::AKMFECNJFBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCFPCCFGNG_GET_PRODUCTSTATS_OFFSET))(this);
		}

		::System::Void set_ProductStats(::AKMFECNJFBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKMFECNJFBG*))((::PBYTE)hIl2Cpp + ECCFPCCFGNG_SET_PRODUCTSTATS_OFFSET))(this, a1);
		}

		static ::ECCFPCCFGNG* BPLPBPMEODA(::RPG::Client::TextID a1, ::System::String* a2, ::AKMFECNJFBG* a3)
		{
			return ((::ECCFPCCFGNG*(*)(::RPG::Client::TextID, ::System::String*, ::AKMFECNJFBG*))((::PBYTE)hIl2Cpp + ECCFPCCFGNG_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

	};
