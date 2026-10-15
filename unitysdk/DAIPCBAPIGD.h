#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDAPGOKNGMP.h"
#include "unitysdk/System/Object.h"
class KPIMOBENENM;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAIPCBAPIGD_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBA460)

inline static constexpr unsigned int DAIPCBAPIGD_TypeDefinitionIndex = 62094;

	class DAIPCBAPIGD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KPIMOBENENM*>* MMBCBDOKGGL; // 0x10
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::IDAPGOKNGMP>* GNBBIICMGEN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIPCBAPIGD_CTOR_OFFSET))(this);
		}

	};
