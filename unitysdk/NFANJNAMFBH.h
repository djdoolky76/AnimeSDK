#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GlobalDispatchData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFANJNAMFBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB772A0)
#define NFANJNAMFBH_ICINELGDJLB_OFFSET UNITYSDK_OFFSET(0xBB77080)
#define NFANJNAMFBH_IMFCINMNNPA_OFFSET UNITYSDK_OFFSET(0xBB77040)
#define NFANJNAMFBH_JBPAMNBNJJO_OFFSET UNITYSDK_OFFSET(0xBB76F90)

	class NFANJNAMFBH : public ::System::Object
	{
	public:
		::System::Int32 JPPMOFCKEJD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFANJNAMFBH_CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* JBPAMNBNJJO(::RPG::Client::GlobalDispatchData* a1, ::System::Action* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::GlobalDispatchData*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*))((::PBYTE)hIl2Cpp + NFANJNAMFBH_JBPAMNBNJJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IMFCINMNNPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFANJNAMFBH_IMFCINMNNPA_OFFSET))(this);
		}

		::System::Void ICINELGDJLB(::RPG::Client::GlobalDispatchData* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GlobalDispatchData*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*))((::PBYTE)hIl2Cpp + NFANJNAMFBH_ICINELGDJLB_OFFSET))(this, a1, a2);
		}

	};
