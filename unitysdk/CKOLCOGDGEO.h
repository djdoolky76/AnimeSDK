#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CKOLCOGDGEO_BPNCBPGDMML_OFFSET UNITYSDK_OFFSET(0x16967D80)
#define CKOLCOGDGEO_EFGJLEDIANP_OFFSET UNITYSDK_OFFSET(0x16967FC0)
#define CKOLCOGDGEO_JFBLKNCDEAA_OFFSET UNITYSDK_OFFSET(0x16967EA0)
#define CKOLCOGDGEO_JFHNGACBIHI_OFFSET UNITYSDK_OFFSET(0x16967CD0)
#define CKOLCOGDGEO__CTOR_OFFSET UNITYSDK_OFFSET(0x16967C10)

inline static constexpr unsigned int CKOLCOGDGEO_TypeDefinitionIndex = 60908;

class CKOLCOGDGEO : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IHGDOIKDHPJ; // 0x10
	::MoleMole::UIBaseController* DCLGMFLNFNG; // 0x18
	::System::Boolean APIEKMLADBE; // 0x20
	::System::Boolean IPIHAJEPJJC; // 0x21

	::System::Void _ctor(::MoleMole::UIBaseController* AEJBCMBCDJE, ::System::Action_1<::System::Int32>* GJBHEJGENMI, ::System::Boolean CBBCPBKDFPE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKOLCOGDGEO__CTOR_OFFSET))(this, AEJBCMBCDJE, GJBHEJGENMI, CBBCPBKDFPE);
	}

	::System::Void JFHNGACBIHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOLCOGDGEO_JFHNGACBIHI_OFFSET))(this);
	}

	::System::Void BPNCBPGDMML(::System::Int32 IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKOLCOGDGEO_BPNCBPGDMML_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void JFBLKNCDEAA(::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKOLCOGDGEO_JFBLKNCDEAA_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void EFGJLEDIANP(::System::Int32 IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKOLCOGDGEO_EFGJLEDIANP_OFFSET))(this, IGAAKDOIPNN);
	}
};
