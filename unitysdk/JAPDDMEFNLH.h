#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JAPDDMEFNLH_DOGEAEEMDDE.h"

class FBAMLABJMKF;

#define JAPDDMEFNLH_AIHFJMMCBLF_OFFSET UNITYSDK_OFFSET(0xF88A800)
#define JAPDDMEFNLH_EFMKDKDMFPD_OFFSET UNITYSDK_OFFSET(0xF88A640)
#define JAPDDMEFNLH_ENBKOHJIIKA_OFFSET UNITYSDK_OFFSET(0xF88A5E0)
#define JAPDDMEFNLH_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0xF88A6C0)
#define JAPDDMEFNLH_NDPIGKKHJMK_OFFSET UNITYSDK_OFFSET(0xF889F70)
#define JAPDDMEFNLH__CTOR_OFFSET UNITYSDK_OFFSET(0xF889F60)

inline static constexpr unsigned int JAPDDMEFNLH_TypeDefinitionIndex = 67259;

class JAPDDMEFNLH : public ::System::Object
{
public:
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x10
	::System::Nullable_1<::System::Object*> HMDHAGMNHNH; // 0x18
	::System::Byte _padding0[0x20];
	::System::Nullable_1<::System::Object*> IHAAHLBFHHA; // 0x40
	::System::Byte _padding1[0x20];
	::System::Boolean IANHKOLCODN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPDDMEFNLH__CTOR_OFFSET))(this);
	}

	::System::Void NDPIGKKHJMK(::System::Nullable_1<::System::Object*> GDGFIGBMJPG, ::System::Nullable_1<::System::Object*> PMEJDBHOAHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Object*>, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_NDPIGKKHJMK_OFFSET))(this, GDGFIGBMJPG, PMEJDBHOAHA);
	}

	::System::Void ENBKOHJIIKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_ENBKOHJIIKA_OFFSET))(this);
	}

	::System::Void EFMKDKDMFPD(::JAPDDMEFNLH_DOGEAEEMDDE HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JAPDDMEFNLH_DOGEAEEMDDE))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_EFMKDKDMFPD_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void JLIMOLHLFAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_JLIMOLHLFAK_OFFSET))(this);
	}

	::System::Boolean AIHFJMMCBLF(::System::Nullable_1<::System::Object*> HEJIBNEHLIG, ::System::Nullable_1<::System::Object*> MJODFDBNJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Object*>, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_AIHFJMMCBLF_OFFSET))(this, HEJIBNEHLIG, MJODFDBNJIP);
	}
};
