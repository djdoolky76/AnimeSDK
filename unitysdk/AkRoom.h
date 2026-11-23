#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerHandler.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkRoomAwareObject;
namespace AK::Wwise { class AuxBus; }
namespace AK::Wwise { class Event; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKROOM_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x29210F0)
#define AKROOM_A2995DDF30A42AAB_OFFSET UNITYSDK_OFFSET(0x29203B0)
#define AKROOM_A5553652A5858459_OFFSET UNITYSDK_OFFSET(0x18347C0)
#define AKROOM_A896433A6D154135_OFFSET UNITYSDK_OFFSET(0x2922220)
#define AKROOM_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2921020)
#define AKROOM_AEE2201EF3870E65_OFFSET UNITYSDK_OFFSET(0x29218B0)
#define AKROOM_AFB98D0BB81C3D7A_OFFSET UNITYSDK_OFFSET(0x2923820)
#define AKROOM_B3C6EB465C4DF7D5_OFFSET UNITYSDK_OFFSET(0x291FF70)
#define AKROOM_B7464FC3E7D4A013_OFFSET UNITYSDK_OFFSET(0x2328C70)
#define AKROOM_B779B5BD0123F1F4_OFFSET UNITYSDK_OFFSET(0x2920410)
#define AKROOM_B7834A0EEADD7E4C_OFFSET UNITYSDK_OFFSET(0x2920F00)
#define AKROOM_BA5D948B943E88B1_OFFSET UNITYSDK_OFFSET(0x2920F00)
#define AKROOM_BA9B14EF9BB60A44_1_OFFSET UNITYSDK_OFFSET(0x29230F0)
#define AKROOM_BA9B14EF9BB60A44_OFFSET UNITYSDK_OFFSET(0x2923010)
#define AKROOM_BC48A49EAF0D6CE0_OFFSET UNITYSDK_OFFSET(0x2920010)
#define AKROOM_BD32B0BC51804BE3_OFFSET UNITYSDK_OFFSET(0x2923620)
#define AKROOM_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2921590)
#define AKROOM_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2923520)
#define AKROOM_E1BA2ED55A74414E_OFFSET UNITYSDK_OFFSET(0x2923870)
#define AKROOM_E31A328D8560F485_OFFSET UNITYSDK_OFFSET(0x1921850)
#define AKROOM_E630359728A0C706_OFFSET UNITYSDK_OFFSET(0x2328C20)
#define AKROOM_E888CE3D98210B73_OFFSET UNITYSDK_OFFSET(0x29201A0)
#define AKROOM_E93032F8180E134B_OFFSET UNITYSDK_OFFSET(0x2923810)
#define AKROOM_EA56B585EC35626E_OFFSET UNITYSDK_OFFSET(0x29219A0)
#define AKROOM_EABE2DA7271EC05F_OFFSET UNITYSDK_OFFSET(0x2921C30)
#define AKROOM_EC6BF0BD739C36AD_OFFSET UNITYSDK_OFFSET(0x2920FB0)
#define AKROOM_EEA0912A6D66200C_OFFSET UNITYSDK_OFFSET(0x2921B80)
#define AKROOM_EF2BBF7116E59BBE_OFFSET UNITYSDK_OFFSET(0x2920660)
#define AKROOM_F059C1E593AD1682_OFFSET UNITYSDK_OFFSET(0x23912B0)
#define AKROOM_F4A6B8C3D4435D60_OFFSET UNITYSDK_OFFSET(0x29200F0)
#define AKROOM_FC710477B6730F13_OFFSET UNITYSDK_OFFSET(0x2923420)
#define AKROOM_FCD3B918D9762789_OFFSET UNITYSDK_OFFSET(0x2922E20)
#define AKROOM__CCTOR_OFFSET UNITYSDK_OFFSET(0x2923630)
#define AKROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x2923670)

inline static constexpr unsigned int AkRoom_TypeDefinitionIndex = 20483;

