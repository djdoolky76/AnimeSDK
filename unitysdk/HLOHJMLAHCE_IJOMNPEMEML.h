#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLOHJMLAHCE;
namespace System { class Action; }

#define HLOHJMLAHCE_IJOMNPEMEML_GAMHFEHDPOI_OFFSET UNITYSDK_OFFSET(0x15B6AC30)
#define HLOHJMLAHCE_IJOMNPEMEML_JEHJIPJOMJN_OFFSET UNITYSDK_OFFSET(0x15B6AB20)
#define HLOHJMLAHCE_IJOMNPEMEML_PKIDHMLHOBO_OFFSET UNITYSDK_OFFSET(0x15B6AE60)
#define HLOHJMLAHCE_IJOMNPEMEML__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6AB10)

inline static constexpr unsigned int HLOHJMLAHCE_IJOMNPEMEML_TypeDefinitionIndex = 82521;

class HLOHJMLAHCE_IJOMNPEMEML : public ::System::Object
{
public:
	::HLOHJMLAHCE* KLHPEBKNIFB; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::System::Int32 GALMEKPFIKN; // 0x20
	::System::Int32 EJKHEBIEKDE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_IJOMNPEMEML__CTOR_OFFSET))(this);
	}

	::System::Void JEHJIPJOMJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_IJOMNPEMEML_JEHJIPJOMJN_OFFSET))(this);
	}

	::System::Void GAMHFEHDPOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_IJOMNPEMEML_GAMHFEHDPOI_OFFSET))(this);
	}

	::System::Void PKIDHMLHOBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_IJOMNPEMEML_PKIDHMLHOBO_OFFSET))(this);
	}
};
