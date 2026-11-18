#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PCNJIFBMMIG_KJBEJHALAGO;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCNJIFBMMIG_MAACIAMALBA_CDEOLCJBKLP_OFFSET UNITYSDK_OFFSET(0x1A7E50E0)
#define PCNJIFBMMIG_MAACIAMALBA_DNLCCEDAMDN_OFFSET UNITYSDK_OFFSET(0x1A7E52E0)
#define PCNJIFBMMIG_MAACIAMALBA_KJCKNAFIANH_OFFSET UNITYSDK_OFFSET(0x1A7E5160)
#define PCNJIFBMMIG_MAACIAMALBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E4F60)

inline static constexpr unsigned int PCNJIFBMMIG_MAACIAMALBA_TypeDefinitionIndex = 92053;

class PCNJIFBMMIG_MAACIAMALBA : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* JIBAHJEJKLL; // 0x10
	::System::Single KKAMDFNMMJH; // 0x18

	::System::Void _ctor(::System::Single KKAMDFNMMJH, ::System::Int32 JBGLCAFPGHK, ::System::Int32 KMKBJKOEBMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PCNJIFBMMIG_MAACIAMALBA__CTOR_OFFSET))(this, KKAMDFNMMJH, JBGLCAFPGHK, KMKBJKOEBMF);
	}

	::PCNJIFBMMIG_KJBEJHALAGO* CDEOLCJBKLP(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::PCNJIFBMMIG_KJBEJHALAGO*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PCNJIFBMMIG_MAACIAMALBA_CDEOLCJBKLP_OFFSET))(this, OHOGDOMNHNK);
	}

	::System::Void KJCKNAFIANH(::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*))((::PBYTE)hIl2Cpp + PCNJIFBMMIG_MAACIAMALBA_KJCKNAFIANH_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void DNLCCEDAMDN(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Collections::Generic::List_1<::System::Object*>* BCFAHBAJLMI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PCNJIFBMMIG_MAACIAMALBA_DNLCCEDAMDN_OFFSET))(this, OHOGDOMNHNK, CFJFMMGPGKE, BCFAHBAJLMI);
	}
};
