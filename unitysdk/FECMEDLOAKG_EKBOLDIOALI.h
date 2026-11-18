#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FECMEDLOAKG;
namespace System { class Action; }

#define FECMEDLOAKG_EKBOLDIOALI_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19C1CF20)
#define FECMEDLOAKG_EKBOLDIOALI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1CF10)

inline static constexpr unsigned int FECMEDLOAKG_EKBOLDIOALI_TypeDefinitionIndex = 16646;

class FECMEDLOAKG_EKBOLDIOALI : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::FECMEDLOAKG* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECMEDLOAKG_EKBOLDIOALI__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FECMEDLOAKG_EKBOLDIOALI_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
