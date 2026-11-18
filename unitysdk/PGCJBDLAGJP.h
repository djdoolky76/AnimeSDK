#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCEBNEEDFFD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGCJBDLAGJP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAC1E60)
#define PGCJBDLAGJP_DOGIAAIAKCK_OFFSET UNITYSDK_OFFSET(0x1BAC11A0)
#define PGCJBDLAGJP_EGGAFKEDPMF_OFFSET UNITYSDK_OFFSET(0x1BAC1480)
#define PGCJBDLAGJP_ENCCGMDOMBE_OFFSET UNITYSDK_OFFSET(0x1BAC1750)
#define PGCJBDLAGJP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAC1A20)
#define PGCJBDLAGJP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAC1470)
#define PGCJBDLAGJP_NBOEPFHLIOP_OFFSET UNITYSDK_OFFSET(0x1BAC1A30)
#define PGCJBDLAGJP_PJPOCNJKLIF_OFFSET UNITYSDK_OFFSET(0x1BAC1D00)
#define PGCJBDLAGJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC1190)

inline static constexpr unsigned int PGCJBDLAGJP_TypeDefinitionIndex = 15010;

class PGCJBDLAGJP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* PNEDPOEOGJJ; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MHAJFNPMAGL; // 0x20
	::KCEBNEEDFFD HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* PEDFOLGIOMB; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* IJIOPHCDLNF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Boolean NGEEFKFPCEF; // 0x4A
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4B

	::System::Void _ctor(::KCEBNEEDFFD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KCEBNEEDFFD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PGCJBDLAGJP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DOGIAAIAKCK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCJBDLAGJP_DOGIAAIAKCK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCJBDLAGJP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EGGAFKEDPMF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCJBDLAGJP_EGGAFKEDPMF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ENCCGMDOMBE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCJBDLAGJP_ENCCGMDOMBE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGCJBDLAGJP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NBOEPFHLIOP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCJBDLAGJP_NBOEPFHLIOP_OFFSET))(this);
	}

	::System::Boolean PJPOCNJKLIF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCJBDLAGJP_PJPOCNJKLIF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCJBDLAGJP_COFGIJJOFLP_OFFSET))(this);
	}
};
