#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class IECNLPPHCHI;
class MPKBDIJDMAP;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define IECNLPPHCHI_JLPMGFOIJMN_CANAHAPOLMN_OFFSET UNITYSDK_OFFSET(0x140DAB10)
#define IECNLPPHCHI_JLPMGFOIJMN_CBAHIKIACPI_OFFSET UNITYSDK_OFFSET(0x140DAA90)
#define IECNLPPHCHI_JLPMGFOIJMN__CTOR_OFFSET UNITYSDK_OFFSET(0x140DAA80)

inline static constexpr unsigned int IECNLPPHCHI_JLPMGFOIJMN_TypeDefinitionIndex = 64119;

class IECNLPPHCHI_JLPMGFOIJMN : public ::System::Object
{
public:
	::MoleMole::TextureSheetAnimCurveParam* LCCCJNLHCAC; // 0x10
	::IECNLPPHCHI* KLHPEBKNIFB; // 0x18
	::System::Action* IHLBALNBGKM; // 0x20
	::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32>* MGIGKGDHLFL; // 0x28
	::System::Int32 DBHFIJGFPOK; // 0x30
	::UnityEngine::Vector4 FPKOBDJNIDH; // 0x34
	::UnityEngine::Vector4 CIEBHFEIMIB; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNLPPHCHI_JLPMGFOIJMN__CTOR_OFFSET))(this);
	}

	::System::Void CBAHIKIACPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNLPPHCHI_JLPMGFOIJMN_CBAHIKIACPI_OFFSET))(this);
	}

	::System::Void CANAHAPOLMN(::System::Single HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IECNLPPHCHI_JLPMGFOIJMN_CANAHAPOLMN_OFFSET))(this, HACJFKBLODH);
	}
};
