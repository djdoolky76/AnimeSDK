#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class KADNEIMNGIJ;
class MPKBDIJDMAP;
namespace MoleMole { class ITextureSheetConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define KADNEIMNGIJ_IKMJPNBFDOO_EDCEPEOGNLA_OFFSET UNITYSDK_OFFSET(0x13AEBAA0)
#define KADNEIMNGIJ_IKMJPNBFDOO__CTOR_OFFSET UNITYSDK_OFFSET(0x13AEBA90)

inline static constexpr unsigned int KADNEIMNGIJ_IKMJPNBFDOO_TypeDefinitionIndex = 72641;

class KADNEIMNGIJ_IKMJPNBFDOO : public ::System::Object
{
public:
	::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Color, ::System::Int32>* JLICMOFFLGA; // 0x10
	::System::Action_2<::MPKBDIJDMAP*, ::MoleMole::HollowPieceBlendMode>* FJNBIHFLFKC; // 0x18
	::System::Action* OCIKNBPALGG; // 0x20
	::KADNEIMNGIJ* KLHPEBKNIFB; // 0x28
	::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32>* MGIGKGDHLFL; // 0x30
	::System::Nullable_1<::System::Int32> CENDIOINBJN; // 0x38
	::System::Boolean GENKEAPFFJG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_IKMJPNBFDOO__CTOR_OFFSET))(this);
	}

	::MPKBDIJDMAP* EDCEPEOGNLA(::MoleMole::ITextureSheetConfig* DFMKILICPFB, ::System::Int32& BNLALCIOMFE)
	{
		return ((::MPKBDIJDMAP*(*)(::PVOID, ::MoleMole::ITextureSheetConfig*, ::System::Int32&))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_IKMJPNBFDOO_EDCEPEOGNLA_OFFSET))(this, DFMKILICPFB, BNLALCIOMFE);
	}
};
