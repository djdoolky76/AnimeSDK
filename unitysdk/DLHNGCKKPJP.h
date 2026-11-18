#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define DLHNGCKKPJP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BB5F50)
#define DLHNGCKKPJP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BB5E60)
#define DLHNGCKKPJP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BB5C60)
#define DLHNGCKKPJP__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB5F40)

inline static constexpr unsigned int DLHNGCKKPJP_TypeDefinitionIndex = 51917;

class DLHNGCKKPJP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HFJGFOLKIMA; // 0x18
	::UnityEngine::GameObject* HGMNLNMGBBG; // 0x20
	::FGCOIBFFCHB* ANCBNCCKIHF; // 0x28
	::UnityEngine::UI::Text* AMEEMEPHGEL; // 0x30
	::UnityEngine::UI::Text* CIODPKMJMGE; // 0x38
	::UnityEngine::UI::Text* GDDDEJLGNFP; // 0x40
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHNGCKKPJP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLHNGCKKPJP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHNGCKKPJP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLHNGCKKPJP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
