#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace System { class String; }

#define DNELCBAMFFK_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x124270C0)
#define DNELCBAMFFK_NEMJJNIDKFN_OFFSET UNITYSDK_OFFSET(0x12427670)
#define DNELCBAMFFK_OEGDKHKBHJO_OFFSET UNITYSDK_OFFSET(0x12427820)
#define DNELCBAMFFK__CTOR_OFFSET UNITYSDK_OFFSET(0x12427610)

inline static constexpr unsigned int DNELCBAMFFK_TypeDefinitionIndex = 68849;

class DNELCBAMFFK : public ::PBJOCICFNGK
{
public:
	::System::String* IGNIAKGAAME; // 0x50
	::System::Int32 IKMIEHOOMIH; // 0x58
	::System::Int32 BCECGBGNDJB; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNELCBAMFFK__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + DNELCBAMFFK_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void NEMJJNIDKFN(::System::Int32 OFBIMIABNEP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNELCBAMFFK_NEMJJNIDKFN_OFFSET))(this, OFBIMIABNEP);
	}

	::UIWidgetGroup* OEGDKHKBHJO(::MonoUITableScrollV2* LAOANOKHCAH)
	{
		return ((::UIWidgetGroup*(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + DNELCBAMFFK_OEGDKHKBHJO_OFFSET))(this, LAOANOKHCAH);
	}
};
