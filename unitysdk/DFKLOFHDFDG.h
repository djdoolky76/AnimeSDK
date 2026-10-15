#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/BHPMNMMGLHI.h"
class FIJJHJADLLM;
class FLHCGOFNPLA;
class MGFJDLIBABO;
class OBJANKHLNGO;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DFKLOFHDFDG_CTOR_OFFSET UNITYSDK_OFFSET(0xE831CE0)
#define DFKLOFHDFDG_GBLKOMIHGGJ_OFFSET UNITYSDK_OFFSET(0xE831EC0)
#define DFKLOFHDFDG_MALNAKLAPEI_OFFSET UNITYSDK_OFFSET(0xE832470)
#define DFKLOFHDFDG_NKMGJGKOIID_OFFSET UNITYSDK_OFFSET(0xE831E30)
#define DFKLOFHDFDG_START_OFFSET UNITYSDK_OFFSET(0xE831D30)
#define DFKLOFHDFDG_STOP_OFFSET UNITYSDK_OFFSET(0xE831DD0)

	class DFKLOFHDFDG : public ::BHPMNMMGLHI
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + DFKLOFHDFDG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLOFHDFDG_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLOFHDFDG_STOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NKMGJGKOIID()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLOFHDFDG_NKMGJGKOIID_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GBLKOMIHGGJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple*>* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple*>*))((::PBYTE)hIl2Cpp + DFKLOFHDFDG_GBLKOMIHGGJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MALNAKLAPEI(::System::UInt16 a1, ::MGFJDLIBABO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::MGFJDLIBABO*))((::PBYTE)hIl2Cpp + DFKLOFHDFDG_MALNAKLAPEI_OFFSET))(this, a1, a2);
		}

	};
