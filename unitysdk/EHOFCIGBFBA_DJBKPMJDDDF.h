#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHOFCIGBFBA;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define EHOFCIGBFBA_DJBKPMJDDDF_NNEDLCNDCEL_OFFSET UNITYSDK_OFFSET(0x154B2160)
#define EHOFCIGBFBA_DJBKPMJDDDF_OFCMGPCBKEG_OFFSET UNITYSDK_OFFSET(0x154B1D10)
#define EHOFCIGBFBA_DJBKPMJDDDF__CTOR_OFFSET UNITYSDK_OFFSET(0x154B1D00)

inline static constexpr unsigned int EHOFCIGBFBA_DJBKPMJDDDF_TypeDefinitionIndex = 52224;

class EHOFCIGBFBA_DJBKPMJDDDF : public ::System::Object
{
public:
	::EHOFCIGBFBA* KLHPEBKNIFB; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::UnityEngine::GameObject* AKHJFOBABBJ; // 0x20
	::System::Boolean HFJILCMCDAP; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 MIOIGCOBJGP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_DJBKPMJDDDF__CTOR_OFFSET))(this);
	}

	::System::Void OFCMGPCBKEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_DJBKPMJDDDF_OFCMGPCBKEG_OFFSET))(this);
	}

	::System::Void NNEDLCNDCEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_DJBKPMJDDDF_NNEDLCNDCEL_OFFSET))(this);
	}
};
