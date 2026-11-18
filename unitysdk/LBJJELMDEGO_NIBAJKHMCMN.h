#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LBJJELMDEGO_NAMOEDKPFAG;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBJJELMDEGO_NIBAJKHMCMN_JOCGFEGJFEM_OFFSET UNITYSDK_OFFSET(0x15807350)
#define LBJJELMDEGO_NIBAJKHMCMN__CTOR_OFFSET UNITYSDK_OFFSET(0x15807340)

inline static constexpr unsigned int LBJJELMDEGO_NIBAJKHMCMN_TypeDefinitionIndex = 52860;

class LBJJELMDEGO_NIBAJKHMCMN : public ::System::Object
{
public:
	::LBJJELMDEGO_NAMOEDKPFAG* FGBNBFHOKAA; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJJELMDEGO_NIBAJKHMCMN__CTOR_OFFSET))(this);
	}

	::System::Void JOCGFEGJFEM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LBJJELMDEGO_NIBAJKHMCMN_JOCGFEGJFEM_OFFSET))(this, KECKGDFIALJ);
	}
};
