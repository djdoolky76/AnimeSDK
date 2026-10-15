#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFJAMEFIDIF;
namespace RPG::Client { class IMatchThreePropData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFJAMEFIDIF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB902260)
#define MFJAMEFIDIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB902350)
#define MFJAMEFIDIF_GET_BIRDID_OFFSET UNITYSDK_OFFSET(0xB902230)
#define MFJAMEFIDIF_GET_PROPDATAS_OFFSET UNITYSDK_OFFSET(0xB902250)
#define MFJAMEFIDIF_SET_BIRDID_OFFSET UNITYSDK_OFFSET(0xB902240)

inline static constexpr unsigned int MFJAMEFIDIF_TypeDefinitionIndex = 66054;

	class MFJAMEFIDIF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* _PropDatas_k__BackingField; // 0x10
		::System::UInt32 _BirdID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJAMEFIDIF_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_BirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJAMEFIDIF_GET_BIRDID_OFFSET))(this);
		}

		::System::Void set_BirdID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFJAMEFIDIF_SET_BIRDID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* get_PropDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJAMEFIDIF_GET_PROPDATAS_OFFSET))(this);
		}

		static ::MFJAMEFIDIF* BPLPBPMEODA(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* a2)
		{
			return ((::MFJAMEFIDIF*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + MFJAMEFIDIF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
