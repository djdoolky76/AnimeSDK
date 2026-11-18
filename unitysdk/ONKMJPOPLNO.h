#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class KOIDMLPJGML;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONKMJPOPLNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE1659D0)
#define ONKMJPOPLNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE1658E0)
#define ONKMJPOPLNO_EQUALS_OFFSET UNITYSDK_OFFSET(0xE165820)
#define ONKMJPOPLNO_HLOKCOKHMBL_OFFSET UNITYSDK_OFFSET(0xE165E70)
#define ONKMJPOPLNO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0xE165E60)
#define ONKMJPOPLNO_JHBHFFPFLBP_OFFSET UNITYSDK_OFFSET(0xE165A20)
#define ONKMJPOPLNO_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0xE166280)
#define ONKMJPOPLNO_PJEBDDHFANP_OFFSET UNITYSDK_OFFSET(0xE165D20)
#define ONKMJPOPLNO__CTOR_OFFSET UNITYSDK_OFFSET(0xE165A10)

inline static constexpr unsigned int ONKMJPOPLNO_TypeDefinitionIndex = 85651;

class ONKMJPOPLNO : public ::System::Object
{
public:
	::System::String* EDALLCBCNPK; // 0x10
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* HEIAEFIDLAK; // 0x18
	::System::Int32 KKPHLMFOGHJ; // 0x20
	::Foundation::ViewObject::GroupMemberIdentifier EOJAFFGKIAG; // 0x24
	::System::Int32 ONAEEJKANEK; // 0x2C
	::System::Int32 FEIKBHLPFOK; // 0x30
	::System::Int32 DHAJLFMHDNG; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMJPOPLNO__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::ONKMJPOPLNO* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ONKMJPOPLNO*))((::PBYTE)hIl2Cpp + ONKMJPOPLNO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONKMJPOPLNO_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMJPOPLNO_DISPOSE_OFFSET))(this);
	}

	::System::Boolean JHBHFFPFLBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMJPOPLNO_JHBHFFPFLBP_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONKMJPOPLNO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* HLOKCOKHMBL()
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMJPOPLNO_HLOKCOKHMBL_OFFSET))(this);
	}

	::System::Int32 PJEBDDHFANP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMJPOPLNO_PJEBDDHFANP_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMJPOPLNO_PGKDINGDONO_OFFSET))(this);
	}
};
