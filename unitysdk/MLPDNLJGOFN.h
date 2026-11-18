#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLJBMLADALL.h"
#include "unitysdk/GMCNNDIFCBJ.h"
#include "unitysdk/ILGPPMGBHIJ.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MLPDNLJGOFN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7FECF0)

inline static constexpr unsigned int MLPDNLJGOFN_TypeDefinitionIndex = 46225;

struct alignas(4) MLPDNLJGOFN
{
	::System::Single MPOKJHJIMCG; // 0x10
	::UnityEngine::Vector3 BKCBLHNKEHC; // 0x14
	::UnityEngine::Vector3 PGLEDCFKKGA; // 0x20
	::UnityEngine::Vector3 LMDLFABPKAJ; // 0x2C
	::System::Single FHLNDCGACHM; // 0x38
	::System::Single DBHODKFIKHK; // 0x3C
	::System::Single LLBEKEFONPC; // 0x40
	::System::Single JCDDAAKBFCJ; // 0x44
	::System::Single CJEEMCEGFFK; // 0x48
	::ILGPPMGBHIJ EBOPKHFFPCO; // 0x4C
	::UnityEngine::Vector3 MDMGOKACMGC; // 0x7C
	::GMCNNDIFCBJ JBPEBOBNMLD; // 0x88
	::FLJBMLADALL OCOJFKMOKMK; // 0xA8
	::UnityEngine::Vector2 CBEMCANOEPD; // 0xAC
	::System::Boolean MMILGDDOGBM; // 0xB4
	::System::Boolean PGHAJOMNDDJ; // 0xB5
	::System::Byte _padding0[0x2];
	::System::Single IMFAIJBOGEH; // 0xB8

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPDNLJGOFN_NPOLNFDBOOD_OFFSET))(this);
	}
};
