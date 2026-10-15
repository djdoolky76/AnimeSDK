#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingMatchUIShowType.h"
#include "unitysdk/System/Object.h"
class HCLBAOIGOJI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEEPDOJLPFN_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x15EF5050)
#define IEEPDOJLPFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF53B0)
#define IEEPDOJLPFN_LIEJEAGAHAM_OFFSET UNITYSDK_OFFSET(0x15EF5110)

inline static constexpr unsigned int IEEPDOJLPFN_TypeDefinitionIndex = 81912;

	class IEEPDOJLPFN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::B51RacingMatchUIShowType, ::HCLBAOIGOJI*>* IOEFEFMMKFP; // 0x10
		::RPG::Client::B51Racing::B51RacingMatchUIShowType HBDGFLPGFJE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEPDOJLPFN_CTOR_OFFSET))(this);
		}

		::System::Void BKJGMFOKKKN(::RPG::Client::B51Racing::B51RacingMatchUIShowType a1, ::HCLBAOIGOJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingMatchUIShowType, ::HCLBAOIGOJI*))((::PBYTE)hIl2Cpp + IEEPDOJLPFN_BKJGMFOKKKN_OFFSET))(this, a1, a2);
		}

		::System::Void LIEJEAGAHAM(::RPG::Client::B51Racing::B51RacingMatchUIShowType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingMatchUIShowType, ::System::Boolean))((::PBYTE)hIl2Cpp + IEEPDOJLPFN_LIEJEAGAHAM_OFFSET))(this, a1, a2);
		}

	};
