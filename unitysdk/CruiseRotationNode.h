#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CruiseRotationNode;
namespace UnityEngine { class AnimationCurve; }

#define CRUISEROTATIONNODE_AFDEEMPIOLO_OFFSET UNITYSDK_OFFSET(0xDFAE920)
#define CRUISEROTATIONNODE_ANJJGCHFAEK_OFFSET UNITYSDK_OFFSET(0xDFAED80)
#define CRUISEROTATIONNODE_CTOR_OFFSET UNITYSDK_OFFSET(0xDFAECC0)
#define CRUISEROTATIONNODE_DMJILIILMDA_OFFSET UNITYSDK_OFFSET(0xDFAEFB0)
#define CRUISEROTATIONNODE_EGPFDCMGKEG_OFFSET UNITYSDK_OFFSET(0xDFAEE60)
#define CRUISEROTATIONNODE_GET_CURRENTPITCHANGLE_OFFSET UNITYSDK_OFFSET(0xDFAEE50)
#define CRUISEROTATIONNODE_GET_CURRENTROLLANGLE_OFFSET UNITYSDK_OFFSET(0xDFAEE40)
#define CRUISEROTATIONNODE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDFAEDF0)
#define CRUISEROTATIONNODE_KLHAABCHGDA_OFFSET UNITYSDK_OFFSET(0xDFAD500)
#define CRUISEROTATIONNODE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDFAE510)
#define CRUISEROTATIONNODE_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xDFAEA20)

inline static constexpr unsigned int CruiseRotationNode_TypeDefinitionIndex = 47332;

	class CruiseRotationNode : public ::System::Object
	{
	public:
		::System::Boolean _Enabled; // 0x10
		::System::Boolean EnableRoll; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single RollPeriod; // 0x14
		::System::Single RollMinAngle; // 0x18
		::System::Single RollMaxAngle; // 0x1C
		::System::Boolean EnablePitch; // 0x20
		::System::Byte _padding1[0x3];
		::System::Single PitchPeriod; // 0x24
		::System::Single PitchMinAngle; // 0x28
		::System::Single PitchMaxAngle; // 0x2C
		::UnityEngine::AnimationCurve* EasingCurve; // 0x30
		::System::Single _currentRollAngle; // 0x38
		::System::Single _currentPitchAngle; // 0x3C
		::System::Int32 _rollDirection; // 0x40
		::System::Int32 _pitchDirection; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_CTOR_OFFSET))(this);
		}

		::System::Void ANJJGCHFAEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_ANJJGCHFAEK_OFFSET))(this);
		}

		::System::Single get_CurrentRollAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_GET_CURRENTROLLANGLE_OFFSET))(this);
		}

		::System::Single get_CurrentPitchAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_GET_CURRENTPITCHANGLE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::CruiseRotationNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CruiseRotationNode*))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void AFDEEMPIOLO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_AFDEEMPIOLO_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Single EGPFDCMGKEG(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_EGPFDCMGKEG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Quaternion KLHAABCHGDA()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_KLHAABCHGDA_OFFSET))(this);
		}

		::UnityEngine::Vector3 DMJILIILMDA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_DMJILIILMDA_OFFSET))(this);
		}

	};
