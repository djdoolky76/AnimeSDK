#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace RPG::Client { class UIDragSource; }
namespace System { class Action; }

#define KFDIDIMCGPE_CFILENMJKCL_OFFSET UNITYSDK_OFFSET(0xBC1DC60)
#define KFDIDIMCGPE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1DB90)
#define KFDIDIMCGPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC1DEA0)

inline static constexpr unsigned int KFDIDIMCGPE_TypeDefinitionIndex = 50904;

	class KFDIDIMCGPE : public ::System::Object
	{
	public:
		::RPG::Client::UIDragSource* BPKKKMOCFIP; // 0x10
		::System::Action* MBOEDFCNCJF; // 0x18
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::RPG::Client::UIDragSource* a1, ::CEEGMMCFCBG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::CEEGMMCFCBG*))((::PBYTE)hIl2Cpp + KFDIDIMCGPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CFILENMJKCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDIDIMCGPE_CFILENMJKCL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDIDIMCGPE_DISPOSE_OFFSET))(this);
		}

	};
