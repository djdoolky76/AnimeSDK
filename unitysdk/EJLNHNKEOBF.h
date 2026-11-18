#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"

class BJBCELGBBPO;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntityMode_Collection; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJLNHNKEOBF_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0x1416EE30)
#define EJLNHNKEOBF_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x1416F030)
#define EJLNHNKEOBF_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0x1416E720)
#define EJLNHNKEOBF_DHAILBKJAHO_OFFSET UNITYSDK_OFFSET(0x1416E940)
#define EJLNHNKEOBF_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x1416EF10)
#define EJLNHNKEOBF_EDJMJEHIDDP_OFFSET UNITYSDK_OFFSET(0x1416E5B0)
#define EJLNHNKEOBF_FBKENAENLOO_OFFSET UNITYSDK_OFFSET(0x1416F770)
#define EJLNHNKEOBF_HIBINMEBIJD_OFFSET UNITYSDK_OFFSET(0x1416F3B0)
#define EJLNHNKEOBF_JBOAALHIAMO_OFFSET UNITYSDK_OFFSET(0x1416E5F0)
#define EJLNHNKEOBF_LOHIEIMNHFL_OFFSET UNITYSDK_OFFSET(0x1416EF80)
#define EJLNHNKEOBF_MCKJLOHLBBD_OFFSET UNITYSDK_OFFSET(0x1416F0C0)
#define EJLNHNKEOBF_OAKLFDKHFAF_OFFSET UNITYSDK_OFFSET(0x1416E6A0)
#define EJLNHNKEOBF_OEGJNELGLAH_OFFSET UNITYSDK_OFFSET(0x1416F360)
#define EJLNHNKEOBF_PIKBEGEEINI_OFFSET UNITYSDK_OFFSET(0x1416F800)
#define EJLNHNKEOBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1416EE80)

inline static constexpr unsigned int EJLNHNKEOBF_TypeDefinitionIndex = 52298;

class EJLNHNKEOBF : public ::IJLOBIGIEDO
{
public:
	::MoleMole::Config::InteractEntry* PBJMHOJFHNE; // 0x50
	::System::Boolean CIMCLNBHHGP; // 0x58
	::System::Byte _padding0[0x3];
	::System::Int32 POENBJJGKOA; // 0x5C
	::System::Single JBAGPIFNDBN; // 0x60
	::System::Single FCLEJDNNPFP; // 0x64

	::System::Void _ctor(::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + EJLNHNKEOBF__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Boolean EDJMJEHIDDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_EDJMJEHIDDP_OFFSET))(this);
	}

	::System::Boolean JBOAALHIAMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_JBOAALHIAMO_OFFSET))(this);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void DIEPHAJCGOE(::BJBCELGBBPO* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::BJBCELGBBPO*))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Boolean OAKLFDKHFAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_OAKLFDKHFAF_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::BJBCELGBBPO* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::BJBCELGBBPO*))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MCKJLOHLBBD(::System::Int32 NNIPOCEOGBP, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_MCKJLOHLBBD_OFFSET))(this, NNIPOCEOGBP, DJHFOGHIFEJ);
	}

	::MoleMole::Config::InteractEntityMode_Collection* LOHIEIMNHFL()
	{
		return ((::MoleMole::Config::InteractEntityMode_Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_LOHIEIMNHFL_OFFSET))(this);
	}

	::System::Void DHAILBKJAHO(::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_DHAILBKJAHO_OFFSET))(this, DJHFOGHIFEJ);
	}

	::System::Int32 OEGJNELGLAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_OEGJNELGLAH_OFFSET))(this);
	}

	::System::Boolean FBKENAENLOO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_FBKENAENLOO_OFFSET))(this);
	}

	::System::Boolean PIKBEGEEINI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_PIKBEGEEINI_OFFSET))(this);
	}

	::System::Boolean HIBINMEBIJD(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::System::String* BLIGEBLANDA, ::System::Action_1<::MoleMole::Battle::Entity*>* DFPPJJPCKPA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_HIBINMEBIJD_OFFSET))(this, DJHFOGHIFEJ, BLIGEBLANDA, DFPPJJPCKPA);
	}
};
