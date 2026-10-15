#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
#include "unitysdk/System/ValueTuple.h"
class DLECIKAMKEG;
class LJEBKOIENMG;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBDMHGCLEEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2F1B70)
#define KBDMHGCLEEJ_FLFOEBFLDNG_OFFSET UNITYSDK_OFFSET(0xB2F26B0)
#define KBDMHGCLEEJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB2F2620)
#define KBDMHGCLEEJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB2F1BE0)
#define KBDMHGCLEEJ_PFFICPCIMCM_OFFSET UNITYSDK_OFFSET(0xB2F1C40)

inline static constexpr unsigned int KBDMHGCLEEJ_TypeDefinitionIndex = 78268;

	class KBDMHGCLEEJ : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple>* GBINLLKJFPJ; // 0x20
		::LJEBKOIENMG* MKKLHFCCCNF; // 0x28
		::System::Single LLNIGIGFCEA; // 0x30
		::System::Void _ctor(::LJEBKOIENMG* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LJEBKOIENMG*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + KBDMHGCLEEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDMHGCLEEJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBDMHGCLEEJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PFFICPCIMCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDMHGCLEEJ_PFFICPCIMCM_OFFSET))(this);
		}

		::System::Void FLFOEBFLDNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDMHGCLEEJ_FLFOEBFLDNG_OFFSET))(this);
		}

	};
