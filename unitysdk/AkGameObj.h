#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEF0661810FEEC74.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkAudioListener;
class AkGameObjListenerList;
class AkGameObjPosOffsetData;
class AkGameObjPositionOffsetData;
class B0B7E60A111F056C;
class BA82FBA66FC34F31;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define AKGAMEOBJ_A35D3728690A7EB0_OFFSET UNITYSDK_OFFSET(0x2918CF0)
#define AKGAMEOBJ_A58A8D316BD4FB88_OFFSET UNITYSDK_OFFSET(0x2919BF0)
#define AKGAMEOBJ_A9FFAC9B75588E96_OFFSET UNITYSDK_OFFSET(0x29196F0)
#define AKGAMEOBJ_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2918EF0)
#define AKGAMEOBJ_AB8A923304ACC1CF_OFFSET UNITYSDK_OFFSET(0x1CE2410)
#define AKGAMEOBJ_AE12F7DDD517E60D_OFFSET UNITYSDK_OFFSET(0x29199F0)
#define AKGAMEOBJ_AEE2201EF3870E65_OFFSET UNITYSDK_OFFSET(0x2919090)
#define AKGAMEOBJ_B1B9CEB56BC89DD1_OFFSET UNITYSDK_OFFSET(0x29190D0)
#define AKGAMEOBJ_B8455F3A8DBBF5D6_OFFSET UNITYSDK_OFFSET(0x2913BA0)
#define AKGAMEOBJ_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2919080)
#define AKGAMEOBJ_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2919A70)
#define AKGAMEOBJ_E601C30629B80120_OFFSET UNITYSDK_OFFSET(0x2919C10)
#define AKGAMEOBJ_EA56B585EC35626E_OFFSET UNITYSDK_OFFSET(0x29190B0)
#define AKGAMEOBJ_EEB1E08B08CB4A40_OFFSET UNITYSDK_OFFSET(0x2106D50)
#define AKGAMEOBJ_EF3D9DEC26CC5E02_OFFSET UNITYSDK_OFFSET(0x2919990)
#define AKGAMEOBJ_F5F5597878AFCF77_OFFSET UNITYSDK_OFFSET(0x2913B00)
#define AKGAMEOBJ_F6FCC0F8D4D41222_OFFSET UNITYSDK_OFFSET(0x2918DB0)
#define AKGAMEOBJ_F7D068BC7F8ED55F_OFFSET UNITYSDK_OFFSET(0x2919650)
#define AKGAMEOBJ_FCD2E01436661EC7_OFFSET UNITYSDK_OFFSET(0x2919720)
#define AKGAMEOBJ_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2918D20)
#define AKGAMEOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x2919B10)

inline static constexpr unsigned int AkGameObj_TypeDefinitionIndex = 20425;

class AkGameObj : public ::UnityEngine::MonoBehaviour
{
public:
	::AkGameObjListenerList* m_listeners; // 0x20
	::System::Boolean isEnvironmentAware; // 0x28
	::System::Boolean isStaticObject; // 0x29
	::System::Byte _padding0[0x6];
	::UnityEngine::Collider* B54114F6BBE37349; // 0x30
	::BA82FBA66FC34F31* BEC6D257400EA321; // 0x38
	::B0B7E60A111F056C* B375EB994D926277; // 0x40
	::AkGameObjPositionOffsetData* m_positionOffsetData; // 0x48
	::System::Single F597C4F18649FE54; // 0x50
	::System::Boolean E470FBCDB50C2FE7; // 0x54
	::System::Byte _padding1[0x3];
	::AkGameObjPosOffsetData* m_posOffsetData; // 0x58
	::System::Int32 listenerMask; // 0x60

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_E02954280801633F_OFFSET))(this);
	}

	::FEF0661810FEEC74 F7D068BC7F8ED55F()
	{
		return ((::FEF0661810FEEC74(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_F7D068BC7F8ED55F_OFFSET))(this);
	}

	::System::Void A35D3728690A7EB0(::AkAudioListener* BF907075E0691EF3)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_A35D3728690A7EB0_OFFSET))(this, BF907075E0691EF3);
	}

	::UnityEngine::Vector3 F6FCC0F8D4D41222()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_F6FCC0F8D4D41222_OFFSET))(this);
	}

	::System::Void E601C30629B80120(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKGAMEOBJ_E601C30629B80120_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::AkAudioListener*>* EEB1E08B08CB4A40()
	{
		return ((::System::Collections::Generic::List_1<::AkAudioListener*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_EEB1E08B08CB4A40_OFFSET))(this);
	}

	::System::Void B1B9CEB56BC89DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_B1B9CEB56BC89DD1_OFFSET))(this);
	}

	::System::Void EF3D9DEC26CC5E02()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_EF3D9DEC26CC5E02_OFFSET))(this);
	}

	::UnityEngine::Vector3 B8455F3A8DBBF5D6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_B8455F3A8DBBF5D6_OFFSET))(this);
	}

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_AB36E0EE549986E5_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void A9FFAC9B75588E96(::AkAudioListener* BF907075E0691EF3)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_A9FFAC9B75588E96_OFFSET))(this, BF907075E0691EF3);
	}

	::FEF0661810FEEC74 AE12F7DDD517E60D()
	{
		return ((::FEF0661810FEEC74(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_AE12F7DDD517E60D_OFFSET))(this);
	}

	::UnityEngine::Vector3 F5F5597878AFCF77()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_F5F5597878AFCF77_OFFSET))(this);
	}

	::System::Boolean A58A8D316BD4FB88()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_A58A8D316BD4FB88_OFFSET))(this);
	}

	::System::Void EA56B585EC35626E(::UnityEngine::Collider* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_EA56B585EC35626E_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void FCD2E01436661EC7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_FCD2E01436661EC7_OFFSET))(this);
	}

	::System::Single AB8A923304ACC1CF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_AB8A923304ACC1CF_OFFSET))(this);
	}

	::System::Void AEE2201EF3870E65(::UnityEngine::Collider* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_AEE2201EF3870E65_OFFSET))(this, BEEE7A5A60941632);
	}
};
