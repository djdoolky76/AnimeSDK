#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMEEPOAOGOP;
namespace System { class Action; }

#define BMEEPOAOGOP_DHEFBJAJOCI_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x15731060)
#define BMEEPOAOGOP_DHEFBJAJOCI__CTOR_OFFSET UNITYSDK_OFFSET(0x15731050)

inline static constexpr unsigned int BMEEPOAOGOP_DHEFBJAJOCI_TypeDefinitionIndex = 15301;

class BMEEPOAOGOP_DHEFBJAJOCI : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::BMEEPOAOGOP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_DHEFBJAJOCI__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BMEEPOAOGOP_DHEFBJAJOCI_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
