#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMJMFHEIOKF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFFOLJBCJOL__CTOR_OFFSET UNITYSDK_OFFSET(0x150C2F90)

inline static constexpr unsigned int PFFOLJBCJOL_TypeDefinitionIndex = 52616;

class PFFOLJBCJOL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FMJMFHEIOKF*>* KMCIHNHIBEC; // 0x10
	::System::Int32 HLJJPHANKKM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFOLJBCJOL__CTOR_OFFSET))(this);
	}
};
