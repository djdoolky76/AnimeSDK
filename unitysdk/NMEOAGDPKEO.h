#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMLMONHJME;
class NJMLJBNICND;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NMEOAGDPKEO_APFBHJOIOBK_OFFSET UNITYSDK_OFFSET(0xBC827F0)
#define NMEOAGDPKEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC82B30)
#define NMEOAGDPKEO_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0xBC826A0)
#define NMEOAGDPKEO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBC82900)
#define NMEOAGDPKEO_LCNGKEDDMGH_OFFSET UNITYSDK_OFFSET(0xBC82860)
#define NMEOAGDPKEO_PEKGGDMDKMI_OFFSET UNITYSDK_OFFSET(0xBC826C0)
#define NMEOAGDPKEO_SET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0xBC826B0)
#define NMEOAGDPKEO__TICK_B__11_0_OFFSET UNITYSDK_OFFSET(0xBC82B40)

	class NMEOAGDPKEO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::GBMLMONHJME*>* OJFECHILFHG; // 0x10
		::NJMLJBNICND* NIHJGJMOEGB; // 0x18
		::GBMLMONHJME* MLAEBDBIGLD; // 0x20
		::RPG::Client::Promises::Promise* HDKMCJLGOFI; // 0x28
		::System::Boolean _IsStopped_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEOAGDPKEO_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEOAGDPKEO_GET_ISSTOPPED_OFFSET))(this);
		}

		::System::Void set_IsStopped(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMEOAGDPKEO_SET_ISSTOPPED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PEKGGDMDKMI(::NJMLJBNICND* a1, ::System::Collections::Generic::IEnumerable_1<::GBMLMONHJME*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::NJMLJBNICND*, ::System::Collections::Generic::IEnumerable_1<::GBMLMONHJME*>*))((::PBYTE)hIl2Cpp + NMEOAGDPKEO_PEKGGDMDKMI_OFFSET))(this, a1, a2);
		}

		::System::Void APFBHJOIOBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEOAGDPKEO_APFBHJOIOBK_OFFSET))(this);
		}

		::System::Void LCNGKEDDMGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEOAGDPKEO_LCNGKEDDMGH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMEOAGDPKEO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void _Tick_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEOAGDPKEO__TICK_B__11_0_OFFSET))(this);
		}

	};
