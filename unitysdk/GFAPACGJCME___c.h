#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GFAPACGJCME___C_KGEANAMDLCE_OFFSET UNITYSDK_OFFSET(0x16CBEF70)
#define GFAPACGJCME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CBEF20)
#define GFAPACGJCME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBEF60)

inline static constexpr unsigned int GFAPACGJCME___c_TypeDefinitionIndex = 86892;

class GFAPACGJCME___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GFAPACGJCME___c_TypeDefinitionIndex)->GetStaticField(0x37880);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GFAPACGJCME___c_TypeDefinitionIndex)->GetStaticField(0x37888);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFAPACGJCME___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPACGJCME___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KGEANAMDLCE(::MoleMole::DownloadFileInfo* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + GFAPACGJCME___C_KGEANAMDLCE_OFFSET))(this, HAAEBCOBKFF);
	}
};
