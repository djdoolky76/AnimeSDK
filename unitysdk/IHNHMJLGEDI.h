#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JADGPEDLMCM.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
class ECPDFJJNDBI;
class NALGGFHJEBB;

#define IHNHMJLGEDI_BAEICJHGIHC_OFFSET UNITYSDK_OFFSET(0x1C4A1000)
#define IHNHMJLGEDI_BHCEACHHKMN_OFFSET UNITYSDK_OFFSET(0x1C4A06E0)
#define IHNHMJLGEDI_CJFHKPFKLCM_OFFSET UNITYSDK_OFFSET(0x1C4A0F00)
#define IHNHMJLGEDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A1060)
#define IHNHMJLGEDI_DDODNNFLFEI_OFFSET UNITYSDK_OFFSET(0x1C49FBE0)
#define IHNHMJLGEDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C49FB90)
#define IHNHMJLGEDI_EJFCNKIHEOC_1_OFFSET UNITYSDK_OFFSET(0x1C4A0880)
#define IHNHMJLGEDI_EJFCNKIHEOC_OFFSET UNITYSDK_OFFSET(0x1C4A0140)
#define IHNHMJLGEDI_GPFBKINKLOH_OFFSET UNITYSDK_OFFSET(0x1C49FA50)
#define IHNHMJLGEDI_HOLFIBIPNBG_OFFSET UNITYSDK_OFFSET(0x1C4A0F90)
#define IHNHMJLGEDI_IANOJBNOKMF_OFFSET UNITYSDK_OFFSET(0x1C49FDD0)
#define IHNHMJLGEDI_JEFLFPEDFKO_1_OFFSET UNITYSDK_OFFSET(0x1C4A0530)
#define IHNHMJLGEDI_JEFLFPEDFKO_OFFSET UNITYSDK_OFFSET(0x1C4A02F0)
#define IHNHMJLGEDI_KDGKIEEJDHE_OFFSET UNITYSDK_OFFSET(0x1C49FF40)
#define IHNHMJLGEDI_MBAFHCENBIA_OFFSET UNITYSDK_OFFSET(0x1C4A00C0)
#define IHNHMJLGEDI_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1C49FAA0)
#define IHNHMJLGEDI_OKGFBDGMLED_1_OFFSET UNITYSDK_OFFSET(0x1C4A0C60)
#define IHNHMJLGEDI_OKGFBDGMLED_2_OFFSET UNITYSDK_OFFSET(0x1C4A09F0)
#define IHNHMJLGEDI_OKGFBDGMLED_3_OFFSET UNITYSDK_OFFSET(0x1C4A0D20)
#define IHNHMJLGEDI_OKGFBDGMLED_OFFSET UNITYSDK_OFFSET(0x1C4A0920)
#define IHNHMJLGEDI_OPKLJKDABFL_OFFSET UNITYSDK_OFFSET(0x1C49FA00)

	class IHNHMJLGEDI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* MDJFAKMMKJG; // 0x10
		::Il2CppArray<::NALGGFHJEBB*>* IMLJBOJOIPP; // 0x18
		::Il2CppArray<::System::UInt32>* FGELKEHPDOA; // 0x20
		::ECPDFJJNDBI* CPEPOHBPJHM; // 0x28
		::Il2CppArray<::System::UInt32>* NCAOPNEBOKI; // 0x30
		::Il2CppArray<::JADGPEDLMCM>* BMLLEKFIIGB; // 0x38
		::System::UInt32 OBNKKFDGOBP; // 0x40
		::System::UInt32 CLCFFOHPHBE; // 0x44
		::System::UInt32 EFCFHDEIMJH; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_CTOR_OFFSET))(this);
		}

		::System::Int32 OPKLJKDABFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_OPKLJKDABFL_OFFSET))(this);
		}

		::System::Int32 GPFBKINKLOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_GPFBKINKLOH_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::ECPDFJJNDBI* a1, ::Il2CppArray<::NALGGFHJEBB*>* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::Il2CppArray<::JADGPEDLMCM>* a6, ::Il2CppArray<::System::Int32>* a7, ::Il2CppArray<::System::UInt32>* a8, ::Il2CppArray<::System::UInt32>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::ECPDFJJNDBI*, ::Il2CppArray<::NALGGFHJEBB*>*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::JADGPEDLMCM>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_OINBDMGFFJL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 DDODNNFLFEI(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_DDODNNFLFEI_OFFSET))(this, a1);
		}

		::System::UInt32 KDGKIEEJDHE(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_KDGKIEEJDHE_OFFSET))(this, a1);
		}

		::System::UInt64 MBAFHCENBIA(::System::Int32 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_MBAFHCENBIA_OFFSET))(this, a1);
		}

		::System::Boolean EJFCNKIHEOC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_EJFCNKIHEOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JEFLFPEDFKO(::System::Int32 a1, ::System::UInt64 a2, ::System::UInt32 a3, ::RPG::Client::CachedAssetLogicType a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_JEFLFPEDFKO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JEFLFPEDFKO_1(::System::Int32 a1, ::System::UInt64 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_JEFLFPEDFKO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BHCEACHHKMN(::System::Int32 a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_BHCEACHHKMN_OFFSET))(this, a1, a2);
		}

		::System::Boolean EJFCNKIHEOC_1(::System::UInt64 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_EJFCNKIHEOC_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OKGFBDGMLED(::System::UInt64 a1, ::System::UInt32 a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_OKGFBDGMLED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean OKGFBDGMLED_1(::System::UInt64 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_OKGFBDGMLED_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OKGFBDGMLED_2(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::CachedAssetLogicType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_OKGFBDGMLED_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean OKGFBDGMLED_3(::System::Int32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_OKGFBDGMLED_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CJFHKPFKLCM(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_CJFHKPFKLCM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::CachedAssetLogicType HOLFIBIPNBG(::System::UInt32 a1)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_HOLFIBIPNBG_OFFSET))(this, a1);
		}

		::System::Boolean IANOJBNOKMF(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_IANOJBNOKMF_OFFSET))(this, a1, a2);
		}

		::System::Boolean BAEICJHGIHC(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + IHNHMJLGEDI_BAEICJHGIHC_OFFSET))(this, a1, a2);
		}

	};
