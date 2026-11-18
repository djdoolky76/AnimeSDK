#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJLJMAPKEHG;
namespace System { class Action; }

#define PJLJMAPKEHG_LNJHIHPDIJF_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19DDF790)
#define PJLJMAPKEHG_LNJHIHPDIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDF780)

inline static constexpr unsigned int PJLJMAPKEHG_LNJHIHPDIJF_TypeDefinitionIndex = 15325;

class PJLJMAPKEHG_LNJHIHPDIJF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::PJLJMAPKEHG* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_LNJHIHPDIJF__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_LNJHIHPDIJF_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
