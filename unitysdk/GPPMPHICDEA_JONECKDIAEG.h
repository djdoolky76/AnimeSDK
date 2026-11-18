#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }

#define GPPMPHICDEA_JONECKDIAEG_CPBDLOEPPFF_OFFSET UNITYSDK_OFFSET(0x16F1AA30)
#define GPPMPHICDEA_JONECKDIAEG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1AA20)

inline static constexpr unsigned int GPPMPHICDEA_JONECKDIAEG_TypeDefinitionIndex = 42638;

class GPPMPHICDEA_JONECKDIAEG : public ::System::Object
{
public:
	::System::Action_2<::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle>* NKIFJCDNCFI; // 0x10
	::UnityEngine::Sprite* FPNKAGADALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JONECKDIAEG__CTOR_OFFSET))(this);
	}

	::System::Void CPBDLOEPPFF(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JONECKDIAEG_CPBDLOEPPFF_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}
};
