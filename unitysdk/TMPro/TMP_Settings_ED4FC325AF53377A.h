#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define TMPRO_TMP_SETTINGS_ED4FC325AF53377A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Settings_ED4FC325AF53377A_TypeDefinitionIndex = 18201;

	class TMP_Settings_ED4FC325AF53377A : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Char>* E6E478D718656371; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Char>* B2A72EA06629259C; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_ED4FC325AF53377A__CTOR_OFFSET))(this);
		}
	};
}
