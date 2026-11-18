#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGHAABDEPFO_GMJBFNOCHBC_OFFSET UNITYSDK_OFFSET(0x1414CD00)
#define EGHAABDEPFO_GOOBEPFICNI_OFFSET UNITYSDK_OFFSET(0x1414CE90)
#define EGHAABDEPFO_OLAANDDAGOJ_OFFSET UNITYSDK_OFFSET(0x1414CF40)
#define EGHAABDEPFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1414CC70)

inline static constexpr unsigned int EGHAABDEPFO_TypeDefinitionIndex = 92274;

class EGHAABDEPFO : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_INHJEOJBGLH()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(EGHAABDEPFO_TypeDefinitionIndex)->GetStaticField(0x37550);
	}
	static ::System::Action** StaticGet_PHOADBJGFBE()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EGHAABDEPFO_TypeDefinitionIndex)->GetStaticField(0x37558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGHAABDEPFO__CCTOR_OFFSET))();
	}

	static ::System::Void GMJBFNOCHBC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGHAABDEPFO_GMJBFNOCHBC_OFFSET))();
	}

	static ::System::Void GOOBEPFICNI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGHAABDEPFO_GOOBEPFICNI_OFFSET))();
	}

	static ::System::Void OLAANDDAGOJ(::System::Action* GNMEIOKGAPC)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + EGHAABDEPFO_OLAANDDAGOJ_OFFSET))(GNMEIOKGAPC);
	}
};
