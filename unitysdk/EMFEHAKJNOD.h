#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJHCNHJGHA.h"
#include "unitysdk/FJMJOAGPONA.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMFEHAKJNOD_CHKECOKDFJI_OFFSET UNITYSDK_OFFSET(0x19AE8DD0)
#define EMFEHAKJNOD_DFOCBKKLEDE_OFFSET UNITYSDK_OFFSET(0x19AE8E90)
#define EMFEHAKJNOD_GFIOHGPFDPK_OFFSET UNITYSDK_OFFSET(0x19AE8E30)
#define EMFEHAKJNOD__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE8C10)

inline static constexpr unsigned int EMFEHAKJNOD_TypeDefinitionIndex = 11024;

class EMFEHAKJNOD : public ::CGJHCNHJGHA
{
public:
	::System::Collections::Generic::List_1<::System::String*>* IFNMOFNDACH; // 0xD0
	::System::Collections::Generic::List_1<::System::String*>* MPOIMBIIAMH; // 0xD8
	::System::Collections::Generic::List_1<::System::Int32>* MLHCDJOHJPC; // 0xE0

	::System::Void _ctor(::FJMJOAGPONA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FJMJOAGPONA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EMFEHAKJNOD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CHKECOKDFJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFEHAKJNOD_CHKECOKDFJI_OFFSET))(this);
	}

	static ::System::Void DFOCBKKLEDE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMFEHAKJNOD_DFOCBKKLEDE_OFFSET))();
	}

	::System::Int32 GFIOHGPFDPK(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMFEHAKJNOD_GFIOHGPFDPK_OFFSET))(this, MOBNMDEDJIP);
	}
};
