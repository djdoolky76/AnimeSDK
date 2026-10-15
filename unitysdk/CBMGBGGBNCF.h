#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJBDLEBCEKF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBMGBGGBNCF_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A8640)
#define CBMGBGGBNCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4A8510)

inline static constexpr unsigned int CBMGBGGBNCF_TypeDefinitionIndex = 57262;

	class CBMGBGGBNCF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BJBDLEBCEKF*>* JPCGMKGIAHD; // 0x10
		::System::Int32 EAJBNHGHPNM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMGBGGBNCF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMGBGGBNCF_DISPOSE_OFFSET))(this);
		}

	};
