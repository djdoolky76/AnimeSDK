#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEIMJFKNHLF.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPADMIKHMMC;
namespace MoleMole { class MonoRenderHandler; }
namespace UnityEngine { class Renderer; }

#define MMCBNPJAFNL_OFIPPFOJBCM_OFFSET UNITYSDK_OFFSET(0x17D52280)
#define MMCBNPJAFNL__CTOR_OFFSET UNITYSDK_OFFSET(0x17D52270)

inline static constexpr unsigned int MMCBNPJAFNL_TypeDefinitionIndex = 42210;

class MMCBNPJAFNL : public ::System::Object
{
public:
	::BPADMIKHMMC* HMMMOCJAEOA; // 0x10
	::Il2CppArray<::UnityEngine::Renderer*>* DBIJHBIADDH; // 0x18
	::MoleMole::MonoRenderHandler* PLJJFDBNAIN; // 0x20
	::MoleMole::CharacterCameraDitheringData EICCKEFPLEJ; // 0x28
	::System::Boolean NNMIAOMGAAO; // 0x70
	::System::Boolean COGLEANIPPJ; // 0x71
	::System::Boolean OJCCICBPECO; // 0x72
	::System::Byte _padding0[0x1];
	::System::Single JEIKLNPPPHP; // 0x74
	::System::Single NBEPIJOANKG; // 0x78
	::UnityEngine::Vector3 CKPGOKHECCH; // 0x7C
	::EEIMJFKNHLF BEBOIJHHFEN; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCBNPJAFNL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFIPPFOJBCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCBNPJAFNL_OFIPPFOJBCM_OFFSET))(this);
	}
};
