#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace RPG::Client { class UIDragSource; }
namespace System { class Action; }

#define OFMAGIOKPBB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3F7D0)
#define OFMAGIOKPBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE3FAE0)
#define OFMAGIOKPBB_KGOIGDGEJFE_OFFSET UNITYSDK_OFFSET(0xBE3F8A0)

inline static constexpr unsigned int OFMAGIOKPBB_TypeDefinitionIndex = 49858;

	class OFMAGIOKPBB : public ::System::Object
	{
	public:
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x10
		::System::Action* MBOEDFCNCJF; // 0x18
		::RPG::Client::UIDragSource* BPKKKMOCFIP; // 0x20
		::System::Void _ctor(::RPG::Client::UIDragSource* a1, ::CEEGMMCFCBG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::CEEGMMCFCBG*))((::PBYTE)hIl2Cpp + OFMAGIOKPBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KGOIGDGEJFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMAGIOKPBB_KGOIGDGEJFE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMAGIOKPBB_DISPOSE_OFFSET))(this);
		}

	};
