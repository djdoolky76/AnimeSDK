#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class GFFKKABHPGA;
class HIJCLHOPOHK;
class ILILKFMOKEB;
class JPMKMMMGNJN;

#define FEMCEHKMPGE_BDJOOABKBLA_OFFSET UNITYSDK_OFFSET(0x1CA3EC30)
#define FEMCEHKMPGE_BODPPOINENP_OFFSET UNITYSDK_OFFSET(0x1CA3F7D0)
#define FEMCEHKMPGE_CCJNBGMDPOG_OFFSET UNITYSDK_OFFSET(0x1CA3F8F0)
#define FEMCEHKMPGE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1CA3F6D0)
#define FEMCEHKMPGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3E600)
#define FEMCEHKMPGE_DKFBHIADJBD_OFFSET UNITYSDK_OFFSET(0x1CA3F760)
#define FEMCEHKMPGE_DOAMIOCDLIN_OFFSET UNITYSDK_OFFSET(0x1CA3E610)
#define FEMCEHKMPGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CA3E850)
#define FEMCEHKMPGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CA3E660)
#define FEMCEHKMPGE_LEEEIGHBJOM_OFFSET UNITYSDK_OFFSET(0x1CA3F0C0)
#define FEMCEHKMPGE_LLONJNCDCKC_OFFSET UNITYSDK_OFFSET(0x1CA3F880)
#define FEMCEHKMPGE_PHMHPMHOIFJ_OFFSET UNITYSDK_OFFSET(0x1CA3F070)
#define FEMCEHKMPGE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1CA3F710)

inline static constexpr unsigned int FEMCEHKMPGE_TypeDefinitionIndex = 42531;

	class FEMCEHKMPGE : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::GFFKKABHPGA* BEGAIPBODKB; // 0x18
		::HIJCLHOPOHK* IACHHFMCKMC; // 0x20
		::ILILKFMOKEB* PJJIDEMDPAP; // 0x28
		::JPMKMMMGNJN* PDENFEFCAGN; // 0x30
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
