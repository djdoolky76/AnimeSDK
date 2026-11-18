#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPINLODJHPN_EABNDOBECPP.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CPINLODJHPN_CPOIENCAPPG;
class FGCOIBFFCHB;
class IOOIHHOJOPI;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MMBAFEFIGDD_AOIHJHAGOLN_OFFSET UNITYSDK_OFFSET(0x11F600A0)
#define MMBAFEFIGDD_BGOFNMEMEGA_OFFSET UNITYSDK_OFFSET(0x11F5F400)
#define MMBAFEFIGDD_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x11F5F230)
#define MMBAFEFIGDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F5F2D0)
#define MMBAFEFIGDD__CTOR_OFFSET UNITYSDK_OFFSET(0x11F5F280)

inline static constexpr unsigned int MMBAFEFIGDD_TypeDefinitionIndex = 80226;

class MMBAFEFIGDD : public ::PBJOCICFNGK
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_AJOCKAIIJHI()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MMBAFEFIGDD_TypeDefinitionIndex)->GetStaticField(0x3E870);
	}
	::FGCOIBFFCHB* NAELFOKOHIC; // 0x50
	::UnityEngine::RectTransform* FHHMDAPONNO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAFEFIGDD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMBAFEFIGDD__CCTOR_OFFSET))();
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MMBAFEFIGDD_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void BGOFNMEMEGA(::CPINLODJHPN_CPOIENCAPPG* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::CPINLODJHPN_CPOIENCAPPG*))((::PBYTE)hIl2Cpp + MMBAFEFIGDD_BGOFNMEMEGA_OFFSET))(this, LJBPECKCCEA);
	}

	::System::String* AOIHJHAGOLN(::CPINLODJHPN_EABNDOBECPP OBNIAHNMHPF, ::System::Boolean AJCMAAHCOMP)
	{
		return ((::System::String*(*)(::PVOID, ::CPINLODJHPN_EABNDOBECPP, ::System::Boolean))((::PBYTE)hIl2Cpp + MMBAFEFIGDD_AOIHJHAGOLN_OFFSET))(this, OBNIAHNMHPF, AJCMAAHCOMP);
	}
};
