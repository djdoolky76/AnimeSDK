#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/Object.h"

class GEDILNJLFHM;
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class FlowControlNode; }
namespace System { class String; }

#define GNIGOLCCAEH_FJINICODFEK_OFFSET UNITYSDK_OFFSET(0x16CD6640)
#define GNIGOLCCAEH_JDIDGKCEEFH_OFFSET UNITYSDK_OFFSET(0x16CD6AF0)
#define GNIGOLCCAEH_JHHOGPHFKIM_OFFSET UNITYSDK_OFFSET(0x16CD6E10)
#define GNIGOLCCAEH_KACPICFHAKN_OFFSET UNITYSDK_OFFSET(0x16CD6C90)
#define GNIGOLCCAEH_MNNKAIBEACL_OFFSET UNITYSDK_OFFSET(0x16CD6F90)
#define GNIGOLCCAEH__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD6630)

inline static constexpr unsigned int GNIGOLCCAEH_TypeDefinitionIndex = 49785;

class GNIGOLCCAEH : public ::System::Object
{
public:
	::FlowCanvas::ValueInput_1<::MoleMole::Config::TimePeriodType>* OPADCNHEBHB; // 0x10
	::FlowCanvas::ValueInput_1<::System::Int32>* JPCPLGMHJOK; // 0x18
	::FlowCanvas::ValueInput_1<::System::String*>* AEAAHBHOOEF; // 0x20
	::FlowCanvas::ValueInput_1<::System::String*>* ELKCAPBODAL; // 0x28
	::FlowCanvas::ValueInput_1<::System::String*>* JGIKDDCPKCA; // 0x30
	::FlowCanvas::ValueInput_1<::MoleMole::Config::WeatherType>* FHGDMGLCNLK; // 0x38
	::FlowCanvas::ValueInput_1<::System::Boolean>* KCKEOOGILHK; // 0x40
	::System::Boolean NLIPGKMFPIB; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 MBCONDJMGOA; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIGOLCCAEH__CTOR_OFFSET))(this);
	}

	::System::Void FJINICODFEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIGOLCCAEH_FJINICODFEK_OFFSET))(this);
	}

	::System::Void KACPICFHAKN(::FlowCanvas::Nodes::FlowControlNode* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::FlowControlNode*))((::PBYTE)hIl2Cpp + GNIGOLCCAEH_KACPICFHAKN_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JHHOGPHFKIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIGOLCCAEH_JHHOGPHFKIM_OFFSET))(this);
	}

	::System::Void JDIDGKCEEFH(::GEDILNJLFHM* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::PVOID, ::GEDILNJLFHM*))((::PBYTE)hIl2Cpp + GNIGOLCCAEH_JDIDGKCEEFH_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Void MNNKAIBEACL(::FlowCanvas::Nodes::FlowControlNode* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::FlowControlNode*))((::PBYTE)hIl2Cpp + GNIGOLCCAEH_MNNKAIBEACL_OFFSET))(this, HHIJHDFHPOI);
	}
};
