#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMEDECACFKM;
namespace System { class Action; }

#define CMEDECACFKM_DAMGEJGGNFO_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19F2F020)
#define CMEDECACFKM_DAMGEJGGNFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19F2F010)

inline static constexpr unsigned int CMEDECACFKM_DAMGEJGGNFO_TypeDefinitionIndex = 14272;

class CMEDECACFKM_DAMGEJGGNFO : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::CMEDECACFKM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDECACFKM_DAMGEJGGNFO__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CMEDECACFKM_DAMGEJGGNFO_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
