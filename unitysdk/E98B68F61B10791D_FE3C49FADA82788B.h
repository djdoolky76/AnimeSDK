#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A8EA7CD532ED7AF9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E98B68F61B10791D_FE3C49FADA82788B_EAFCB25B197ED756_OFFSET UNITYSDK_OFFSET(0x1931510)
#define E98B68F61B10791D_FE3C49FADA82788B__CTOR_OFFSET UNITYSDK_OFFSET(0x19317A0)

inline static constexpr unsigned int E98B68F61B10791D_FE3C49FADA82788B_TypeDefinitionIndex = 1574;

class E98B68F61B10791D_FE3C49FADA82788B : public ::System::Object
{
public:
	::System::UInt32 F27953C0DBFB26A8; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::A8EA7CD532ED7AF9*>* B75E7140427CBB09; // 0x18

	::System::Void EAFCB25B197ED756()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E98B68F61B10791D_FE3C49FADA82788B_EAFCB25B197ED756_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E98B68F61B10791D_FE3C49FADA82788B__CTOR_OFFSET))(this);
	}
};
