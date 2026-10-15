#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFEOGBPMBFB.h"
#include "unitysdk/EMIOLHAIOIG.h"
#include "unitysdk/GCACCBNIGKA.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define FABEHFILGBH_ELOBECJCAHO_OFFSET UNITYSDK_OFFSET(0x156584E0)
#define FABEHFILGBH_MNPFDFDBMNG_OFFSET UNITYSDK_OFFSET(0x15657B40)

inline static constexpr unsigned int FABEHFILGBH_TypeDefinitionIndex = 62167;

	class FABEHFILGBH : public ::System::Object
	{
	public:
		static ::System::Boolean MNPFDFDBMNG(::System::Collections::Generic::IList_1<::BFEOGBPMBFB>* a1, ::GCACCBNIGKA a2, ::EMIOLHAIOIG a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::BFEOGBPMBFB>*, ::GCACCBNIGKA, ::EMIOLHAIOIG))((::PBYTE)hIl2Cpp + FABEHFILGBH_MNPFDFDBMNG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ELOBECJCAHO(::EMIOLHAIOIG a1)
		{
			return ((::System::Void(*)(::EMIOLHAIOIG))((::PBYTE)hIl2Cpp + FABEHFILGBH_ELOBECJCAHO_OFFSET))(a1);
		}

	};
