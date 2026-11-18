#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEHMCPFFJLG;

#define PDJBIOMDBND_AIHIEOEDNJH_CIOKJOBJKPN_OFFSET UNITYSDK_OFFSET(0x150B63A0)
#define PDJBIOMDBND_AIHIEOEDNJH__CTOR_OFFSET UNITYSDK_OFFSET(0x150B6390)

inline static constexpr unsigned int PDJBIOMDBND_AIHIEOEDNJH_TypeDefinitionIndex = 41134;

class PDJBIOMDBND_AIHIEOEDNJH : public ::System::Object
{
public:
	::System::UInt32 OFBIMIABNEP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJBIOMDBND_AIHIEOEDNJH__CTOR_OFFSET))(this);
	}

	::System::Boolean CIOKJOBJKPN(::IEHMCPFFJLG* PLBEAIIJADM)
	{
		return ((::System::Boolean(*)(::PVOID, ::IEHMCPFFJLG*))((::PBYTE)hIl2Cpp + PDJBIOMDBND_AIHIEOEDNJH_CIOKJOBJKPN_OFFSET))(this, PLBEAIIJADM);
	}
};
