#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LHBMLLKJIPK_BLNBINEMMNH_OFFSET UNITYSDK_OFFSET(0xD42CBE0)
#define LHBMLLKJIPK_CICALBGFFAL_OFFSET UNITYSDK_OFFSET(0xD42CBF0)
#define LHBMLLKJIPK_LABBDLFFCIG_OFFSET UNITYSDK_OFFSET(0xD42CC90)
#define LHBMLLKJIPK_MFKOMJHAGBF_OFFSET UNITYSDK_OFFSET(0xD42CD00)
#define LHBMLLKJIPK_MGAKCHEFNDD_OFFSET UNITYSDK_OFFSET(0xD42CBD0)
#define LHBMLLKJIPK__CTOR_OFFSET UNITYSDK_OFFSET(0xD42CBC0)

inline static constexpr unsigned int LHBMLLKJIPK_TypeDefinitionIndex = 86384;

class LHBMLLKJIPK : public ::System::Object
{
public:
	::UnityEngine::Transform* _FPALNDHDPFE_k__BackingField; // 0x10
	::MoleMole::Config::ConfigHollowChessboard* _CGOCFGPHKLJ_k__BackingField; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* DFMKILICPFB, ::UnityEngine::Transform* EIJDGCPECIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LHBMLLKJIPK__CTOR_OFFSET))(this, DFMKILICPFB, EIJDGCPECIF);
	}

	::UnityEngine::Transform* MGAKCHEFNDD()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBMLLKJIPK_MGAKCHEFNDD_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboard* BLNBINEMMNH()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBMLLKJIPK_BLNBINEMMNH_OFFSET))(this);
	}

	::System::Void CICALBGFFAL(::System::String* CJBJONJDOLI, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LHBMLLKJIPK_CICALBGFFAL_OFFSET))(this, CJBJONJDOLI, NJOAJLDJCCJ);
	}

	::System::String* LABBDLFFCIG(::System::String* MHJBBOJKPNF)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LHBMLLKJIPK_LABBDLFFCIG_OFFSET))(this, MHJBBOJKPNF);
	}

	::UnityEngine::GameObject* MFKOMJHAGBF(::System::String* CJBJONJDOLI)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LHBMLLKJIPK_MFKOMJHAGBF_OFFSET))(this, CJBJONJDOLI);
	}
};
