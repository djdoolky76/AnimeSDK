#pragma once
#include "unitysdk/unitysdk.h"
class IKIJNECGDFB;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOFDMALKAKD_CTOR_OFFSET UNITYSDK_OFFSET(0x196993C0)
#define OOFDMALKAKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19699640)
#define OOFDMALKAKD_HODBNDKJMEN_OFFSET UNITYSDK_OFFSET(0x19699C70)
#define OOFDMALKAKD_ODKGLDGLGBP_OFFSET UNITYSDK_OFFSET(0x19699E70)
#define OOFDMALKAKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19699930)

inline static constexpr unsigned int OOFDMALKAKD_TypeDefinitionIndex = 53639;

	class OOFDMALKAKD
	{
	public:
		::KFELGAIGHAP* IHPPIJOMNAP; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KFELGAIGHAP*>* ILPALCPKGHE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IKIJNECGDFB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IKIJNECGDFB*))((::PBYTE)hIl2Cpp + OOFDMALKAKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDMALKAKD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDMALKAKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::UInt32 HODBNDKJMEN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDMALKAKD_HODBNDKJMEN_OFFSET))(this);
		}

		::System::Void ODKGLDGLGBP(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + OOFDMALKAKD_ODKGLDGLGBP_OFFSET))(this, a1);
		}

	};
