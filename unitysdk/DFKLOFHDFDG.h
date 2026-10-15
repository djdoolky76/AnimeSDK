#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/BHPMNMMGLHI.h"
class FIJJHJADLLM;
class FLHCGOFNPLA;
class MGFJDLIBABO;
class OBJANKHLNGO;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DFKLOFHDFDG_CTOR_OFFSET UNITYSDK_OFFSET(0xE826F50)
#define DFKLOFHDFDG_GBLKOMIHGGJ_OFFSET UNITYSDK_OFFSET(0xE827130)
#define DFKLOFHDFDG_MALNAKLAPEI_OFFSET UNITYSDK_OFFSET(0xE8276F0)
#define DFKLOFHDFDG_NKMGJGKOIID_OFFSET UNITYSDK_OFFSET(0xE8270A0)
#define DFKLOFHDFDG_START_OFFSET UNITYSDK_OFFSET(0xE826FA0)
#define DFKLOFHDFDG_STOP_OFFSET UNITYSDK_OFFSET(0xE827040)

inline static constexpr unsigned int DFKLOFHDFDG_TypeDefinitionIndex = 82071;

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

		::RPG::Client::Promises::IPromise_1<::FIJJHJADLLM*>* NKMGJGKOIID()
		{
			return ((::RPG::Client::Promises::IPromise_1<::FIJJHJADLLM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLOFHDFDG_NKMGJGKOIID_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::FLHCGOFNPLA*>* GBLKOMIHGGJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::UInt32, ::ACINIALAFDE>*>* a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::FLHCGOFNPLA*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::UInt32, ::ACINIALAFDE>*>*))((::PBYTE)hIl2Cpp + DFKLOFHDFDG_GBLKOMIHGGJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MALNAKLAPEI(::System::UInt16 a1, ::MGFJDLIBABO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::MGFJDLIBABO*))((::PBYTE)hIl2Cpp + DFKLOFHDFDG_MALNAKLAPEI_OFFSET))(this, a1, a2);
		}

	};