class AkRoom : public ::AkTriggerHandler
{
public:
	static ::System::UInt64* StaticGet_F7C8C9AAC9D8CF2D()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(AkRoom_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_AD5E9D49BFE43B62()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AkRoom_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::Int32 priority; // 0x38
	::System::Byte _padding0[0x4];
	::AK::Wwise::AuxBus* reverbAuxBus; // 0x40
	::System::Single reverbLevel; // 0x48
	::System::Single transmissionLoss; // 0x4C
	::AK::Wwise::Event* roomToneEvent; // 0x50
	::System::Single roomToneAuxSend; // 0x58
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::List_1<::AkRoomAwareObject*>* F8AC937BBAD595E9; // 0x60
	::System::Collections::Generic::List_1<::AkRoomAwareObject*>* F35E1A2648C7BA2B; // 0x68
	::UnityEngine::Collider* BF01C804901AA6B4; // 0x70
	::System::Int32 B39CB9115D220D94; // 0x78
	::System::Int32 E0B2067B966D8DB2; // 0x7C
	::System::Int32 A36F46E66404CF21; // 0x80
	::System::Boolean E2C9684F15CD804A; // 0x84
	::System::Byte _padding2[0x3];
	::System::UInt64 BF6E9AB226F73695; // 0x88
	::System::Boolean EAF0FC588AB82E7B; // 0x90
	::System::Boolean E9071C6A523BBB18; // 0x91
	::System::Byte _padding3[0x6];
	::System::UInt64 BFD3C2F711B97474; // 0x98

	::System::Void B7834A0EEADD7E4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_B7834A0EEADD7E4C_OFFSET))(this);
	}

	::System::Void FCD3B918D9762789(::AkRoom* FBE863A9DF84A64B, ::System::Single EA499ED999D9E10C)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*, ::System::Single))((::PBYTE)hIl2Cpp + AKROOM_FCD3B918D9762789_OFFSET))(this, FBE863A9DF84A64B, EA499ED999D9E10C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOM__CCTOR_OFFSET))();
	}

	static ::System::Void E1BA2ED55A74414E(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKROOM_E1BA2ED55A74414E_OFFSET))(E937D4885DAA1AE8);
	}

	::System::UInt64 E31A328D8560F485()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_E31A328D8560F485_OFFSET))(this);
	}

	::System::Void A896433A6D154135()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_A896433A6D154135_OFFSET))(this);
	}

	::System::Void B7464FC3E7D4A013(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKROOM_B7464FC3E7D4A013_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Int32 EF2BBF7116E59BBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_EF2BBF7116E59BBE_OFFSET))(this);
	}

	::System::Void BA9B14EF9BB60A44(::System::UInt64 F5AEFA05C9F71B82)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AKROOM_BA9B14EF9BB60A44_OFFSET))(this, F5AEFA05C9F71B82);
	}

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_AB36E0EE549986E5_OFFSET))(this);
	}

	::System::Void F059C1E593AD1682(::System::UInt64 F5AEFA05C9F71B82)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AKROOM_F059C1E593AD1682_OFFSET))(this, F5AEFA05C9F71B82);
	}

	::System::Void EEA0912A6D66200C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_EEA0912A6D66200C_OFFSET))(this);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_E02954280801633F_OFFSET))(this);
	}

	::System::Boolean EC6BF0BD739C36AD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_EC6BF0BD739C36AD_OFFSET))(this);
	}

	::System::Int32 B779B5BD0123F1F4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_B779B5BD0123F1F4_OFFSET))(this);
	}

	::UnityEngine::Vector3 F4A6B8C3D4435D60(::UnityEngine::Vector3 A642A10FD7BD94A4, ::System::Single A5E14136EE0C829A, ::System::Single E7E561CDD7400441, ::System::Int32 E8879F793871554F)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + AKROOM_F4A6B8C3D4435D60_OFFSET))(this, A642A10FD7BD94A4, A5E14136EE0C829A, E7E561CDD7400441, E8879F793871554F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM__CTOR_OFFSET))(this);
	}

	::System::Void BA9B14EF9BB60A44_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_BA9B14EF9BB60A44_1_OFFSET))(this);
	}

	::System::Int32 E888CE3D98210B73()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_E888CE3D98210B73_OFFSET))(this);
	}

	::System::Void EABE2DA7271EC05F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_EABE2DA7271EC05F_OFFSET))(this);
	}

	static ::System::UInt64 BC48A49EAF0D6CE0(::AkRoom* BE6E61920F79DDD0)
	{
		return ((::System::UInt64(*)(::AkRoom*))((::PBYTE)hIl2Cpp + AKROOM_BC48A49EAF0D6CE0_OFFSET))(BE6E61920F79DDD0);
	}

	::System::UInt64 A5553652A5858459()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_A5553652A5858459_OFFSET))(this);
	}

	static ::System::Int32 AFB98D0BB81C3D7A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKROOM_AFB98D0BB81C3D7A_OFFSET))();
	}

	::System::Void AEE2201EF3870E65(::UnityEngine::Collider* AA06AA4E70E7D273)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOM_AEE2201EF3870E65_OFFSET))(this, AA06AA4E70E7D273);
	}

	::System::Boolean FC710477B6730F13(::AkRoomAwareObject* B3E9386A7277BBA6)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOM_FC710477B6730F13_OFFSET))(this, B3E9386A7277BBA6);
	}

	::System::Void B3C6EB465C4DF7D5(::AkRoomAwareObject* B3E9386A7277BBA6)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOM_B3C6EB465C4DF7D5_OFFSET))(this, B3E9386A7277BBA6);
	}

	::System::Boolean BD32B0BC51804BE3(::System::UInt64 F5AEFA05C9F71B82)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AKROOM_BD32B0BC51804BE3_OFFSET))(this, F5AEFA05C9F71B82);
	}

	::System::Boolean E93032F8180E134B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_E93032F8180E134B_OFFSET))(this);
	}

	::System::Void BA5D948B943E88B1(::UnityEngine::GameObject* AACD1FD78C470A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKROOM_BA5D948B943E88B1_OFFSET))(this, AACD1FD78C470A3F);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::UInt64 A2995DDF30A42AAB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_A2995DDF30A42AAB_OFFSET))(this);
	}

	::System::Void EA56B585EC35626E(::UnityEngine::Collider* AA06AA4E70E7D273)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOM_EA56B585EC35626E_OFFSET))(this, AA06AA4E70E7D273);
	}

	::System::Single E630359728A0C706()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_E630359728A0C706_OFFSET))(this);
	}
};
