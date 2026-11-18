#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NOJDPPHLOEO_AGPBCPFHLBN_OFFSET UNITYSDK_OFFSET(0xFD15230)
#define NOJDPPHLOEO_CGLNPIGAOJF_OFFSET UNITYSDK_OFFSET(0xFD150C0)
#define NOJDPPHLOEO_EIEDMCHGGMP_OFFSET UNITYSDK_OFFSET(0xFD153A0)
#define NOJDPPHLOEO_ENDPBJIJNKF_1_OFFSET UNITYSDK_OFFSET(0xFD14B80)
#define NOJDPPHLOEO_ENDPBJIJNKF_OFFSET UNITYSDK_OFFSET(0xFD14B30)
#define NOJDPPHLOEO_GPMONOJGEGD_OFFSET UNITYSDK_OFFSET(0xFD15060)
#define NOJDPPHLOEO__CTOR_OFFSET UNITYSDK_OFFSET(0xFD14B20)

inline static constexpr unsigned int NOJDPPHLOEO_TypeDefinitionIndex = 85776;

class NOJDPPHLOEO : public ::System::Object
{
public:
	::System::Action* DDDMAPNGPLL; // 0x10
	::System::Action* CHDKGAAJGCE; // 0x18
	::System::Action_1<::System::String*>* AECPJCNGJGL; // 0x20
	::System::Action* EAONEHOFBEH; // 0x28
	::System::Action* BHGKFEIDEKJ; // 0x30
	::System::String* GIDPCPENKCA; // 0x38
	::System::String* LGBFDEACEGD; // 0x40
	::System::Int32 MGKIHCBNKJI; // 0x48
	::System::Boolean KPAFIHOJEGJ; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJDPPHLOEO__CTOR_OFFSET))(this);
	}

	::System::Void ENDPBJIJNKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJDPPHLOEO_ENDPBJIJNKF_OFFSET))(this);
	}

	::System::Void GPMONOJGEGD(::System::Action* CHDKGAAJGCE, ::System::Action* EAONEHOFBEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NOJDPPHLOEO_GPMONOJGEGD_OFFSET))(this, CHDKGAAJGCE, EAONEHOFBEH);
	}

	::System::Void CGLNPIGAOJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJDPPHLOEO_CGLNPIGAOJF_OFFSET))(this);
	}

	::System::Void AGPBCPFHLBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJDPPHLOEO_AGPBCPFHLBN_OFFSET))(this);
	}

	::System::Void ENDPBJIJNKF_1(::System::Boolean LMOENPCJJNB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOJDPPHLOEO_ENDPBJIJNKF_1_OFFSET))(this, LMOENPCJJNB);
	}

	::System::Void EIEDMCHGGMP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NOJDPPHLOEO_EIEDMCHGGMP_OFFSET))(this, KOIBHLHLMFC);
	}
};
