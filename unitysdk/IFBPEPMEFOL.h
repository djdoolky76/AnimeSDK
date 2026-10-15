#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFBPEPMEFOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C66BA80)

inline static constexpr unsigned int IFBPEPMEFOL_TypeDefinitionIndex = 36454;

	class IFBPEPMEFOL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* PCIFMEDMLEF; // 0x10
		::System::UInt32 LLHMOFGFFNO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBPEPMEFOL_CTOR_OFFSET))(this);
		}

	};
