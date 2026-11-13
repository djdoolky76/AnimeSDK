#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EKICIHELMPH_CGGODKEJLIH_OFFSET UNITYSDK_OFFSET(0x1998FCA0)
#define EKICIHELMPH_CIIHDKBPMPC_OFFSET UNITYSDK_OFFSET(0x1998FD10)
#define EKICIHELMPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1998FFA0)
#define EKICIHELMPH_FBHHADINKMI_OFFSET UNITYSDK_OFFSET(0x1998FB40)
#define EKICIHELMPH_FDKLABDCPLA_OFFSET UNITYSDK_OFFSET(0x1998FC10)

inline static constexpr unsigned int EKICIHELMPH_TypeDefinitionIndex = 64069;

	class EKICIHELMPH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* PCIMJILIFOJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKICIHELMPH_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* FBHHADINKMI(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKICIHELMPH_FBHHADINKMI_OFFSET))(this, a1);
		}

		::System::Boolean CGGODKEJLIH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EKICIHELMPH_CGGODKEJLIH_OFFSET))(this, a1, a2);
		}

		::System::Void FDKLABDCPLA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKICIHELMPH_FDKLABDCPLA_OFFSET))(this, a1);
		}

		::System::Void CIIHDKBPMPC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKICIHELMPH_CIIHDKBPMPC_OFFSET))(this, a1);
		}

	};
