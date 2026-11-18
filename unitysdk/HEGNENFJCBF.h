#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNBADLOICGB;
template <typename T> class BGACJGMMIHK_1;

#define HEGNENFJCBF_BFKIOGNJNAO_OFFSET UNITYSDK_OFFSET(0x19E09D50)
#define HEGNENFJCBF_BJBJLAHIPCJ_1_OFFSET UNITYSDK_OFFSET(0x19E09C50)
#define HEGNENFJCBF_BJBJLAHIPCJ_OFFSET UNITYSDK_OFFSET(0x19E09BB0)
#define HEGNENFJCBF_CEEEDDJKAIP_OFFSET UNITYSDK_OFFSET(0x19E09B10)
#define HEGNENFJCBF_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x19E09D40)
#define HEGNENFJCBF_GMALKIGAINN_OFFSET UNITYSDK_OFFSET(0x19E09D60)
#define HEGNENFJCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x19E099E0)

inline static constexpr unsigned int HEGNENFJCBF_TypeDefinitionIndex = 64517;

class HEGNENFJCBF : public ::System::Object
{
public:
	::BGACJGMMIHK_1<::System::Int32>* JEIELFICFND; // 0x10
	::BGACJGMMIHK_1<::System::Int32>* CJHCCIAEBNP; // 0x18
	::System::UInt32 _HKEKLKHONLA_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 INEPJABHIIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEGNENFJCBF__CTOR_OFFSET))(this, INEPJABHIIG);
	}

	::System::Boolean CEEEDDJKAIP(::System::Int32& NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + HEGNENFJCBF_CEEEDDJKAIP_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Void BJBJLAHIPCJ(::KNBADLOICGB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::KNBADLOICGB*))((::PBYTE)hIl2Cpp + HEGNENFJCBF_BJBJLAHIPCJ_OFFSET))(this, LJBPECKCCEA);
	}

	::System::UInt32 FJPGCNGHHCC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGNENFJCBF_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Void BJBJLAHIPCJ_1(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEGNENFJCBF_BJBJLAHIPCJ_1_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Void BFKIOGNJNAO(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEGNENFJCBF_BFKIOGNJNAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GMALKIGAINN(::KNBADLOICGB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::KNBADLOICGB*))((::PBYTE)hIl2Cpp + HEGNENFJCBF_GMALKIGAINN_OFFSET))(this, LJBPECKCCEA);
	}
};
