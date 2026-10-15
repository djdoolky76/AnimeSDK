#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class BLNGCDEDLBC;
class DJFEFCNBJNO;
class EEOMNBBJDOG;
class ILCEHEIGCBG;
class KBMMBFEOFOL;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AEGMKCGMPKA_CEJMOKIEHAG_OFFSET UNITYSDK_OFFSET(0xB150BB0)
#define AEGMKCGMPKA_CTOR_OFFSET UNITYSDK_OFFSET(0xB14F7D0)
#define AEGMKCGMPKA_DONKIKEBOPM_OFFSET UNITYSDK_OFFSET(0xB150AF0)
#define AEGMKCGMPKA_HOAGEBNLEAG_OFFSET UNITYSDK_OFFSET(0xB150A20)
#define AEGMKCGMPKA_JFHLDBBKAPF_OFFSET UNITYSDK_OFFSET(0xB14F830)
#define AEGMKCGMPKA_LKOFBJLBMLB_OFFSET UNITYSDK_OFFSET(0xB150840)
#define AEGMKCGMPKA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xB14F9B0)
#define AEGMKCGMPKA_PBKFAPGPMFF_OFFSET UNITYSDK_OFFSET(0xB14FAC0)
#define AEGMKCGMPKA_START_OFFSET UNITYSDK_OFFSET(0xB14F7E0)
#define AEGMKCGMPKA_STOP_OFFSET UNITYSDK_OFFSET(0xB14F960)
#define AEGMKCGMPKA__GETDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0xB150C40)

	class AEGMKCGMPKA : public ::BHPMNMMGLHI
	{
	public:
		::DJFEFCNBJNO* BOMFMBPNFJI; // 0x20
		::BLNGCDEDLBC* IPPAADLGAFP; // 0x28
		::KBMMBFEOFOL* CMJPLBINIOM; // 0x30
		::System::Void _ctor(::KBMMBFEOFOL* a1, ::DJFEFCNBJNO* a2, ::BLNGCDEDLBC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KBMMBFEOFOL*, ::DJFEFCNBJNO*, ::BLNGCDEDLBC*))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_STOP_OFFSET))(this);
		}

		::System::Void JFHLDBBKAPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_JFHLDBBKAPF_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* LMBKNCAIDLC()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_LMBKNCAIDLC_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PBKFAPGPMFF(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::ILCEHEIGCBG*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::ILCEHEIGCBG*>*))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_PBKFAPGPMFF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* LKOFBJLBMLB(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_LKOFBJLBMLB_OFFSET))(this, a1);
		}

		::System::Void HOAGEBNLEAG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_HOAGEBNLEAG_OFFSET))(this, a1, a2);
		}

		::System::Void DONKIKEBOPM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_DONKIKEBOPM_OFFSET))(this, a1, a2);
		}

		::System::Void CEJMOKIEHAG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + AEGMKCGMPKA_CEJMOKIEHAG_OFFSET))(this, a1, a2);
		}

		::System::Void _GetData_b__7_0(::EEOMNBBJDOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEOMNBBJDOG*))((::PBYTE)hIl2Cpp + AEGMKCGMPKA__GETDATA_B__7_0_OFFSET))(this, a1);
		}

	};
