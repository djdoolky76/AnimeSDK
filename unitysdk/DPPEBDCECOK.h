#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITeleportPointTipChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DPPEBDCECOK_CJLDDMFNMLN_OFFSET UNITYSDK_OFFSET(0x148C1AB0)
#define DPPEBDCECOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148C1430)
#define DPPEBDCECOK_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x148C1880)
#define DPPEBDCECOK_IJJJLHEGMAM_OFFSET UNITYSDK_OFFSET(0x148C1580)
#define DPPEBDCECOK_PLJOGPIBEIA_OFFSET UNITYSDK_OFFSET(0x148C1940)
#define DPPEBDCECOK__CTOR_OFFSET UNITYSDK_OFFSET(0x148C12C0)

inline static constexpr unsigned int DPPEBDCECOK_TypeDefinitionIndex = 74155;

class DPPEBDCECOK : public ::System::Object
{
public:
	::UnityEngine::Transform* LMAMOJPPHKE; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UITeleportPointTipChildWindowController*>* IDALCPMPBBG; // 0x18
	::MoleMole::UIWindowController* KBJPABNJOOM; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::UITeleportPointTipChildWindowController*>* CIFLENFEEGN; // 0x28

	::System::Void _ctor(::UnityEngine::Transform* IAPKABMDJNF, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + DPPEBDCECOK__CTOR_OFFSET))(this, IAPKABMDJNF, JNLBPMKIFNK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPEBDCECOK_DISPOSE_OFFSET))(this);
	}

	::System::Void IJJJLHEGMAM(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DPPEBDCECOK_IJJJLHEGMAM_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void DKCCELBNBLM(::MoleMole::UITeleportPointTipChildWindowController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITeleportPointTipChildWindowController*))((::PBYTE)hIl2Cpp + DPPEBDCECOK_DKCCELBNBLM_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void PLJOGPIBEIA(::System::UInt32 KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPPEBDCECOK_PLJOGPIBEIA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void CJLDDMFNMLN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DPPEBDCECOK_CJLDDMFNMLN_OFFSET))(this, KOIBHLHLMFC);
	}
};
