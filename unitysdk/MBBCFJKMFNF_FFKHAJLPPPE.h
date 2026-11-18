#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class MBBCFJKMFNF;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }

#define MBBCFJKMFNF_FFKHAJLPPPE_CPBDLOEPPFF_OFFSET UNITYSDK_OFFSET(0x15916F10)
#define MBBCFJKMFNF_FFKHAJLPPPE_DBCLNFHKPFK_OFFSET UNITYSDK_OFFSET(0x15916E80)
#define MBBCFJKMFNF_FFKHAJLPPPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15916E70)

inline static constexpr unsigned int MBBCFJKMFNF_FFKHAJLPPPE_TypeDefinitionIndex = 73977;

class MBBCFJKMFNF_FFKHAJLPPPE : public ::System::Object
{
public:
	::MBBCFJKMFNF* KLHPEBKNIFB; // 0x10
	::System::Action_2<::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle>* FBNAOKBGHJJ; // 0x18
	::System::Action_1<::UnityEngine::Sprite*>* NKIFJCDNCFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_FFKHAJLPPPE__CTOR_OFFSET))(this);
	}

	::System::Void DBCLNFHKPFK(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_FFKHAJLPPPE_DBCLNFHKPFK_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}

	::System::Void CPBDLOEPPFF(::UnityEngine::Sprite* FPNKAGADALJ, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_FFKHAJLPPPE_CPBDLOEPPFF_OFFSET))(this, FPNKAGADALJ, PHHDHIBOCKA);
	}
};
