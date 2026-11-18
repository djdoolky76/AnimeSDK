#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LIJOIPMOMJD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIJOIPMOMJD_CJCCAPJLCBG_OADDMPENAFK_OFFSET UNITYSDK_OFFSET(0x15660C50)
#define LIJOIPMOMJD_CJCCAPJLCBG__CTOR_OFFSET UNITYSDK_OFFSET(0x15660C40)

inline static constexpr unsigned int LIJOIPMOMJD_CJCCAPJLCBG_TypeDefinitionIndex = 91361;

class LIJOIPMOMJD_CJCCAPJLCBG : public ::System::Object
{
public:
	::LIJOIPMOMJD* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DJLOKMMLFJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOIPMOMJD_CJCCAPJLCBG__CTOR_OFFSET))(this);
	}

	::System::Void OADDMPENAFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOIPMOMJD_CJCCAPJLCBG_OADDMPENAFK_OFFSET))(this);
	}
};
