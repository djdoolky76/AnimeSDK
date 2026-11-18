#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FADNHLFCEIE;
class JKLEHLLDLMC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPGBGNCKKDE_FNMHJNDHPOM_OFFSET UNITYSDK_OFFSET(0x17251D10)
#define EPGBGNCKKDE_HJMCCJOOOIC_OFFSET UNITYSDK_OFFSET(0x17251EE0)
#define EPGBGNCKKDE_JPPAECHCCPG_OFFSET UNITYSDK_OFFSET(0x17251D00)
#define EPGBGNCKKDE_LBNMHDEIPBJ_OFFSET UNITYSDK_OFFSET(0x17251C00)
#define EPGBGNCKKDE_PGHNMKIOLNB_OFFSET UNITYSDK_OFFSET(0x17251D20)
#define EPGBGNCKKDE__CTOR_OFFSET UNITYSDK_OFFSET(0x172519E0)

inline static constexpr unsigned int EPGBGNCKKDE_TypeDefinitionIndex = 82380;

class EPGBGNCKKDE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::JKLEHLLDLMC*>* _PHBIAGGLAIJ_k__BackingField; // 0x10
	::FADNHLFCEIE* LJBPECKCCEA; // 0x18
	::System::UInt64 KJKHHODABAH; // 0x20
	::System::UInt64 OEKEGGJPDEK; // 0x28
	::System::UInt64 NHCPBAGIBIJ; // 0x30
	::System::UInt64 ADEJBHBAIAJ; // 0x38

	::System::Void _ctor(::FADNHLFCEIE* MECOFDHMKEB)
	{
		return ((::System::Void(*)(::PVOID, ::FADNHLFCEIE*))((::PBYTE)hIl2Cpp + EPGBGNCKKDE__CTOR_OFFSET))(this, MECOFDHMKEB);
	}

	::System::String* LBNMHDEIPBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGBGNCKKDE_LBNMHDEIPBJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JKLEHLLDLMC*>* JPPAECHCCPG()
	{
		return ((::System::Collections::Generic::List_1<::JKLEHLLDLMC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGBGNCKKDE_JPPAECHCCPG_OFFSET))(this);
	}

	::System::Void FNMHJNDHPOM(::System::Collections::Generic::List_1<::JKLEHLLDLMC*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JKLEHLLDLMC*>*))((::PBYTE)hIl2Cpp + EPGBGNCKKDE_FNMHJNDHPOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PGHNMKIOLNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGBGNCKKDE_PGHNMKIOLNB_OFFSET))(this);
	}

	::System::String* HJMCCJOOOIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGBGNCKKDE_HJMCCJOOOIC_OFFSET))(this);
	}
};
