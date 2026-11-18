#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FAKGPLKDCFE;
namespace System { class Action; }

#define FAKGPLKDCFE_KIFFOKFONGH_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x187B30E0)
#define FAKGPLKDCFE_KIFFOKFONGH__CTOR_OFFSET UNITYSDK_OFFSET(0x187B30D0)

inline static constexpr unsigned int FAKGPLKDCFE_KIFFOKFONGH_TypeDefinitionIndex = 14472;

class FAKGPLKDCFE_KIFFOKFONGH : public ::System::Object
{
public:
	::FAKGPLKDCFE* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_KIFFOKFONGH__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_KIFFOKFONGH_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
