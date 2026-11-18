#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeData.h"

class CFHOEGBMPKN;
class OAEFGCLEHHO;
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define NAEHBLNDLOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170F0110)
#define NAEHBLNDLOP_HJCOAMIBJMM_OFFSET UNITYSDK_OFFSET(0x170F0520)
#define NAEHBLNDLOP_IFGAPKLJBHP_OFFSET UNITYSDK_OFFSET(0x170EFE30)
#define NAEHBLNDLOP_LLDGMCIEGAA_OFFSET UNITYSDK_OFFSET(0x170F0310)
#define NAEHBLNDLOP_ONGROUPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x170F02B0)
#define NAEHBLNDLOP__CTOR_OFFSET UNITYSDK_OFFSET(0x170EFD20)

inline static constexpr unsigned int NAEHBLNDLOP_TypeDefinitionIndex = 69149;

class NAEHBLNDLOP : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Int32>* GPIOJBLKFAJ; // 0x10
	::System::String* ALLMHAPINPA; // 0x18
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x20
	::System::Boolean MNOGOJHGLDN; // 0x28
	::System::Byte _padding0[0x3];
	::Foundation::ViewObject::GroupMemberIdentifier EOJAFFGKIAG; // 0x2C
	::System::Int32 HJFMPAFIHJF; // 0x34

	::System::Void _ctor(::Foundation::ViewObject::GroupMemberIdentifier OIEMPMGCNPD, ::System::String* EGNIEIAHPFH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::String*))((::PBYTE)hIl2Cpp + NAEHBLNDLOP__CTOR_OFFSET))(this, OIEMPMGCNPD, EGNIEIAHPFH);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEHBLNDLOP_DISPOSE_OFFSET))(this);
	}

	::System::Void OnGroupStateChanged(::Foundation::ViewObject::Subsystem::GroupStateChangeData LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeData))((::PBYTE)hIl2Cpp + NAEHBLNDLOP_ONGROUPSTATECHANGED_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void IFGAPKLJBHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEHBLNDLOP_IFGAPKLJBHP_OFFSET))(this);
	}

	::System::Void LLDGMCIEGAA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NAEHBLNDLOP_LLDGMCIEGAA_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void HJCOAMIBJMM(::System::Boolean EBFCACIEKBC, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NAEHBLNDLOP_HJCOAMIBJMM_OFFSET))(this, EBFCACIEKBC, EGEGIMGMJHN);
	}
};
