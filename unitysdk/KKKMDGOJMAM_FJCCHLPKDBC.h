#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC_OMCMPLFMCAM;
class GEGKDDOBMON;
class MBBDBLEAKIH;
namespace System { class Action; }

#define KKKMDGOJMAM_FJCCHLPKDBC_KPCDBIFAPKC_OFFSET UNITYSDK_OFFSET(0x126975D0)
#define KKKMDGOJMAM_FJCCHLPKDBC_NLNEOJBAFJE_OFFSET UNITYSDK_OFFSET(0x12696A80)
#define KKKMDGOJMAM_FJCCHLPKDBC_PHAFLPAJACJ_OFFSET UNITYSDK_OFFSET(0x126966F0)
#define KKKMDGOJMAM_FJCCHLPKDBC__CTOR_OFFSET UNITYSDK_OFFSET(0x126966E0)

inline static constexpr unsigned int KKKMDGOJMAM_FJCCHLPKDBC_TypeDefinitionIndex = 76015;

class KKKMDGOJMAM_FJCCHLPKDBC : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::System::Action* OLDCEOGKOAE; // 0x18
	::MBBDBLEAKIH* PBKPPLIDBFD; // 0x20
	::GEGKDDOBMON* DDKICDNCJCF; // 0x28
	::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKMDGOJMAM_FJCCHLPKDBC__CTOR_OFFSET))(this);
	}

	::System::Void PHAFLPAJACJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKMDGOJMAM_FJCCHLPKDBC_PHAFLPAJACJ_OFFSET))(this);
	}

	::System::Void NLNEOJBAFJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKMDGOJMAM_FJCCHLPKDBC_NLNEOJBAFJE_OFFSET))(this);
	}

	::System::Void KPCDBIFAPKC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKMDGOJMAM_FJCCHLPKDBC_KPCDBIFAPKC_OFFSET))(this);
	}
};
