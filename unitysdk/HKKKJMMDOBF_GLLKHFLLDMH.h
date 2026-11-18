#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HKKKJMMDOBF;
namespace System { class Action; }

#define HKKKJMMDOBF_GLLKHFLLDMH_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B8801A0)
#define HKKKJMMDOBF_GLLKHFLLDMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B880190)

inline static constexpr unsigned int HKKKJMMDOBF_GLLKHFLLDMH_TypeDefinitionIndex = 15376;

class HKKKJMMDOBF_GLLKHFLLDMH : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::HKKKJMMDOBF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_GLLKHFLLDMH__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HKKKJMMDOBF_GLLKHFLLDMH_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
