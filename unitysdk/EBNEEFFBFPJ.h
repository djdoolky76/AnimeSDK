#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAINKPKFDFF;
class DMHADFNOIGP;
class EBNEEFFBFPJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBNEEFFBFPJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12D04590)
#define EBNEEFFBFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12D04AA0)
#define EBNEEFFBFPJ_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x12D04AF0)
#define EBNEEFFBFPJ_GET_PHASEDATALIST_OFFSET UNITYSDK_OFFSET(0x12D04B30)
#define EBNEEFFBFPJ_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x12D04B10)
#define EBNEEFFBFPJ_SET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x12D04B00)
#define EBNEEFFBFPJ_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x12D04B20)

inline static constexpr unsigned int EBNEEFFBFPJ_TypeDefinitionIndex = 61464;

	class EBNEEFFBFPJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AAINKPKFDFF*>* _PhaseDataList_k__BackingField; // 0x10
		::System::UInt32 _TotalScore_k__BackingField; // 0x18
		::System::Boolean _IsSuccess_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNEEFFBFPJ_CTOR_OFFSET))(this);
		}

		static ::EBNEEFFBFPJ* BPLPBPMEODA(::DMHADFNOIGP* a1)
		{
			return ((::EBNEEFFBFPJ*(*)(::DMHADFNOIGP*))((::PBYTE)hIl2Cpp + EBNEEFFBFPJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNEEFFBFPJ_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Void set_IsSuccess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBNEEFFBFPJ_SET_ISSUCCESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNEEFFBFPJ_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBNEEFFBFPJ_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::AAINKPKFDFF*>* get_PhaseDataList()
		{
			return ((::System::Collections::Generic::List_1<::AAINKPKFDFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNEEFFBFPJ_GET_PHASEDATALIST_OFFSET))(this);
		}

	};
