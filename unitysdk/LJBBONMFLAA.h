#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJCKPHKIMP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJBBONMFLAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB6E02D0)

inline static constexpr unsigned int LJBBONMFLAA_TypeDefinitionIndex = 73972;

	class LJBBONMFLAA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BMJCKPHKIMP*>* LPABMIPMMLH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::BMJCKPHKIMP*>* GENOAPBDPCH; // 0x18
		::System::Int32 AMFJIHAABBP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBBONMFLAA_CTOR_OFFSET))(this);
		}

	};
