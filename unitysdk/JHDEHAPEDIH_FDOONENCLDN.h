#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Object.h"

class MECPGCBLFAE;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHDEHAPEDIH_FDOONENCLDN_LKKCLGHNEBN_OFFSET UNITYSDK_OFFSET(0x14A7D8F0)
#define JHDEHAPEDIH_FDOONENCLDN__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7D8E0)

inline static constexpr unsigned int JHDEHAPEDIH_FDOONENCLDN_TypeDefinitionIndex = 48707;

class JHDEHAPEDIH_FDOONENCLDN : public ::System::Object
{
public:
	::Foundation::Variable_1<::System::UInt32> ANFDLCGBFCP; // 0x10
	::System::Byte _padding0[0x10];
	::MECPGCBLFAE* MINGNPLFJBJ; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* AAPLGHCHAJN; // 0x30
	::System::UInt64 LBCNACHKPGB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_FDOONENCLDN__CTOR_OFFSET))(this);
	}

	::System::Boolean LKKCLGHNEBN(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_FDOONENCLDN_LKKCLGHNEBN_OFFSET))(this, KECKGDFIALJ);
	}
};
