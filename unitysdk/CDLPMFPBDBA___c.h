#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CDLPMFPBDBA;
class HFEGFEAKGCA;
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define CDLPMFPBDBA___C_AJKDKEHCCKA_OFFSET UNITYSDK_OFFSET(0x199FADB0)
#define CDLPMFPBDBA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199FAD60)
#define CDLPMFPBDBA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199FADA0)

inline static constexpr unsigned int CDLPMFPBDBA___c_TypeDefinitionIndex = 74354;

class CDLPMFPBDBA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CDLPMFPBDBA___c_TypeDefinitionIndex)->GetStaticField(0x370B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLPMFPBDBA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPMFPBDBA___C__CTOR_OFFSET))(this);
	}

	::HFEGFEAKGCA* AJKDKEHCCKA(::CDLPMFPBDBA* PMNLAHHMNFM, ::MoleMole::GalGame::GalPlayableNodeBase* DFMKILICPFB)
	{
		return ((::HFEGFEAKGCA*(*)(::PVOID, ::CDLPMFPBDBA*, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + CDLPMFPBDBA___C_AJKDKEHCCKA_OFFSET))(this, PMNLAHHMNFM, DFMKILICPFB);
	}
};
