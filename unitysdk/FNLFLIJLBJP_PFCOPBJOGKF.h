#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNLFLIJLBJP;
class MACLIDNIBBE;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FNLFLIJLBJP_PFCOPBJOGKF_HBCFDPJANCL_OFFSET UNITYSDK_OFFSET(0x1F3DA170)
#define FNLFLIJLBJP_PFCOPBJOGKF_IECJNGEELLG_OFFSET UNITYSDK_OFFSET(0x1F3DA2D0)
#define FNLFLIJLBJP_PFCOPBJOGKF_NHPEGAIAMJK_OFFSET UNITYSDK_OFFSET(0x1F3DA2A0)
#define FNLFLIJLBJP_PFCOPBJOGKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DA160)

inline static constexpr unsigned int FNLFLIJLBJP_PFCOPBJOGKF_TypeDefinitionIndex = 8369;

class FNLFLIJLBJP_PFCOPBJOGKF : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::System::Action_1<::System::Exception*>* DLMJCFBENGB; // 0x18
	::System::Action_1<::System::Exception*>* KIAGKPDIDDH; // 0x20
	::FNLFLIJLBJP* KLHPEBKNIFB; // 0x28
	::System::Collections::Generic::IReadOnlyList_1<::MACLIDNIBBE*>* HBEPDMIABKM; // 0x30
	::System::Int32 ABHBKFJKINO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_PFCOPBJOGKF__CTOR_OFFSET))(this);
	}

	::System::Void HBCFDPJANCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_PFCOPBJOGKF_HBCFDPJANCL_OFFSET))(this);
	}

	::System::Void NHPEGAIAMJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_PFCOPBJOGKF_NHPEGAIAMJK_OFFSET))(this);
	}

	::System::Void IECJNGEELLG(::System::Exception* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_PFCOPBJOGKF_IECJNGEELLG_OFFSET))(this, BLLNHDIDKPA);
	}
};
