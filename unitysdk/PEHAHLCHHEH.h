#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/PEHAHLCHHEH_LocalInputMoveState.h"
class KFELGAIGHAP;
class OAKCMHFBMPJ;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define PEHAHLCHHEH_COFCGFEPBGH_OFFSET UNITYSDK_OFFSET(0xC947D00)
#define PEHAHLCHHEH_CTOR_OFFSET UNITYSDK_OFFSET(0xC947110)
#define PEHAHLCHHEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC947280)
#define PEHAHLCHHEH_IAFGCLEKNOI_OFFSET UNITYSDK_OFFSET(0xC947DB0)
#define PEHAHLCHHEH_IKBDOKGHECK_OFFSET UNITYSDK_OFFSET(0xC9476D0)
#define PEHAHLCHHEH_NBHFILHIGIN_OFFSET UNITYSDK_OFFSET(0xC947A80)
#define PEHAHLCHHEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9475C0)
#define PEHAHLCHHEH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC9474A0)
#define PEHAHLCHHEH_TICK_OFFSET UNITYSDK_OFFSET(0xC947840)

inline static constexpr unsigned int PEHAHLCHHEH_TypeDefinitionIndex = 54000;

	class PEHAHLCHHEH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* HHIBMBHGMIF; // 0x20
		::OAKCMHFBMPJ* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* LDPPGEOBKLA; // 0x30
		::RPG::Client::FiveDimGameInstance* HOADGOKCPDG; // 0x38
		::KFELGAIGHAP* MLIOPLKEHDK; // 0x40
		::PEHAHLCHHEH_LocalInputMoveState FIJGIHJNDCJ; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OAKCMHFBMPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OAKCMHFBMPJ*))((::PBYTE)hIl2Cpp + PEHAHLCHHEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHAHLCHHEH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHAHLCHHEH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHAHLCHHEH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEHAHLCHHEH_TICK_OFFSET))(this, a1);
		}

		::System::Void NBHFILHIGIN(::PEHAHLCHHEH_LocalInputMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEHAHLCHHEH_LocalInputMoveState))((::PBYTE)hIl2Cpp + PEHAHLCHHEH_NBHFILHIGIN_OFFSET))(this, a1);
		}

		::PEHAHLCHHEH_LocalInputMoveState IKBDOKGHECK()
		{
			return ((::PEHAHLCHHEH_LocalInputMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHAHLCHHEH_IKBDOKGHECK_OFFSET))(this);
		}

		::System::Void IAFGCLEKNOI(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + PEHAHLCHHEH_IAFGCLEKNOI_OFFSET))(this, a1);
		}

		::System::Void COFCGFEPBGH(::KFELGAIGHAP* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*, ::System::Single))((::PBYTE)hIl2Cpp + PEHAHLCHHEH_COFCGFEPBGH_OFFSET))(this, a1, a2);
		}

	};
