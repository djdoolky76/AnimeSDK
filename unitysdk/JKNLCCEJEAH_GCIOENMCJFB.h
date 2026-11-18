#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDOFNLJMHAM;
class JKNLCCEJEAH;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKNLCCEJEAH_GCIOENMCJFB_MKLHEHJFKMC_OFFSET UNITYSDK_OFFSET(0x1C365E40)
#define JKNLCCEJEAH_GCIOENMCJFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C365E30)

inline static constexpr unsigned int JKNLCCEJEAH_GCIOENMCJFB_TypeDefinitionIndex = 65814;

class JKNLCCEJEAH_GCIOENMCJFB : public ::System::Object
{
public:
	::JKNLCCEJEAH* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::BDOFNLJMHAM*>* HGOFCLIHDBM; // 0x18
	::System::Collections::Generic::List_1<::BDOFNLJMHAM*>* GMOJGIPFFNP; // 0x20
	::System::Action_1<::System::Int32>* EJGDHCIBCJH; // 0x28
	::System::UInt32 AGCMMKOIPCB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNLCCEJEAH_GCIOENMCJFB__CTOR_OFFSET))(this);
	}

	::System::Void MKLHEHJFKMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNLCCEJEAH_GCIOENMCJFB_MKLHEHJFKMC_OFFSET))(this);
	}
};
