#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JAJEEGCLDHN;
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define JAJEEGCLDHN_IHJINAIPNDB_GMBFNDPABDI_OFFSET UNITYSDK_OFFSET(0x16ABCFF0)
#define JAJEEGCLDHN_IHJINAIPNDB__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABCFE0)

inline static constexpr unsigned int JAJEEGCLDHN_IHJINAIPNDB_TypeDefinitionIndex = 91962;

class JAJEEGCLDHN_IHJINAIPNDB : public ::System::Object
{
public:
	::System::Func_1<::MoleMole::UIControllerContextBase*>* CPJDHCJPAJM; // 0x10
	::JAJEEGCLDHN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJEEGCLDHN_IHJINAIPNDB__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* GMBFNDPABDI()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJEEGCLDHN_IHJINAIPNDB_GMBFNDPABDI_OFFSET))(this);
	}
};
