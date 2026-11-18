#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCMCCBGONFH.h"
#include "unitysdk/System/Object.h"

class MIODKPBHOEB;
class NEFCCLHHCFJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGGIGHDJDHK_JLBCMKOCNEA_OFFSET UNITYSDK_OFFSET(0x116F4B10)
#define GGGIGHDJDHK_LFDOJBNMEHI_OFFSET UNITYSDK_OFFSET(0x116F4CC0)
#define GGGIGHDJDHK_PAMDAMOPJPJ_OFFSET UNITYSDK_OFFSET(0x116F4B80)
#define GGGIGHDJDHK__CTOR_OFFSET UNITYSDK_OFFSET(0x116F4A90)

inline static constexpr unsigned int GGGIGHDJDHK_TypeDefinitionIndex = 70437;

class GGGIGHDJDHK : public ::System::Object
{
public:
	::NEFCCLHHCFJ* OIJCGEJPPCJ; // 0x10
	::System::Collections::Generic::List_1<::MIODKPBHOEB*>* EIKHONIFJON; // 0x18
	::System::Int32 HHDPNBCJIGD; // 0x20
	::System::Int32 CHLKEIBFEAO; // 0x24
	::FCMCCBGONFH FGHKMFMBOHI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGIGHDJDHK__CTOR_OFFSET))(this);
	}

	::System::Int32 JLBCMKOCNEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGIGHDJDHK_JLBCMKOCNEA_OFFSET))(this);
	}

	::System::Int32 LFDOJBNMEHI(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGGIGHDJDHK_LFDOJBNMEHI_OFFSET))(this, NACGJJKHEJE);
	}

	::NEFCCLHHCFJ* PAMDAMOPJPJ()
	{
		return ((::NEFCCLHHCFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGIGHDJDHK_PAMDAMOPJPJ_OFFSET))(this);
	}
};
