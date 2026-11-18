#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NGKAPHPDNMA;
namespace System { class Action; }

#define NGKAPHPDNMA_PNNGBPNABAH_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x18E1D650)
#define NGKAPHPDNMA_PNNGBPNABAH__CTOR_OFFSET UNITYSDK_OFFSET(0x18E1D640)

inline static constexpr unsigned int NGKAPHPDNMA_PNNGBPNABAH_TypeDefinitionIndex = 12070;

class NGKAPHPDNMA_PNNGBPNABAH : public ::System::Object
{
public:
	::NGKAPHPDNMA* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_PNNGBPNABAH__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_PNNGBPNABAH_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
