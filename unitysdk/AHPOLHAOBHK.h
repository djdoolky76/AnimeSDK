#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
class ECPDFJJNDBI;
class NALGGFHJEBB;
class NOCDFBMJDIG;

#define AHPOLHAOBHK_BAEICJHGIHC_OFFSET UNITYSDK_OFFSET(0x1C42EB80)
#define AHPOLHAOBHK_BHCEACHHKMN_OFFSET UNITYSDK_OFFSET(0x1C42E200)
#define AHPOLHAOBHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C42EC50)
#define AHPOLHAOBHK_CJFHKPFKLCM_OFFSET UNITYSDK_OFFSET(0x1C42EA50)
#define AHPOLHAOBHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C42CFE0)
#define AHPOLHAOBHK_DDODNNFLFEI_OFFSET UNITYSDK_OFFSET(0x1C42D280)
#define AHPOLHAOBHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C42D130)
#define AHPOLHAOBHK_EJFCNKIHEOC_1_OFFSET UNITYSDK_OFFSET(0x1C42E3E0)
#define AHPOLHAOBHK_EJFCNKIHEOC_OFFSET UNITYSDK_OFFSET(0x1C42DC20)
#define AHPOLHAOBHK_GPFBKINKLOH_OFFSET UNITYSDK_OFFSET(0x1C42D210)
#define AHPOLHAOBHK_HOLFIBIPNBG_OFFSET UNITYSDK_OFFSET(0x1C42EBE0)
#define AHPOLHAOBHK_IANOJBNOKMF_OFFSET UNITYSDK_OFFSET(0x1C42D610)
#define AHPOLHAOBHK_JEFLFPEDFKO_1_OFFSET UNITYSDK_OFFSET(0x1C42E050)
#define AHPOLHAOBHK_JEFLFPEDFKO_OFFSET UNITYSDK_OFFSET(0x1C42DE10)
#define AHPOLHAOBHK_KDGKIEEJDHE_OFFSET UNITYSDK_OFFSET(0x1C42DA60)
#define AHPOLHAOBHK_OKGFBDGMLED_1_OFFSET UNITYSDK_OFFSET(0x1C42E7B0)
#define AHPOLHAOBHK_OKGFBDGMLED_2_OFFSET UNITYSDK_OFFSET(0x1C42E550)
#define AHPOLHAOBHK_OKGFBDGMLED_3_OFFSET UNITYSDK_OFFSET(0x1C42E870)
#define AHPOLHAOBHK_OKGFBDGMLED_OFFSET UNITYSDK_OFFSET(0x1C42E480)
#define AHPOLHAOBHK_OPKLJKDABFL_OFFSET UNITYSDK_OFFSET(0x1C42D1A0)

	class AHPOLHAOBHK : public ::System::Object
	{
	public:
		::ECPDFJJNDBI* CPEPOHBPJHM; // 0x10
		::NOCDFBMJDIG* KNOIGMKBPBE; // 0x18
		::Il2CppArray<::NALGGFHJEBB*>* IMLJBOJOIPP; // 0x20
		::System::UInt32 OBNKKFDGOBP; // 0x28
		::System::UInt32 CLCFFOHPHBE; // 0x2C
		::System::UInt32 EFCFHDEIMJH; // 0x30
		static ::System::Int32* StaticGet_OAJBAAHPJPB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHPOLHAOBHK")->GetStaticField(0x3820);
		}

		::System::Void _ctor(::NOCDFBMJDIG* a1, ::ECPDFJJNDBI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NOCDFBMJDIG*, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHPOLHAOBHK_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_DISPOSE_OFFSET))(this);
		}

		::System::Int32 OPKLJKDABFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_OPKLJKDABFL_OFFSET))(this);
		}

		::System::Int32 GPFBKINKLOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_GPFBKINKLOH_OFFSET))(this);
		}

		::System::UInt32 DDODNNFLFEI(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_DDODNNFLFEI_OFFSET))(this, a1);
		}

		::System::UInt32 KDGKIEEJDHE(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_KDGKIEEJDHE_OFFSET))(this, a1);
		}

		::System::Boolean EJFCNKIHEOC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_EJFCNKIHEOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JEFLFPEDFKO(::System::Int32 a1, ::System::UInt64 a2, ::System::UInt32 a3, ::RPG::Client::CachedAssetLogicType a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_JEFLFPEDFKO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JEFLFPEDFKO_1(::System::Int32 a1, ::System::UInt64 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_JEFLFPEDFKO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BHCEACHHKMN(::System::Int32 a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_BHCEACHHKMN_OFFSET))(this, a1, a2);
		}

		::System::Boolean EJFCNKIHEOC_1(::System::UInt64 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_EJFCNKIHEOC_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OKGFBDGMLED(::System::UInt64 a1, ::System::UInt32 a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_OKGFBDGMLED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean OKGFBDGMLED_1(::System::UInt64 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_OKGFBDGMLED_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CJFHKPFKLCM(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_CJFHKPFKLCM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IANOJBNOKMF(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_IANOJBNOKMF_OFFSET))(this, a1, a2);
		}

		::System::Boolean BAEICJHGIHC(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_BAEICJHGIHC_OFFSET))(this, a1, a2);
		}

		::System::Boolean OKGFBDGMLED_2(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::CachedAssetLogicType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_OKGFBDGMLED_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean OKGFBDGMLED_3(::System::Int32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_OKGFBDGMLED_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::CachedAssetLogicType HOLFIBIPNBG(::System::UInt32 a1)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHPOLHAOBHK_HOLFIBIPNBG_OFFSET))(this, a1);
		}

	};
