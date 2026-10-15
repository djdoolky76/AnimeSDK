#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPMFJNCAKCD;

#define NPMFJNCAKCD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD08870)
#define NPMFJNCAKCD_CTOR_OFFSET UNITYSDK_OFFSET(0xBD08A10)
#define NPMFJNCAKCD_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xBD085E0)
#define NPMFJNCAKCD_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xBD08860)

inline static constexpr unsigned int NPMFJNCAKCD_TypeDefinitionIndex = 64341;

	class NPMFJNCAKCD : public ::System::Object
	{
	public:
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMFJNCAKCD_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMFJNCAKCD_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPMFJNCAKCD_SET_FLOORID_OFFSET))(this, a1);
		}

		static ::NPMFJNCAKCD* BPLPBPMEODA()
		{
			return ((::NPMFJNCAKCD*(*)())((::PBYTE)hIl2Cpp + NPMFJNCAKCD_BPLPBPMEODA_OFFSET))();
		}

	};
