#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A916C3A9658A83A2.h"

class B856C4B233969463;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }
template <typename T1, typename T2> class E3A1DB35EFB413FC;

#define AB8F36411E906335_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x1CEE260)
#define AB8F36411E906335_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1CEE1C0)
#define AB8F36411E906335__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE3B0)

inline static constexpr unsigned int AB8F36411E906335_TypeDefinitionIndex = 9863;

class AB8F36411E906335 : public ::A916C3A9658A83A2
{
public:
	::ABC::UI::MonoPrefabLoader* A47A6ACDFC91F0D2; // 0x48
	::ABC::UI::MonoPrefabLoader* E05DF4BA96AA52AB; // 0x50
	::UnityEngine::UI::ScrollRect* EA9E8334953A3AEC; // 0x58
	::ABC::UI::MonoLocalizedTmp* A874C1CD64EE1B4D; // 0x60
	::E3A1DB35EFB413FC<::B856C4B233969463*, ::System::Int32>* A27417E02579E7DF; // 0x68

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB8F36411E906335_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void BFCEE111278C4278(::System::Collections::Generic::List_1<::System::Int32>* F7E4E2D37F62295A, ::UnityEngine::Transform* EFE497ABF6BF98D8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AB8F36411E906335_BFCEE111278C4278_OFFSET))(this, F7E4E2D37F62295A, EFE497ABF6BF98D8);
	}

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + AB8F36411E906335__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}
};
