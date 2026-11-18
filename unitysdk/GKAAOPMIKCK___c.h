#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class SummerEventBeatMap; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GKAAOPMIKCK___C_KOGIIIFNMJM_OFFSET UNITYSDK_OFFSET(0x13D5D9D0)
#define GKAAOPMIKCK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D5D980)
#define GKAAOPMIKCK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D5D9C0)

inline static constexpr unsigned int GKAAOPMIKCK___c_TypeDefinitionIndex = 55519;

class GKAAOPMIKCK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GKAAOPMIKCK___c_TypeDefinitionIndex)->GetStaticField(0x4CF60);
	}
	static ::System::Func_2<::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*, ::System::Single>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GKAAOPMIKCK___c_TypeDefinitionIndex)->GetStaticField(0x4CF68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKAAOPMIKCK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAAOPMIKCK___C__CTOR_OFFSET))(this);
	}

	::System::Single KOGIIIFNMJM(::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap* IPMMCGDMODG)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*))((::PBYTE)hIl2Cpp + GKAAOPMIKCK___C_KOGIIIFNMJM_OFFSET))(this, IPMMCGDMODG);
	}
};
