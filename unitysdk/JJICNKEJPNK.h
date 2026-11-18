#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class DENGNOJFDLA;
class DGNONKNGLMJ;
class JJICNKEJPNK_EDPFIPCLAFM;

#define JJICNKEJPNK_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1528F150)
#define JJICNKEJPNK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1528F1F0)
#define JJICNKEJPNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1528F1E0)

inline static constexpr unsigned int JJICNKEJPNK_TypeDefinitionIndex = 55362;

class JJICNKEJPNK : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_HOGCPNFBJBM()
	{
		return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(JJICNKEJPNK_TypeDefinitionIndex)->GetStaticField(0x12710);
	}
	::JJICNKEJPNK_EDPFIPCLAFM* NHPMCHOECDF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJICNKEJPNK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJICNKEJPNK__CCTOR_OFFSET))();
	}

	::DGNONKNGLMJ* CreateInstance(::DENGNOJFDLA* AAOCANGHBDG)
	{
		return ((::DGNONKNGLMJ*(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + JJICNKEJPNK_CREATEINSTANCE_OFFSET))(this, AAOCANGHBDG);
	}
};
