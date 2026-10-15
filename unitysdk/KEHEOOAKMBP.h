#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMNEKOLMGEM.h"
#include "unitysdk/System/Object.h"
class GBDODOMIMIF;
class NOBCAKJMGPH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KEHEOOAKMBP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB373B20)
#define KEHEOOAKMBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB373C70)
#define KEHEOOAKMBP_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xB373B00)
#define KEHEOOAKMBP_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xB373B10)

inline static constexpr unsigned int KEHEOOAKMBP_TypeDefinitionIndex = 62739;

	class KEHEOOAKMBP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::LMNEKOLMGEM, ::GBDODOMIMIF*>* HPHMLKJONAM; // 0x10
		::NOBCAKJMGPH* _Factory_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHEOOAKMBP_CTOR_OFFSET))(this);
		}

		::NOBCAKJMGPH* get_Factory()
		{
			return ((::NOBCAKJMGPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHEOOAKMBP_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::NOBCAKJMGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOBCAKJMGPH*))((::PBYTE)hIl2Cpp + KEHEOOAKMBP_SET_FACTORY_OFFSET))(this, a1);
		}

		::GBDODOMIMIF* ACMKLFOMPFC(::LMNEKOLMGEM a1)
		{
			return ((::GBDODOMIMIF*(*)(::PVOID, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + KEHEOOAKMBP_ACMKLFOMPFC_OFFSET))(this, a1);
		}

	};
