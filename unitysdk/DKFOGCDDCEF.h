#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
class PCOMPBCHHKC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKFOGCDDCEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F5A20)

inline static constexpr unsigned int DKFOGCDDCEF_TypeDefinitionIndex = 36933;

	class DKFOGCDDCEF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PCOMPBCHHKC*>* MGNIOFFNIGH; // 0x10
		::System::DateTime CMIEOOODDIA; // 0x18
		::System::Int32 DAPKEKNHHMH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFOGCDDCEF_CTOR_OFFSET))(this);
		}

	};
