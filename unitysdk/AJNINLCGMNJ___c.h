#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgStyleConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define AJNINLCGMNJ___C_DDIDMBHNOAG_OFFSET UNITYSDK_OFFSET(0x11BA6130)
#define AJNINLCGMNJ___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x11BA6120)
#define AJNINLCGMNJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BA60D0)
#define AJNINLCGMNJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA6110)

inline static constexpr unsigned int AJNINLCGMNJ___c_TypeDefinitionIndex = 73136;

class AJNINLCGMNJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::ComicImgStyleConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ComicImgStyleConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AJNINLCGMNJ___c_TypeDefinitionIndex)->GetStaticField(0x3A280);
	}
	static ::System::Func_2<::MoleMole::ComicImgStyleConfig*, ::MoleMole::ComicImgStyleConfig*>** StaticGet___9__2_2()
	{
		return (::System::Func_2<::MoleMole::ComicImgStyleConfig*, ::MoleMole::ComicImgStyleConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AJNINLCGMNJ___c_TypeDefinitionIndex)->GetStaticField(0x3A288);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AJNINLCGMNJ___c_TypeDefinitionIndex)->GetStaticField(0x3A290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJNINLCGMNJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNINLCGMNJ___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ComicImgStyleConfig* LPCHADDECLC()
	{
		return ((::MoleMole::ComicImgStyleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNINLCGMNJ___C_LPCHADDECLC_OFFSET))(this);
	}

	::MoleMole::ComicImgStyleConfig* DDIDMBHNOAG(::MoleMole::ComicImgStyleConfig* DFMKILICPFB)
	{
		return ((::MoleMole::ComicImgStyleConfig*(*)(::PVOID, ::MoleMole::ComicImgStyleConfig*))((::PBYTE)hIl2Cpp + AJNINLCGMNJ___C_DDIDMBHNOAG_OFFSET))(this, DFMKILICPFB);
	}
};
