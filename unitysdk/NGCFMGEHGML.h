#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKHGAHMDDFL.h"
#include "unitysdk/KDOEAKOKMKI.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGCFMGEHGML_AIHOCPPGMNK_OFFSET UNITYSDK_OFFSET(0x1AB150D0)
#define NGCFMGEHGML__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB14CD0)

inline static constexpr unsigned int NGCFMGEHGML_TypeDefinitionIndex = 14040;

class NGCFMGEHGML : public ::LKHGAHMDDFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* KBLNOIAJABL; // 0x78
	::Il2CppArray<::System::String*>* KPOBAIKHAOF; // 0x80
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* FKMIAGNJMGO; // 0x88

	::System::Void _ctor(::KDOEAKOKMKI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KDOEAKOKMKI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NGCFMGEHGML__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::String*>* AIHOCPPGMNK()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCFMGEHGML_AIHOCPPGMNK_OFFSET))(this);
	}
};
