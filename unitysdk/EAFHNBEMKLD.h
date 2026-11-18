#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGABMJOLDNO.h"
#include "unitysdk/NOLEBCPEIFH.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EAFHNBEMKLD_GGFLBBKBGPJ_OFFSET UNITYSDK_OFFSET(0x1A1947D0)
#define EAFHNBEMKLD_LDNHNFCJOAB_OFFSET UNITYSDK_OFFSET(0x1A194640)
#define EAFHNBEMKLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1944C0)

inline static constexpr unsigned int EAFHNBEMKLD_TypeDefinitionIndex = 16253;

class EAFHNBEMKLD : public ::KGABMJOLDNO
{
public:
	::Il2CppArray<::System::Int32>* FHENBBJEPAC; // 0x38

	::System::Void _ctor(::NOLEBCPEIFH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NOLEBCPEIFH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EAFHNBEMKLD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LDNHNFCJOAB(::System::Int32 AOHJDBIOIME, ::System::Single& PDCFDLKMKHI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + EAFHNBEMKLD_LDNHNFCJOAB_OFFSET))(this, AOHJDBIOIME, PDCFDLKMKHI);
	}

	::System::Boolean GGFLBBKBGPJ(::System::Int32 AOHJDBIOIME, ::System::Collections::Generic::List_1<::System::Int32>*& CGAOEOFJBGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + EAFHNBEMKLD_GGFLBBKBGPJ_OFFSET))(this, AOHJDBIOIME, CGAOEOFJBGP);
	}
};
