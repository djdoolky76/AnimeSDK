#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FC1317B43034A2CE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFA79908EA870FE6_E7A6A1557899760E_OFFSET UNITYSDK_OFFSET(0x247C480)
#define AFA79908EA870FE6__CTOR_OFFSET UNITYSDK_OFFSET(0x247C520)

inline static constexpr unsigned int AFA79908EA870FE6_TypeDefinitionIndex = 4546;

class AFA79908EA870FE6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FC1317B43034A2CE*>* ABC169B78FA1800A; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFA79908EA870FE6__CTOR_OFFSET))(this);
	}

	::System::Void E7A6A1557899760E(::FC1317B43034A2CE* E8A56F54C6C4D622)
	{
		return ((::System::Void(*)(::PVOID, ::FC1317B43034A2CE*))((::PBYTE)hIl2Cpp + AFA79908EA870FE6_E7A6A1557899760E_OFFSET))(this, E8A56F54C6C4D622);
	}
};
