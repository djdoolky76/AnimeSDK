#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPCHCMAGNOK_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0x11C7DE30)
#define FPCHCMAGNOK_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0x11C7D790)
#define FPCHCMAGNOK_EJKMAFAFIKB_OFFSET UNITYSDK_OFFSET(0x11C7DE80)
#define FPCHCMAGNOK__CTOR_OFFSET UNITYSDK_OFFSET(0x11C7D770)

inline static constexpr unsigned int FPCHCMAGNOK_TypeDefinitionIndex = 88877;

class FPCHCMAGNOK : public ::IJLOBIGIEDO
{
public:
	::System::Void _ctor(::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + FPCHCMAGNOK__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FPCHCMAGNOK_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FPCHCMAGNOK_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void EJKMAFAFIKB(::System::Boolean CAAFEGLOALC, ::System::UInt32 EKIBIPOBBAH, ::System::UInt32 FLEDHKJGAEP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FPCHCMAGNOK_EJKMAFAFIKB_OFFSET))(this, CAAFEGLOALC, EKIBIPOBBAH, FLEDHKJGAEP);
	}
};
