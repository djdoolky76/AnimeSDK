#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAOCJKOBCN;
class JEBPFBNCALB;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define CFCKFKJFKLO_CTOR_OFFSET UNITYSDK_OFFSET(0xCA08D00)
#define CFCKFKJFKLO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA095B0)
#define CFCKFKJFKLO_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0xCA08C70)
#define CFCKFKJFKLO_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xCA08C10)
#define CFCKFKJFKLO_GET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0xCA08CB0)
#define CFCKFKJFKLO_KLNIHAJCMFH_OFFSET UNITYSDK_OFFSET(0xCA08CC0)
#define CFCKFKJFKLO_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xCA08C30)
#define CFCKFKJFKLO_SET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xCA08C20)

inline static constexpr unsigned int CFCKFKJFKLO_TypeDefinitionIndex = 79564;

	class CFCKFKJFKLO : public ::System::Object
	{
	public:
		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* INJJGMIGFFD; // 0x10
		::ALAOCJKOBCN* _ConditionDesc_k__BackingField; // 0x18
		::R3::ReadOnlyReactiveProperty_1<::System::Int32>* EJNMGLJJEOO; // 0x20
		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* CCPOGAJHICH; // 0x28
		::System::Int32 _TargetValue_k__BackingField; // 0x30
		::System::Void _ctor(::JEBPFBNCALB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEBPFBNCALB*))((::PBYTE)hIl2Cpp + CFCKFKJFKLO_CTOR_OFFSET))(this, a1);
		}

		::ALAOCJKOBCN* get_ConditionDesc()
		{
			return ((::ALAOCJKOBCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKFKJFKLO_GET_CONDITIONDESC_OFFSET))(this);
		}

		::System::Void set_ConditionDesc(::ALAOCJKOBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALAOCJKOBCN*))((::PBYTE)hIl2Cpp + CFCKFKJFKLO_SET_CONDITIONDESC_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* LDKMIKEMHFO()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKFKJFKLO_LDKMIKEMHFO_OFFSET))(this);
		}

		::R3::Observable_1<::System::Int32>* FENOMPCEFII()
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKFKJFKLO_FENOMPCEFII_OFFSET))(this);
		}

		::System::Int32 get_TargetValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKFKJFKLO_GET_TARGETVALUE_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* KLNIHAJCMFH()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKFKJFKLO_KLNIHAJCMFH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKFKJFKLO_DISPOSE_OFFSET))(this);
		}

	};
