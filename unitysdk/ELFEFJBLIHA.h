#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class UIHollowChessPieceParticle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELFEFJBLIHA_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x14AA7140)
#define ELFEFJBLIHA_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x14AA72D0)
#define ELFEFJBLIHA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AA7100)
#define ELFEFJBLIHA__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA6FD0)

inline static constexpr unsigned int ELFEFJBLIHA_TypeDefinitionIndex = 83114;

class ELFEFJBLIHA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_FKEGHBLLINO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ELFEFJBLIHA_TypeDefinitionIndex)->GetStaticField(0x126B0);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* HNBIJLJCDHB; // 0x10
	::UnityEngine::Color HBPLPDDKMBG; // 0x18
	::UnityEngine::Color AJJMNDIIDOB; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* AKINKEFDLHD, ::UnityEngine::Color IKEHEBEFCCP, ::UnityEngine::Color IOOHJDBCBJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + ELFEFJBLIHA__CTOR_OFFSET))(this, AKINKEFDLHD, IKEHEBEFCCP, IOOHJDBCBJL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFEFJBLIHA__CCTOR_OFFSET))();
	}

	::System::Void DNNJOOJBJNB(::MoleMole::UIHollowChessPieceParticle* CNJNEILDOCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle*))((::PBYTE)hIl2Cpp + ELFEFJBLIHA_DNNJOOJBJNB_OFFSET))(this, CNJNEILDOCP);
	}

	::System::Void JLIMOLHLFAK(::MoleMole::UIHollowChessPieceParticle* CNJNEILDOCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle*))((::PBYTE)hIl2Cpp + ELFEFJBLIHA_JLIMOLHLFAK_OFFSET))(this, CNJNEILDOCP);
	}
};
