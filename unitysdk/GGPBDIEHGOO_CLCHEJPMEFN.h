#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class GGPBDIEHGOO;
class MPKBDIJDMAP;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define GGPBDIEHGOO_CLCHEJPMEFN_CANAHAPOLMN_OFFSET UNITYSDK_OFFSET(0x179EF340)
#define GGPBDIEHGOO_CLCHEJPMEFN_CBAHIKIACPI_OFFSET UNITYSDK_OFFSET(0x179EF270)
#define GGPBDIEHGOO_CLCHEJPMEFN__CTOR_OFFSET UNITYSDK_OFFSET(0x179EF260)

inline static constexpr unsigned int GGPBDIEHGOO_CLCHEJPMEFN_TypeDefinitionIndex = 68852;

class GGPBDIEHGOO_CLCHEJPMEFN : public ::System::Object
{
public:
	::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32>* MGIGKGDHLFL; // 0x10
	::GGPBDIEHGOO* KLHPEBKNIFB; // 0x18
	::System::Action* IDJDKBFAPBJ; // 0x20
	::MoleMole::TextureSheetAnimCurveParam* LCCCJNLHCAC; // 0x28
	::UnityEngine::Vector4 MCLLLELILHJ; // 0x30
	::System::Int32 DBHFIJGFPOK; // 0x40
	::UnityEngine::Color FPKOBDJNIDH; // 0x44
	::UnityEngine::Color CIEBHFEIMIB; // 0x54
	::UnityEngine::Vector4 AFKBPKBIICC; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPBDIEHGOO_CLCHEJPMEFN__CTOR_OFFSET))(this);
	}

	::System::Void CBAHIKIACPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPBDIEHGOO_CLCHEJPMEFN_CBAHIKIACPI_OFFSET))(this);
	}

	::System::Void CANAHAPOLMN(::System::Single HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGPBDIEHGOO_CLCHEJPMEFN_CANAHAPOLMN_OFFSET))(this, HACJFKBLODH);
	}
};
