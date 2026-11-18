#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEECDGEPCOP_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0x14138710)
#define GEECDGEPCOP_CAGJBPMIMGH_OFFSET UNITYSDK_OFFSET(0x14138700)
#define GEECDGEPCOP_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0x14138150)
#define GEECDGEPCOP__CTOR_OFFSET UNITYSDK_OFFSET(0x141380C0)

inline static constexpr unsigned int GEECDGEPCOP_TypeDefinitionIndex = 50189;

class GEECDGEPCOP : public ::IJLOBIGIEDO
{
public:
	::System::Int32 JHFKDGBCOBA; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + GEECDGEPCOP__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GEECDGEPCOP_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + GEECDGEPCOP_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Boolean CAGJBPMIMGH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEECDGEPCOP_CAGJBPMIMGH_OFFSET))(this);
	}
};
