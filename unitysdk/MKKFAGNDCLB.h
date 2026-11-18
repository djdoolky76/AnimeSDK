#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOBGMFDLJPC.h"
#include "unitysdk/System/Object.h"

class AGCJCGPOCHI;
namespace System { class Action; }

#define MKKFAGNDCLB_LOFKNMIGFBE_OFFSET UNITYSDK_OFFSET(0x17D46220)
#define MKKFAGNDCLB_OHDALABFMEP_OFFSET UNITYSDK_OFFSET(0x17D46210)
#define MKKFAGNDCLB_SYSTEM_ICOMPARABLE_MOLEMOLE_BATTLE_OPENCAMERASHOTBANNERREQUEST__COMPARETO_OFFSET UNITYSDK_OFFSET(0x17D461B0)
#define MKKFAGNDCLB__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D46200)
#define MKKFAGNDCLB__CTOR_OFFSET UNITYSDK_OFFSET(0x17D461E0)

inline static constexpr unsigned int MKKFAGNDCLB_TypeDefinitionIndex = 57951;

class MKKFAGNDCLB : public ::System::Object
{
public:
	static ::System::Int64* StaticGet_DHLFJDCJBMM()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(MKKFAGNDCLB_TypeDefinitionIndex)->GetStaticField(0x12D60);
	}
	::LOBGMFDLJPC FCIBLMNLGNG; // 0x10
	::System::Action* LAHMBGMFMNL; // 0x28
	::System::Int64 PKLAOBNFJME; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKFAGNDCLB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKKFAGNDCLB__CCTOR_OFFSET))();
	}

	::System::Int32 System_IComparable_MoleMole_Battle_OpenCameraShotBannerRequest__CompareTo(::MKKFAGNDCLB* LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::MKKFAGNDCLB*))((::PBYTE)hIl2Cpp + MKKFAGNDCLB_SYSTEM_ICOMPARABLE_MOLEMOLE_BATTLE_OPENCAMERASHOTBANNERREQUEST__COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean OHDALABFMEP(::AGCJCGPOCHI* BOBIKBDKFCK)
	{
		return ((::System::Boolean(*)(::PVOID, ::AGCJCGPOCHI*))((::PBYTE)hIl2Cpp + MKKFAGNDCLB_OHDALABFMEP_OFFSET))(this, BOBIKBDKFCK);
	}

	::AGCJCGPOCHI* LOFKNMIGFBE()
	{
		return ((::AGCJCGPOCHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKFAGNDCLB_LOFKNMIGFBE_OFFSET))(this);
	}
};
