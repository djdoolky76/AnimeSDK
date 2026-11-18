#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EGKEOOLLFGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA0330)

inline static constexpr unsigned int EGKEOOLLFGO_TypeDefinitionIndex = 28704;

class EGKEOOLLFGO : public ::System::Object
{
public:
	::Il2CppArray<::EGKEOOLLFGO*>* IINJGFFMMEH; // 0x10
	::Il2CppArray<::System::Int32>* BCJKKHOHAPA; // 0x18
	::System::Int32 GMOGHFDGEMM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKEOOLLFGO__CTOR_OFFSET))(this);
	}
};
