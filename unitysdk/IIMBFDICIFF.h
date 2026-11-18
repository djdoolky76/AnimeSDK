#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

class OKHOJCKHDAJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIMBFDICIFF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16F70070)
#define IIMBFDICIFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F70010)

inline static constexpr unsigned int IIMBFDICIFF_TypeDefinitionIndex = 71027;

class IIMBFDICIFF : public ::System::EventArgs
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* DJLOKMMLFJC; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* DOEGACMLCGI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IIMBFDICIFF__CTOR_OFFSET))(this, DOEGACMLCGI);
	}

	::OKHOJCKHDAJ* DGNAAPGKIPL()
	{
		return ((::OKHOJCKHDAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMBFDICIFF_DGNAAPGKIPL_OFFSET))(this);
	}
};
