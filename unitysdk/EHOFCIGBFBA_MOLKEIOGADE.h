#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA;
class EHOFCIGBFBA_MDAKBGJNOOB;

#define EHOFCIGBFBA_MOLKEIOGADE_DGLLICGIELP_OFFSET UNITYSDK_OFFSET(0x169986E0)
#define EHOFCIGBFBA_MOLKEIOGADE_MJOAHDGBJOP_OFFSET UNITYSDK_OFFSET(0x16998990)
#define EHOFCIGBFBA_MOLKEIOGADE__CTOR_OFFSET UNITYSDK_OFFSET(0x169986D0)

inline static constexpr unsigned int EHOFCIGBFBA_MOLKEIOGADE_TypeDefinitionIndex = 52223;

class EHOFCIGBFBA_MOLKEIOGADE : public ::System::Object
{
public:
	::EHOFCIGBFBA_MDAKBGJNOOB* FGBNBFHOKAA; // 0x10
	::DMHOLJNNCJA* LJLBJLEKGBN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_MOLKEIOGADE__CTOR_OFFSET))(this);
	}

	::System::Void DGLLICGIELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_MOLKEIOGADE_DGLLICGIELP_OFFSET))(this);
	}

	::System::Void MJOAHDGBJOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_MOLKEIOGADE_MJOAHDGBJOP_OFFSET))(this);
	}
};
