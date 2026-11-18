#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNHPNNENFLI_EPPMHMFCOGM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class PNHPNNENFLI;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }

#define PNHPNNENFLI_KLBDGLKJABE_KDOCMMBKDIF_OFFSET UNITYSDK_OFFSET(0x1D9D6E40)
#define PNHPNNENFLI_KLBDGLKJABE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D6E30)

inline static constexpr unsigned int PNHPNNENFLI_KLBDGLKJABE_TypeDefinitionIndex = 67265;

class PNHPNNENFLI_KLBDGLKJABE : public ::System::Object
{
public:
	::PNHPNNENFLI* KLHPEBKNIFB; // 0x10
	::System::Action_2<::System::Boolean, ::System::Object*>* EJGDHCIBCJH; // 0x18
	::PNHPNNENFLI_EPPMHMFCOGM EBJICBIMOHN; // 0x20
	::System::Int32 GAFEIIKPNPJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHPNNENFLI_KLBDGLKJABE__CTOR_OFFSET))(this);
	}

	::System::Void KDOCMMBKDIF(::UnityEngine::Object* LAPHHAGMPIJ, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + PNHPNNENFLI_KLBDGLKJABE_KDOCMMBKDIF_OFFSET))(this, LAPHHAGMPIJ, PHHDHIBOCKA);
	}
};
