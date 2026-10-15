#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOADDHLOJE;
class OHKGNIAAAAM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHNHJJBFJP_CTOR_OFFSET UNITYSDK_OFFSET(0xB953A80)
#define MIHNHJJBFJP_GET_LEVELENDMAP_OFFSET UNITYSDK_OFFSET(0xB953810)
#define MIHNHJJBFJP_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xB9537F0)
#define MIHNHJJBFJP_MAEBCOBCALB_OFFSET UNITYSDK_OFFSET(0xB953830)
#define MIHNHJJBFJP_PLGEBDDNCKC_OFFSET UNITYSDK_OFFSET(0xB9538E0)
#define MIHNHJJBFJP_SET_LEVELENDMAP_OFFSET UNITYSDK_OFFSET(0xB953820)
#define MIHNHJJBFJP_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xB953800)

inline static constexpr unsigned int MIHNHJJBFJP_TypeDefinitionIndex = 63878;

	class MIHNHJJBFJP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OHKGNIAAAAM*>* _LevelEndMap_k__BackingField; // 0x10
		::System::UInt32 _MapID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHNHJJBFJP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHNHJJBFJP_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHNHJJBFJP_SET_MAPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OHKGNIAAAAM*>* get_LevelEndMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OHKGNIAAAAM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHNHJJBFJP_GET_LEVELENDMAP_OFFSET))(this);
		}

		::System::Void set_LevelEndMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OHKGNIAAAAM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OHKGNIAAAAM*>*))((::PBYTE)hIl2Cpp + MIHNHJJBFJP_SET_LEVELENDMAP_OFFSET))(this, a1);
		}

		::OHKGNIAAAAM* MAEBCOBCALB(::System::UInt32 a1)
		{
			return ((::OHKGNIAAAAM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHNHJJBFJP_MAEBCOBCALB_OFFSET))(this, a1);
		}

		::System::Void PLGEBDDNCKC(::AAOADDHLOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAOADDHLOJE*))((::PBYTE)hIl2Cpp + MIHNHJJBFJP_PLGEBDDNCKC_OFFSET))(this, a1);
		}

	};
