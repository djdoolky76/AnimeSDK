#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class IPEndPoint; }

#define HCCEELDOMFB_HICCDHCFMDG_OFFSET UNITYSDK_OFFSET(0x1DDAC680)
#define HCCEELDOMFB_LJEHAMLEKDI_OFFSET UNITYSDK_OFFSET(0x1DDAC770)
#define HCCEELDOMFB_NNAHGBKABPO_OFFSET UNITYSDK_OFFSET(0x1DDAD720)

inline static constexpr unsigned int HCCEELDOMFB_TypeDefinitionIndex = 43962;

	class HCCEELDOMFB : public ::System::Object
	{
	public:
		static ::System::Void HICCDHCFMDG(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>* a1, ::System::UInt64 a2, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>*, ::System::UInt64, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>*))((::PBYTE)hIl2Cpp + HCCEELDOMFB_HICCDHCFMDG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LJEHAMLEKDI(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>* a1, ::System::UInt64 a2, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>*, ::System::UInt64, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>*))((::PBYTE)hIl2Cpp + HCCEELDOMFB_LJEHAMLEKDI_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 NNAHGBKABPO()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + HCCEELDOMFB_NNAHGBKABPO_OFFSET))();
		}

	};
