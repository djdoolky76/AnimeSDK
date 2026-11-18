#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IIGDNOMEHHB;
namespace System { class Action; }

#define IIGDNOMEHHB_BKIAPADBLOE_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B625FA0)
#define IIGDNOMEHHB_BKIAPADBLOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B625F90)

inline static constexpr unsigned int IIGDNOMEHHB_BKIAPADBLOE_TypeDefinitionIndex = 14521;

class IIGDNOMEHHB_BKIAPADBLOE : public ::System::Object
{
public:
	::IIGDNOMEHHB* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_BKIAPADBLOE__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_BKIAPADBLOE_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
