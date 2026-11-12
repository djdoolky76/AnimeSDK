#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ADKLOECPCJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A9230)
#define ADKLOECPCJB_GET_MAPPATH_OFFSET UNITYSDK_OFFSET(0xB7A91D0)
#define ADKLOECPCJB_GET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xB7A91F0)
#define ADKLOECPCJB_GET_STARTMAPID_OFFSET UNITYSDK_OFFSET(0xB7A9210)
#define ADKLOECPCJB_SET_MAPPATH_OFFSET UNITYSDK_OFFSET(0xB7A91E0)
#define ADKLOECPCJB_SET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xB7A9200)
#define ADKLOECPCJB_SET_STARTMAPID_OFFSET UNITYSDK_OFFSET(0xB7A9220)

inline static constexpr unsigned int ADKLOECPCJB_TypeDefinitionIndex = 78118;

	class ADKLOECPCJB : public ::System::Object
	{
	public:
		::System::String* _MapPath_k__BackingField; // 0x10
		::System::UInt32 _StartMapID_k__BackingField; // 0x18
		::System::UInt32 _StartCellID_k__BackingField; // 0x1C
		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ADKLOECPCJB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_MapPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLOECPCJB_GET_MAPPATH_OFFSET))(this);
		}

		::System::Void set_MapPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ADKLOECPCJB_SET_MAPPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_StartCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLOECPCJB_GET_STARTCELLID_OFFSET))(this);
		}

		::System::Void set_StartCellID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADKLOECPCJB_SET_STARTCELLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StartMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLOECPCJB_GET_STARTMAPID_OFFSET))(this);
		}

		::System::Void set_StartMapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADKLOECPCJB_SET_STARTMAPID_OFFSET))(this, a1);
		}

	};
