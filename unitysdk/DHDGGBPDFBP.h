#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHDGGBPDFBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA297B0)

inline static constexpr unsigned int DHDGGBPDFBP_TypeDefinitionIndex = 42252;

	class DHDGGBPDFBP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* OMFAIIDBJLB; // 0x10
		::System::Single DDFDLHBNPNL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDGGBPDFBP_CTOR_OFFSET))(this);
		}

	};
