#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace RPG::Client { class UIDragSource; }
namespace System { class Action; }

#define FGCOJOKNJKE_CTOR_OFFSET UNITYSDK_OFFSET(0x16672F60)
#define FGCOJOKNJKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16673270)
#define FGCOJOKNJKE_KGOIGDGEJFE_OFFSET UNITYSDK_OFFSET(0x16673030)

inline static constexpr unsigned int FGCOJOKNJKE_TypeDefinitionIndex = 50906;

	class FGCOJOKNJKE : public ::System::Object
	{
	public:
		::RPG::Client::UIDragSource* BPKKKMOCFIP; // 0x10
		::System::Action* MBOEDFCNCJF; // 0x18
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::RPG::Client::UIDragSource* a1, ::CEEGMMCFCBG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::CEEGMMCFCBG*))((::PBYTE)hIl2Cpp + FGCOJOKNJKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KGOIGDGEJFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOJOKNJKE_KGOIGDGEJFE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOJOKNJKE_DISPOSE_OFFSET))(this);
		}

	};
