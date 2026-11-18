#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DDAHELMGEJN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x193F9390)
#define DDAHELMGEJN_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x193F92E0)
#define DDAHELMGEJN_FEBGNABPNFE_OFFSET UNITYSDK_OFFSET(0x193F93E0)
#define DDAHELMGEJN_IOCHKDGAJBG_OFFSET UNITYSDK_OFFSET(0x193F9100)
#define DDAHELMGEJN_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x193F93D0)
#define DDAHELMGEJN_MHAKKPIJFJO_OFFSET UNITYSDK_OFFSET(0x193F9270)
#define DDAHELMGEJN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x193F9070)
#define DDAHELMGEJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193F8D10)
#define DDAHELMGEJN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193F8D00)
#define DDAHELMGEJN__CTOR_OFFSET UNITYSDK_OFFSET(0x193F8C90)

inline static constexpr unsigned int DDAHELMGEJN_TypeDefinitionIndex = 86056;

class DDAHELMGEJN : public ::System::Object
{
public:
	::MoleMole::Vector2Int JPJJJFCMGLL; // 0x10
	::MoleMole::Vector2Int ILOJFPNKJII; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAHELMGEJN__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::MoleMole::Vector2Int ALJKGKBJIJG, ::MoleMole::Vector2Int GOIHPCNHAOK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + DDAHELMGEJN__CTOR_1_OFFSET))(this, ALJKGKBJIJG, GOIHPCNHAOK);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAHELMGEJN_TOSTRING_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAHELMGEJN_NPOLNFDBOOD_OFFSET))(this);
	}

	::DDAHELMGEJN* IOCHKDGAJBG(::System::Single CLMNLPKFBFA, ::System::Int32 BOGPAHGJOJK)
	{
		return ((::DDAHELMGEJN*(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DDAHELMGEJN_IOCHKDGAJBG_OFFSET))(this, CLMNLPKFBFA, BOGPAHGJOJK);
	}

	::MoleMole::Vector2Int FCICGEALCFA()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAHELMGEJN_FCICGEALCFA_OFFSET))(this);
	}

	::MoleMole::Vector2Int MHAKKPIJFJO()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAHELMGEJN_MHAKKPIJFJO_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAHELMGEJN_DPIHOJBBGLA_OFFSET))(this);
	}

	::MoleMole::Vector2Int LDIENHMALPL()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAHELMGEJN_LDIENHMALPL_OFFSET))(this);
	}

	::System::Boolean FEBGNABPNFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAHELMGEJN_FEBGNABPNFE_OFFSET))(this);
	}
};
