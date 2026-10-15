#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPGHDGPPBJH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJHPHMDACGG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBE2B0)
#define AJHPHMDACGG_GET_ID_OFFSET UNITYSDK_OFFSET(0x12CBE340)
#define AJHPHMDACGG_GET_ISBATTLEEVENT_OFFSET UNITYSDK_OFFSET(0x12CBE360)
#define AJHPHMDACGG_GET_SPECIALMARKDICT_OFFSET UNITYSDK_OFFSET(0x12CBE380)
#define AJHPHMDACGG_SET_ID_OFFSET UNITYSDK_OFFSET(0x12CBE350)
#define AJHPHMDACGG_SET_ISBATTLEEVENT_OFFSET UNITYSDK_OFFSET(0x12CBE370)
#define AJHPHMDACGG_SET_SPECIALMARKDICT_OFFSET UNITYSDK_OFFSET(0x12CBE390)

	class AJHPHMDACGG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CPGHDGPPBJH*>* _SpecialMarkDict_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Boolean _IsBattleEvent_k__BackingField; // 0x1C
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJHPHMDACGG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHPHMDACGG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJHPHMDACGG_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBattleEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHPHMDACGG_GET_ISBATTLEEVENT_OFFSET))(this);
		}

		::System::Void set_IsBattleEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJHPHMDACGG_SET_ISBATTLEEVENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::CPGHDGPPBJH*>* get_SpecialMarkDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::CPGHDGPPBJH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHPHMDACGG_GET_SPECIALMARKDICT_OFFSET))(this);
		}

		::System::Void set_SpecialMarkDict(::System::Collections::Generic::Dictionary_2<::System::String*, ::CPGHDGPPBJH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::CPGHDGPPBJH*>*))((::PBYTE)hIl2Cpp + AJHPHMDACGG_SET_SPECIALMARKDICT_OFFSET))(this, a1);
		}

	};
