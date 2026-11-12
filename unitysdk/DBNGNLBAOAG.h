#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNBAPNPIADL;
class PMEKHCELADI;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DBNGNLBAOAG_CJOGOKJOJAA_OFFSET UNITYSDK_OFFSET(0xEB927A0)
#define DBNGNLBAOAG_CTOR_OFFSET UNITYSDK_OFFSET(0xEB92540)
#define DBNGNLBAOAG_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xEB92520)
#define DBNGNLBAOAG_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xEB92530)
#define DBNGNLBAOAG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xEB925A0)
#define DBNGNLBAOAG_LHGOLMGGOJL_OFFSET UNITYSDK_OFFSET(0xEB925F0)
#define DBNGNLBAOAG_NEBADKFMPKK_OFFSET UNITYSDK_OFFSET(0xEB92860)

inline static constexpr unsigned int DBNGNLBAOAG_TypeDefinitionIndex = 62793;

	class DBNGNLBAOAG : public ::System::Object
	{
	public:
		::PMEKHCELADI* _Progress_k__BackingField; // 0x10
		::JNBAPNPIADL* _Config_k__BackingField; // 0x18
		::System::Void _ctor(::JNBAPNPIADL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNBAPNPIADL*))((::PBYTE)hIl2Cpp + DBNGNLBAOAG_CTOR_OFFSET))(this, a1);
		}

		::JNBAPNPIADL* get_Config()
		{
			return ((::JNBAPNPIADL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG_GET_CONFIG_OFFSET))(this);
		}

		::PMEKHCELADI* get_Progress()
		{
			return ((::PMEKHCELADI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean LHGOLMGGOJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG_LHGOLMGGOJL_OFFSET))(this);
		}

		::System::Boolean CJOGOKJOJAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG_CJOGOKJOJAA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NEBADKFMPKK()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG_NEBADKFMPKK_OFFSET))(this);
		}

	};
