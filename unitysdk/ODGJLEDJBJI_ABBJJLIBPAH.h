#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODGJLEDJBJI;
namespace System { template <typename T1, typename T2> class Action_2; }

#define ODGJLEDJBJI_ABBJJLIBPAH_BCLCEJKJEIP_OFFSET UNITYSDK_OFFSET(0x15F5C250)
#define ODGJLEDJBJI_ABBJJLIBPAH_KEIOGFPOBJC_OFFSET UNITYSDK_OFFSET(0x15F5C420)
#define ODGJLEDJBJI_ABBJJLIBPAH__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5C240)

inline static constexpr unsigned int ODGJLEDJBJI_ABBJJLIBPAH_TypeDefinitionIndex = 73479;

class ODGJLEDJBJI_ABBJJLIBPAH : public ::System::Object
{
public:
	::ODGJLEDJBJI* KLHPEBKNIFB; // 0x10
	::System::Action_2<::System::Boolean, ::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_ABBJJLIBPAH__CTOR_OFFSET))(this);
	}

	::System::Void BCLCEJKJEIP(::System::UInt64 JGFGBMHHGFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_ABBJJLIBPAH_BCLCEJKJEIP_OFFSET))(this, JGFGBMHHGFA);
	}

	::System::Void KEIOGFPOBJC(::System::Int32 DJCNCELJPOM, ::System::Int32 EOEGKCLDBBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_ABBJJLIBPAH_KEIOGFPOBJC_OFFSET))(this, DJCNCELJPOM, EOEGKCLDBBC);
	}
};
