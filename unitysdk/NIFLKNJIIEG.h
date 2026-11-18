#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define NIFLKNJIIEG_FJACECCNFNL_OFFSET UNITYSDK_OFFSET(0x1AE22380)
#define NIFLKNJIIEG_IFJJJFCAHCC_OFFSET UNITYSDK_OFFSET(0x1AE22460)
#define NIFLKNJIIEG_NKBJBHFCAPL_OFFSET UNITYSDK_OFFSET(0x1AE224C0)
#define NIFLKNJIIEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE22370)

inline static constexpr unsigned int NIFLKNJIIEG_TypeDefinitionIndex = 80007;

class NIFLKNJIIEG : public ::System::Object
{
public:
	::UnityEngine::GameObject* APOFJIAOLKC; // 0x10
	::System::Boolean IFLDIKPIHOE; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single EOHEFPMLBLI; // 0x1C
	::System::UInt32 ACHBBPJIBIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFLKNJIIEG__CTOR_OFFSET))(this);
	}

	::System::Boolean FJACECCNFNL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFLKNJIIEG_FJACECCNFNL_OFFSET))(this);
	}

	::System::Void IFJJJFCAHCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFLKNJIIEG_IFJJJFCAHCC_OFFSET))(this);
	}

	::System::Void NKBJBHFCAPL(::System::UInt32 BIJIPJPJJPJ, ::UnityEngine::GameObject* EIIDOADGOIF, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 BFBELMDIAHI, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NIFLKNJIIEG_NKBJBHFCAPL_OFFSET))(this, BIJIPJPJJPJ, EIIDOADGOIF, OHOGDOMNHNK, BFBELMDIAHI, BFMMEICFNCD);
	}
};
