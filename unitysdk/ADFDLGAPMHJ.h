#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEJCAJEGDIL.h"
#include "unitysdk/NPIACHENFIP.h"
#include "unitysdk/PKCNMKDMONJ.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADFDLGAPMHJ_BCLLGADBHIM_OFFSET UNITYSDK_OFFSET(0x1576CBC0)
#define ADFDLGAPMHJ_FDDBONFEHMM_OFFSET UNITYSDK_OFFSET(0x1576D1E0)
#define ADFDLGAPMHJ_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x1576CBB0)
#define ADFDLGAPMHJ_MMDDCODDKKK_OFFSET UNITYSDK_OFFSET(0x1576D040)
#define ADFDLGAPMHJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1576CBD0)
#define ADFDLGAPMHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1576C9A0)

inline static constexpr unsigned int ADFDLGAPMHJ_TypeDefinitionIndex = 14617;

class ADFDLGAPMHJ : public ::NPIACHENFIP
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_OANCGOGOEGK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ADFDLGAPMHJ_TypeDefinitionIndex)->GetStaticField(0x78E0);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* KPJABIGHNFG; // 0xF8
	::EEJCAJEGDIL LAGLMEAICOA; // 0x100

	::System::Void _ctor(::PKCNMKDMONJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PKCNMKDMONJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ADFDLGAPMHJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADFDLGAPMHJ__CCTOR_OFFSET))();
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFDLGAPMHJ_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Boolean BCLLGADBHIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFDLGAPMHJ_BCLLGADBHIM_OFFSET))(this);
	}

	::EEJCAJEGDIL MMDDCODDKKK()
	{
		return ((::EEJCAJEGDIL(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFDLGAPMHJ_MMDDCODDKKK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* FDDBONFEHMM()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFDLGAPMHJ_FDDBONFEHMM_OFFSET))(this);
	}
};
