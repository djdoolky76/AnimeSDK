#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarAnimator; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define AENICMHEIBH_ICGFKDPMBBN_HNOGMJDDPCN_OFFSET UNITYSDK_OFFSET(0x16FE19D0)
#define AENICMHEIBH_ICGFKDPMBBN_ICJOHLKJIGJ_OFFSET UNITYSDK_OFFSET(0x16FE16E0)
#define AENICMHEIBH_ICGFKDPMBBN_JOKHKFAIOKC_OFFSET UNITYSDK_OFFSET(0x16FE1B90)
#define AENICMHEIBH_ICGFKDPMBBN__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE16D0)

inline static constexpr unsigned int AENICMHEIBH_ICGFKDPMBBN_TypeDefinitionIndex = 85676;

class AENICMHEIBH_ICGFKDPMBBN : public ::System::Object
{
public:
	::UnityEngine::GameObject* JGMOAKFNEGD; // 0x10
	::UnityEngine::Animator* IPOKHIIAEPJ; // 0x18
	::MoleMole::Battle::Entity* CPLFOFKKGGO; // 0x20
	::Il2CppArray<::UnityEngine::Renderer*>* GCIGBIOFGLA; // 0x28
	::Il2CppArray<::System::Boolean>* LMGIOEFNMGN; // 0x30
	::UnityEngine::Transform* OLIKFMKIBNF; // 0x38
	::MoleMole::UIAvatarAnimator* LKKIPKAANKL; // 0x40
	::System::Boolean AJIGJFDBIAO; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 JFJOBKPBKFK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_ICGFKDPMBBN__CTOR_OFFSET))(this);
	}

	::System::Void ICJOHLKJIGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_ICGFKDPMBBN_ICJOHLKJIGJ_OFFSET))(this);
	}

	::System::Void HNOGMJDDPCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_ICGFKDPMBBN_HNOGMJDDPCN_OFFSET))(this);
	}

	::System::Void JOKHKFAIOKC(::System::Int32 OOBBIILKIKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AENICMHEIBH_ICGFKDPMBBN_JOKHKFAIOKC_OFFSET))(this, OOBBIILKIKC);
	}
};
