#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNFIIBMAMDO;
class ILOCAIBFJIJ;
namespace System { template <typename T> class Action_1; }

#define BNFIIBMAMDO_MMCCJODFEEK_BFCGKNEIBGA_OFFSET UNITYSDK_OFFSET(0x14EFF3C0)
#define BNFIIBMAMDO_MMCCJODFEEK__CTOR_OFFSET UNITYSDK_OFFSET(0x14EFF3B0)

inline static constexpr unsigned int BNFIIBMAMDO_MMCCJODFEEK_TypeDefinitionIndex = 80870;

class BNFIIBMAMDO_MMCCJODFEEK : public ::System::Object
{
public:
	::BNFIIBMAMDO* KLHPEBKNIFB; // 0x10
	::System::Action_1<::ILOCAIBFJIJ*>* NLDBMJLMDFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_MMCCJODFEEK__CTOR_OFFSET))(this);
	}

	::System::Void BFCGKNEIBGA(::System::Boolean EBFCACIEKBC, ::ILOCAIBFJIJ* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::ILOCAIBFJIJ*))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_MMCCJODFEEK_BFCGKNEIBGA_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};
