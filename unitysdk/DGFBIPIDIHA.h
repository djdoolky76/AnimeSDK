#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BACBOOKMPPN;
class PGOEFBEADPP;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define DGFBIPIDIHA_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x18A67C70)
#define DGFBIPIDIHA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A67C60)

inline static constexpr unsigned int DGFBIPIDIHA_TypeDefinitionIndex = 8470;

class DGFBIPIDIHA : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* DOAOFEMNPMH; // 0x10
	::BACBOOKMPPN* KKHNPACPJOI; // 0x18
	::System::Boolean EIAMBACLCKG; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 HDAAEGEMJGG; // 0x24

	::System::Void _ctor(::BACBOOKMPPN* PMNLAHHMNFM, ::System::Int32 OLAIAPANMKD, ::System::Action_1<::System::Int32>* PNMOJJBCPJH)
	{
		return ((::System::Void(*)(::PVOID, ::BACBOOKMPPN*, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DGFBIPIDIHA__CTOR_OFFSET))(this, PMNLAHHMNFM, OLAIAPANMKD, PNMOJJBCPJH);
	}

	::System::Void ODEEJCPBCMM(::PGOEFBEADPP* JMDHBJMNBCP, ::System::Action_1<::System::Exception*>* ADNIDJNEDGO)
	{
		return ((::System::Void(*)(::PVOID, ::PGOEFBEADPP*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + DGFBIPIDIHA_ODEEJCPBCMM_OFFSET))(this, JMDHBJMNBCP, ADNIDJNEDGO);
	}
};
