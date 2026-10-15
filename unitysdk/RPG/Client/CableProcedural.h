#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CableProcedural_CableData.h"
#include "unitysdk/RPG/Client/CableProcedural_CurveModel.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CABLEPROCEDURAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8CDD00)
#define RPG_CLIENT_CABLEPROCEDURAL_BFPGKJJLFGN_OFFSET UNITYSDK_OFFSET(0xC8CDE70)
#define RPG_CLIENT_CABLEPROCEDURAL_BKDDHGGFEDI_OFFSET UNITYSDK_OFFSET(0xC8CEB20)
#define RPG_CLIENT_CABLEPROCEDURAL_CTOR_OFFSET UNITYSDK_OFFSET(0xC8D01C0)
#define RPG_CLIENT_CABLEPROCEDURAL_EBGJMLIOIKF_OFFSET UNITYSDK_OFFSET(0xC8CF0D0)
#define RPG_CLIENT_CABLEPROCEDURAL_FMIFCPMOFAC_OFFSET UNITYSDK_OFFSET(0xC8CFCA0)
#define RPG_CLIENT_CABLEPROCEDURAL_FMJMNNKMDNK_OFFSET UNITYSDK_OFFSET(0xC8CE690)
#define RPG_CLIENT_CABLEPROCEDURAL_GIMMEENFCBG_OFFSET UNITYSDK_OFFSET(0xC8CE540)
#define RPG_CLIENT_CABLEPROCEDURAL_JMHKHNGDOLP_OFFSET UNITYSDK_OFFSET(0xC8CF890)
#define RPG_CLIENT_CABLEPROCEDURAL_LATETICK_OFFSET UNITYSDK_OFFSET(0xC8CE010)
#define RPG_CLIENT_CABLEPROCEDURAL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC8CDFB0)
#define RPG_CLIENT_CABLEPROCEDURAL_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xC8D0170)
#define RPG_CLIENT_CABLEPROCEDURAL_NNBOABAGGLN_OFFSET UNITYSDK_OFFSET(0xC8CFF10)
#define RPG_CLIENT_CABLEPROCEDURAL_NNDJPFHIGIK_OFFSET UNITYSDK_OFFSET(0xC8CFC20)
#define RPG_CLIENT_CABLEPROCEDURAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC8CDE10)
#define RPG_CLIENT_CABLEPROCEDURAL_PDINEBNOFPD_OFFSET UNITYSDK_OFFSET(0xC8CFB90)
#define RPG_CLIENT_CABLEPROCEDURAL_PNKDDHDGMOM_OFFSET UNITYSDK_OFFSET(0xC8CF060)

namespace RPG::Client
{
	class CableProcedural : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GDOGAHABEEM; // 0x18
		::RPG::Client::CableProcedural_CableData cableData; // 0x20
		::RPG::Client::CableProcedural_CurveModel curveModel; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* StartPointTransform; // 0x40
		::UnityEngine::Transform* EndPointTransform; // 0x48
		::System::Single pointDensity; // 0x50
		::System::Single sagAmplitude; // 0x54
		::System::Boolean BezierEnable; // 0x58
		::System::Byte _padding1[0x3];
		::System::Single radius; // 0x5C
		::UnityEngine::Vector3 ScaleXYZ; // 0x60
		::System::Single MaxDistance; // 0x6C
		::UnityEngine::AnimationCurve* ScaleCurve; // 0x70
		::UnityEngine::AnimationCurve* HeightScaleCurve; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ControlList; // 0x80
		::UnityEngine::Vector3 AODFEGBJHBK; // 0x88
		::System::Byte _padding2[0x4];
		::UnityEngine::LineRenderer* EEPGGDGGCDJ; // 0x98
		::System::Int32 GILHKMKGICI; // 0xA0
		::UnityEngine::Vector3 MDCAAGNPGCE; // 0xA4
		::UnityEngine::Vector3 KBFDAIPBMIA; // 0xB0
		::System::Single CNLHNGBFKIB; // 0xBC
		::System::Single HEKJBEGMLNI; // 0xC0
		::UnityEngine::Vector3 HOMLHPIMNNK; // 0xC4
		::UnityEngine::Vector3 HACIFCGJIMA; // 0xD0
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* IHNOFDHPEHJ; // 0xE0
		::UnityEngine::Vector3 AJOEMPMOFNK; // 0xE8
		::UnityEngine::Vector3 IDBCCMLFDAB; // 0xF4
		::UnityEngine::Quaternion JKLCBHCFOOD; // 0x100
		::UnityEngine::Quaternion BONBOMLMFBJ; // 0x110
		::System::Boolean CBJGEMHEIJH; // 0x120
		::System::Byte _padding4[0x3];
		::System::Single MBEKLFIFMCO; // 0x124
		::System::Single LEPDONPHNDK; // 0x128
		::System::Boolean LNMGCDGHJGI; // 0x12C
		::System::Byte _padding5[0x3];
		::System::Single BGGFPOGFLFN; // 0x130
		::UnityEngine::Vector3 OFDMMOPJPED; // 0x134
		::System::Single JLJFFONANHD; // 0x140
		::System::Int32 IAKOOCMMMIP; // 0x144
		::Il2CppArray<::UnityEngine::Vector3>* HIOLHAPBFJF; // 0x148
		::Il2CppArray<::UnityEngine::Vector3>* LKJAPKPNGOC; // 0x150
		// static const ::System::Object JEHPKLEOMOM; // 0x0
		// static const ::System::Object LABJDMDGGKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_LATETICK_OFFSET))(this, a1);
		}

		::System::Void GIMMEENFCBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_GIMMEENFCBG_OFFSET))(this);
		}

		::System::Void NNDJPFHIGIK(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_NNDJPFHIGIK_OFFSET))(this, a1, a2);
		}

		::System::Void PDINEBNOFPD(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::LineRenderer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_PDINEBNOFPD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BFPGKJJLFGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_BFPGKJJLFGN_OFFSET))(this);
		}

		::System::Void BKDDHGGFEDI(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::LineRenderer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_BKDDHGGFEDI_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 EBGJMLIOIKF(::System::Single a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_EBGJMLIOIKF_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 FMIFCPMOFAC(::System::Int32 a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_FMIFCPMOFAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 NNBOABAGGLN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_NNBOABAGGLN_OFFSET))(this, a1, a2);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_MARKDIRTY_OFFSET))(this);
		}

		::System::Boolean FMJMNNKMDNK(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_FMJMNNKMDNK_OFFSET))(this, a1, a2);
		}

		::System::Void JMHKHNGDOLP(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_JMHKHNGDOLP_OFFSET))(this, a1, a2);
		}

		::System::Void PNKDDHDGMOM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_PNKDDHDGMOM_OFFSET))(this, a1);
		}

	};
}
