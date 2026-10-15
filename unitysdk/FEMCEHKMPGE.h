#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class GFFKKABHPGA;
class HIJCLHOPOHK;
class ILILKFMOKEB;
class JPMKMMMGNJN;

#define FEMCEHKMPGE_BDJOOABKBLA_OFFSET UNITYSDK_OFFSET(0x1CA6D0D0)
#define FEMCEHKMPGE_BODPPOINENP_OFFSET UNITYSDK_OFFSET(0x1CA6DC70)
#define FEMCEHKMPGE_CCJNBGMDPOG_OFFSET UNITYSDK_OFFSET(0x1CA6DD90)
#define FEMCEHKMPGE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1CA6DB70)
#define FEMCEHKMPGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6CAA0)
#define FEMCEHKMPGE_DKFBHIADJBD_OFFSET UNITYSDK_OFFSET(0x1CA6DC00)
#define FEMCEHKMPGE_DOAMIOCDLIN_OFFSET UNITYSDK_OFFSET(0x1CA6CAB0)
#define FEMCEHKMPGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CA6CCF0)
#define FEMCEHKMPGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CA6CB00)
#define FEMCEHKMPGE_LEEEIGHBJOM_OFFSET UNITYSDK_OFFSET(0x1CA6D560)
#define FEMCEHKMPGE_LLONJNCDCKC_OFFSET UNITYSDK_OFFSET(0x1CA6DD20)
#define FEMCEHKMPGE_PHMHPMHOIFJ_OFFSET UNITYSDK_OFFSET(0x1CA6D510)
#define FEMCEHKMPGE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1CA6DBB0)

inline static constexpr unsigned int FEMCEHKMPGE_TypeDefinitionIndex = 42531;

	class FEMCEHKMPGE : public ::System::Object
	{
	public:
		::JPMKMMMGNJN* PDENFEFCAGN; // 0x10
		::ILILKFMOKEB* PJJIDEMDPAP; // 0x18
		::GFFKKABHPGA* BEGAIPBODKB; // 0x20
		::FDPALAEIHPB* FKINCGODJEP; // 0x28
		::HIJCLHOPOHK* IACHHFMCKMC; // 0x30
		// static const ::System::Object MHDEAFKPFMN; // 0x0
		// static const ::System::Object NOMJKJFELLL; // 0x0
		::System::Void _ctor(::FDPALAEIHPB* a1, ::JPMKMMMGNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::JPMKMMMGNJN*))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DOAMIOCDLIN(::GFFKKABHPGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFFKKABHPGA*))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_DOAMIOCDLIN_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_EXECUTE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_CLEANUP_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_TEARDOWN_OFFSET))(this);
		}

		::System::Void DKFBHIADJBD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_DKFBHIADJBD_OFFSET))(this, a1);
		}

		::System::Void BODPPOINENP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_BODPPOINENP_OFFSET))(this);
		}

		::System::Void LLONJNCDCKC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_LLONJNCDCKC_OFFSET))(this, a1);
		}

		::System::Boolean CCJNBGMDPOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_CCJNBGMDPOG_OFFSET))(this);
		}

		::System::Boolean PHMHPMHOIFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_PHMHPMHOIFJ_OFFSET))(this);
		}

		::System::Void BDJOOABKBLA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_BDJOOABKBLA_OFFSET))(this, a1);
		}

		::System::Void LEEEIGHBJOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEMCEHKMPGE_LEEEIGHBJOM_OFFSET))(this, a1);
		}

	};
