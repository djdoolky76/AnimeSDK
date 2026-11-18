#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPPMPHICDEA_DMCPFGOIMDI_EBMHLNJAPMD_OFFSET UNITYSDK_OFFSET(0x15B374A0)
#define GPPMPHICDEA_DMCPFGOIMDI_HPGDAKDEFKA_OFFSET UNITYSDK_OFFSET(0x15B37480)
#define GPPMPHICDEA_DMCPFGOIMDI__CTOR_OFFSET UNITYSDK_OFFSET(0x15B37470)

inline static constexpr unsigned int GPPMPHICDEA_DMCPFGOIMDI_TypeDefinitionIndex = 42617;

class GPPMPHICDEA_DMCPFGOIMDI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* HLGNGBFENOO; // 0x10
	::MoleMole::UITransitionPanelPopWindowController* OMDJNAPPFFG; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* NBNNOCMBJHJ; // 0x20
	::System::Action* DLMJCFBENGB; // 0x28
	::System::Int32 CGMEOMGAKDN; // 0x30
	::System::Boolean NNBHNMLNAJF; // 0x34
	::System::Boolean GFFINNGEMLL; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DMCPFGOIMDI__CTOR_OFFSET))(this);
	}

	::System::Void HPGDAKDEFKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DMCPFGOIMDI_HPGDAKDEFKA_OFFSET))(this);
	}

	::System::Void EBMHLNJAPMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DMCPFGOIMDI_EBMHLNJAPMD_OFFSET))(this);
	}
};
