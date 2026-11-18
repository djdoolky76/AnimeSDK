#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class BFKDKOOIADJ;
namespace System { class String; }

#define MEJFNKHBGNN_DEJPMHLDOLG_OFFSET UNITYSDK_OFFSET(0x11F455A0)
#define MEJFNKHBGNN_HKJEICBJLBM_OFFSET UNITYSDK_OFFSET(0x11F45920)
#define MEJFNKHBGNN_NPCHNNHBLMH_OFFSET UNITYSDK_OFFSET(0x11F456C0)
#define MEJFNKHBGNN_PANLKPPGLDP_OFFSET UNITYSDK_OFFSET(0x11F455F0)
#define MEJFNKHBGNN__CTOR_OFFSET UNITYSDK_OFFSET(0x11F45590)

inline static constexpr unsigned int MEJFNKHBGNN_TypeDefinitionIndex = 46169;

class MEJFNKHBGNN : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFNKHBGNN__CTOR_OFFSET))(this);
	}

	::System::Void DEJPMHLDOLG(::BFKDKOOIADJ* KBEHDAOGAMD)
	{
		return ((::System::Void(*)(::PVOID, ::BFKDKOOIADJ*))((::PBYTE)hIl2Cpp + MEJFNKHBGNN_DEJPMHLDOLG_OFFSET))(this, KBEHDAOGAMD);
	}

	static ::System::Void NPCHNNHBLMH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEJFNKHBGNN_NPCHNNHBLMH_OFFSET))();
	}

	static ::System::String* HKJEICBJLBM(::BFKDKOOIADJ* KBEHDAOGAMD)
	{
		return ((::System::String*(*)(::BFKDKOOIADJ*))((::PBYTE)hIl2Cpp + MEJFNKHBGNN_HKJEICBJLBM_OFFSET))(KBEHDAOGAMD);
	}

	static ::System::Void PANLKPPGLDP(::BFKDKOOIADJ* BEMIHAHBHGA)
	{
		return ((::System::Void(*)(::BFKDKOOIADJ*))((::PBYTE)hIl2Cpp + MEJFNKHBGNN_PANLKPPGLDP_OFFSET))(BEMIHAHBHGA);
	}
};
