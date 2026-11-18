#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOPBCBCMFGF.h"
#include "unitysdk/LHMMBAGOCLO.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEOLEPELECE_JKJPDNHHFFH_OFFSET UNITYSDK_OFFSET(0x1CBCE670)
#define OEOLEPELECE_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1CBCE590)
#define OEOLEPELECE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBCE5E0)
#define OEOLEPELECE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBCE4E0)
#define OEOLEPELECE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBCE430)

inline static constexpr unsigned int OEOLEPELECE_TypeDefinitionIndex = 93450;

class OEOLEPELECE
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_OOENDNGHMBJ()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OEOLEPELECE_TypeDefinitionIndex)->GetStaticField(0x527C0);
	}
	::System::String* NAPFALLANDL; // 0x10
	::System::Int32 LOLODECIDBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOLEPELECE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEOLEPELECE__CTOR_1_OFFSET))(this, NAPFALLANDL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEOLEPELECE__CCTOR_OFFSET))();
	}

	::EOPBCBCMFGF MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::EOPBCBCMFGF(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + OEOLEPELECE_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}

	static ::System::String* JKJPDNHHFFH(::System::Int32 HEMGNHELNKP)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + OEOLEPELECE_JKJPDNHHFFH_OFFSET))(HEMGNHELNKP);
	}
};
