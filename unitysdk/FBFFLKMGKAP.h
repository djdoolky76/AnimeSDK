#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMOLKGEPDDC;
class ODCELNBAEIB;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FBFFLKMGKAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1568C5E0)
#define FBFFLKMGKAP_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x1568BD70)
#define FBFFLKMGKAP_GEDCBGFENEI_OFFSET UNITYSDK_OFFSET(0x1568BE50)
#define FBFFLKMGKAP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1568C410)
#define FBFFLKMGKAP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1568BFE0)
#define FBFFLKMGKAP_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x1568C3B0)
#define FBFFLKMGKAP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1568BE00)

inline static constexpr unsigned int FBFFLKMGKAP_TypeDefinitionIndex = 79094;

	class FBFFLKMGKAP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::HMOLKGEPDDC*>* KAIBLMKINBP; // 0x10
		::ODCELNBAEIB* HOADGOKCPDG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFFLKMGKAP_CTOR_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::HMOLKGEPDDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMOLKGEPDDC*))((::PBYTE)hIl2Cpp + FBFFLKMGKAP_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + FBFFLKMGKAP_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBFFLKMGKAP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFFLKMGKAP_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFFLKMGKAP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GEDCBGFENEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFFLKMGKAP_GEDCBGFENEI_OFFSET))(this);
		}

	};
