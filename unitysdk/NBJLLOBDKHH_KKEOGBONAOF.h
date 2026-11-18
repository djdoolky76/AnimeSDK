#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EKFPPMNCGPE;
class MFBKLAENAEC;
namespace System { template <typename T> class Func_1; }

#define NBJLLOBDKHH_KKEOGBONAOF_EGKPCNKCPEO_OFFSET UNITYSDK_OFFSET(0x1157D3C0)
#define NBJLLOBDKHH_KKEOGBONAOF_NAPJPBFKLKI_OFFSET UNITYSDK_OFFSET(0x1157CE00)
#define NBJLLOBDKHH_KKEOGBONAOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1157CDF0)

inline static constexpr unsigned int NBJLLOBDKHH_KKEOGBONAOF_TypeDefinitionIndex = 46241;

class NBJLLOBDKHH_KKEOGBONAOF : public ::System::Object
{
public:
	::System::Func_1<::System::Single>* AKHIFADKLJF; // 0x10
	::MFBKLAENAEC* PCKBDAGDPEH; // 0x18
	::EKFPPMNCGPE* FAIPFCNDLDE; // 0x20
	::UnityEngine::Vector3 KLILFBFAELK; // 0x28
	::System::Boolean EGGAALCPEPL; // 0x34
	::System::Byte _padding0[0x3];
	::System::Single HKKEELLMAFC; // 0x38
	::System::Single BALJGFFCFBN; // 0x3C
	::System::Single FKBIBLDMPMI; // 0x40
	::UnityEngine::Quaternion AOIFOJKGGFP; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KKEOGBONAOF__CTOR_OFFSET))(this);
	}

	::System::Boolean NAPJPBFKLKI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KKEOGBONAOF_NAPJPBFKLKI_OFFSET))(this);
	}

	::System::Void EGKPCNKCPEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KKEOGBONAOF_EGKPCNKCPEO_OFFSET))(this);
	}
};
