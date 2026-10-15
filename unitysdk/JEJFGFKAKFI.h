#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIAMBDKHMIJ;
class JIAFOPELMJJ;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEJFGFKAKFI_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x1661DBA0)
#define JEJFGFKAKFI_CJNBAHEACOE_OFFSET UNITYSDK_OFFSET(0x1661DCD0)
#define JEJFGFKAKFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1661DE70)
#define JEJFGFKAKFI_GET_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x1661DA10)
#define JEJFGFKAKFI_GET_INUPDATE_OFFSET UNITYSDK_OFFSET(0x1661D9F0)
#define JEJFGFKAKFI_GGEPLHACEKJ_OFFSET UNITYSDK_OFFSET(0x1661DD30)
#define JEJFGFKAKFI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1661DDE0)
#define JEJFGFKAKFI_IBOJMIPAKIF_OFFSET UNITYSDK_OFFSET(0x1661DA30)
#define JEJFGFKAKFI_SET_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x1661DA20)
#define JEJFGFKAKFI_SET_INUPDATE_OFFSET UNITYSDK_OFFSET(0x1661DA00)
#define JEJFGFKAKFI__STARTUPDATEDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x1661DE80)

inline static constexpr unsigned int JEJFGFKAKFI_TypeDefinitionIndex = 68300;

	class JEJFGFKAKFI : public ::System::Object
	{
	public:
		::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>* OJENMOELNLN; // 0x10
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x18
		::System::Int64 _downloadSize_k__BackingField; // 0x20
		::System::Boolean _InUpdate_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_CTOR_OFFSET))(this);
		}

		::System::Boolean get_InUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_GET_INUPDATE_OFFSET))(this);
		}

		::System::Void set_InUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_SET_INUPDATE_OFFSET))(this, a1);
		}

		::System::Int64 get_downloadSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_GET_DOWNLOADSIZE_OFFSET))(this);
		}

		::System::Void set_downloadSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_SET_DOWNLOADSIZE_OFFSET))(this, a1);
		}

		::System::Void IBOJMIPAKIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_IBOJMIPAKIF_OFFSET))(this);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Void GGEPLHACEKJ(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_GGEPLHACEKJ_OFFSET))(this, a1);
		}

		::System::Void CJNBAHEACOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_CJNBAHEACOE_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJFGFKAKFI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void _StartUpdateData_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJFGFKAKFI__STARTUPDATEDATA_B__10_0_OFFSET))(this);
		}

	};
