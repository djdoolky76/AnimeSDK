#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTakePhoto; }
namespace System { class Object; }

#define HPDBEHJEFFI_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB5360)
#define HPDBEHJEFFI_DIGNGPBHBEB_OFFSET UNITYSDK_OFFSET(0x15DB58D0)
#define HPDBEHJEFFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DB53E0)
#define HPDBEHJEFFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB5790)
#define HPDBEHJEFFI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15DB5840)
#define HPDBEHJEFFI_OOJIFECGAGE_OFFSET UNITYSDK_OFFSET(0x15DB56C0)
#define HPDBEHJEFFI_TICK_OFFSET UNITYSDK_OFFSET(0x15DB5540)

inline static constexpr unsigned int HPDBEHJEFFI_TypeDefinitionIndex = 53496;

	class HPDBEHJEFFI : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HPJPJBLFDGA; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::WaitTakePhoto* OFKGLJOAMLD; // 0x28
		::System::Boolean MFGHMLJJNIG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTakePhoto* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTakePhoto*))((::PBYTE)hIl2Cpp + HPDBEHJEFFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDBEHJEFFI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPDBEHJEFFI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDBEHJEFFI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDBEHJEFFI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void DIGNGPBHBEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPDBEHJEFFI_DIGNGPBHBEB_OFFSET))(this, a1);
		}

		::System::Void OOJIFECGAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDBEHJEFFI_OOJIFECGAGE_OFFSET))(this);
		}

	};
