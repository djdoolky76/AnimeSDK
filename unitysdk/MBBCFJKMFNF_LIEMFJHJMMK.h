#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class MBBCFJKMFNF;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }

#define MBBCFJKMFNF_LIEMFJHJMMK_CPBDLOEPPFF_OFFSET UNITYSDK_OFFSET(0x151BA740)
#define MBBCFJKMFNF_LIEMFJHJMMK_DBCLNFHKPFK_OFFSET UNITYSDK_OFFSET(0x151BA820)
#define MBBCFJKMFNF_LIEMFJHJMMK__CTOR_OFFSET UNITYSDK_OFFSET(0x151BA730)

inline static constexpr unsigned int MBBCFJKMFNF_LIEMFJHJMMK_TypeDefinitionIndex = 73975;

class MBBCFJKMFNF_LIEMFJHJMMK : public ::System::Object
{
public:
	::MBBCFJKMFNF* KLHPEBKNIFB; // 0x10
	::System::Action_1<::Foundation::AssetRequestHandle>* NKIFJCDNCFI; // 0x18
	::System::Action_2<::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle>* FBNAOKBGHJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_LIEMFJHJMMK__CTOR_OFFSET))(this);
	}

	::System::Void CPBDLOEPPFF(::UnityEngine::Sprite* FPNKAGADALJ, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_LIEMFJHJMMK_CPBDLOEPPFF_OFFSET))(this, FPNKAGADALJ, PHHDHIBOCKA);
	}

	::System::Void DBCLNFHKPFK(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_LIEMFJHJMMK_DBCLNFHKPFK_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}
};
