#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFBLJCEKNFI.h"
#include "unitysdk/LKCONBKNAKH.h"
#include "unitysdk/System/Object.h"

class KIAEEMJLCJA;
namespace System { template <typename T> class Action_1; }

#define BCFFCKPJKON__CTOR_OFFSET UNITYSDK_OFFSET(0x143CBFC0)

inline static constexpr unsigned int BCFFCKPJKON_TypeDefinitionIndex = 75467;

class BCFFCKPJKON : public ::System::Object
{
public:
	::KIAEEMJLCJA* JFGMHJOCHGB; // 0x10
	::System::Action_1<::BCFFCKPJKON*>* PPKIMHMCKIG; // 0x18
	::CFBLJCEKNFI HKBMMCCHPMK; // 0x20
	::LKCONBKNAKH EFLLCMEOBBE; // 0x24
	::System::Int32 GEPABHJBIAH; // 0x28
	::System::Boolean HBNOMPPPDEH; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Int32 JAEANKPKEEI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFFCKPJKON__CTOR_OFFSET))(this);
	}
};
