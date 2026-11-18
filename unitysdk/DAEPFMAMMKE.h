#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DCFNDECCFMK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAEPFMAMMKE__CTOR_OFFSET UNITYSDK_OFFSET(0x123FE110)

inline static constexpr unsigned int DAEPFMAMMKE_TypeDefinitionIndex = 91158;

class DAEPFMAMMKE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::DCFNDECCFMK*>* NHCAPJBPGCC; // 0x10
	::System::Int32 KGNBLLMDIDE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEPFMAMMKE__CTOR_OFFSET))(this);
	}
};
