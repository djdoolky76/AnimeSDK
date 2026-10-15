#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBCPODHJFJD;
class KNAFLABINOA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNAFLABINOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB576980)
#define KNAFLABINOA_GET_AVATARDAMAGEMAP_OFFSET UNITYSDK_OFFSET(0xB575CE0)
#define KNAFLABINOA_GET_DEADAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB575CD0)
#define KNAFLABINOA_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xB575CB0)
#define KNAFLABINOA_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xB5765D0)
#define KNAFLABINOA_PLGEBDDNCKC_OFFSET UNITYSDK_OFFSET(0xB575CF0)
#define KNAFLABINOA_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xB575CC0)

	class KNAFLABINOA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _DeadAvatarIDs_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* _AvatarDamageMap_k__BackingField; // 0x18
		::System::UInt32 _LevelID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAFLABINOA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAFLABINOA_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNAFLABINOA_SET_LEVELID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DeadAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAFLABINOA_GET_DEADAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* get_AvatarDamageMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAFLABINOA_GET_AVATARDAMAGEMAP_OFFSET))(this);
		}

		::System::Void PLGEBDDNCKC(::CBCPODHJFJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBCPODHJFJD*))((::PBYTE)hIl2Cpp + KNAFLABINOA_PLGEBDDNCKC_OFFSET))(this, a1);
		}

		::KNAFLABINOA* NBHCPBBGAKA()
		{
			return ((::KNAFLABINOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAFLABINOA_NBHCPBBGAKA_OFFSET))(this);
		}

	};
