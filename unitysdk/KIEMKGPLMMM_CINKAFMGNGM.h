#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIEMKGPLMMM;
namespace System { class Action; }

#define KIEMKGPLMMM_CINKAFMGNGM_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B506580)
#define KIEMKGPLMMM_CINKAFMGNGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B506570)

inline static constexpr unsigned int KIEMKGPLMMM_CINKAFMGNGM_TypeDefinitionIndex = 10810;

class KIEMKGPLMMM_CINKAFMGNGM : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::KIEMKGPLMMM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_CINKAFMGNGM__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_CINKAFMGNGM_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
