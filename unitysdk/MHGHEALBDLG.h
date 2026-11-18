#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAGKHDAABMD.h"
#include "unitysdk/KJHKJEFHJPK.h"

class KGBFLHNJHHN;
class LCPKGBNFMGL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHGHEALBDLG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1E90E490)
#define MHGHEALBDLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E90E2E0)
#define MHGHEALBDLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9014E0)

inline static constexpr unsigned int MHGHEALBDLG_TypeDefinitionIndex = 95300;

class MHGHEALBDLG : public ::DAGKHDAABMD
{
public:
	::System::Collections::Generic::List_1<::LCPKGBNFMGL*>* PKEFLIBIPPC; // 0x40

	::System::Void _ctor(::KJHKJEFHJPK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KJHKJEFHJPK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHGHEALBDLG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGHEALBDLG_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGHEALBDLG_DPIHOJBBGLA_OFFSET))(this);
	}
};
