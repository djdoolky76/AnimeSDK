#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEEFFCDLJKD;
class OBCGDEHBPHG;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MEEFFCDLJKD_KDONMLCLLFA_DCDHAAJHLDP_OFFSET UNITYSDK_OFFSET(0x1FA43C90)
#define MEEFFCDLJKD_KDONMLCLLFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA43C80)

inline static constexpr unsigned int MEEFFCDLJKD_KDONMLCLLFA_TypeDefinitionIndex = 96612;

class MEEFFCDLJKD_KDONMLCLLFA : public ::System::Object
{
public:
	::UnityEngine::GameObject* NJOAJLDJCCJ; // 0x10
	::OBCGDEHBPHG* DFMKILICPFB; // 0x18
	::MEEFFCDLJKD* KLHPEBKNIFB; // 0x20
	::UnityEngine::Animation* AOKJEGNBALI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_KDONMLCLLFA__CTOR_OFFSET))(this);
	}

	::System::Void DCDHAAJHLDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_KDONMLCLLFA_DCDHAAJHLDP_OFFSET))(this);
	}
};
