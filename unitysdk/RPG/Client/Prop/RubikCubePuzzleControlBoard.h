#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJFGKHDCINL.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeGroup.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleAxis.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleControlModeType.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleDragModeState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client::Prop { class LightRubikCubePuzzleBoard; }
namespace RPG::Client::Prop { class RubikCubePuzzleBoard; }
namespace RPG::Client::Prop { class RubikCubePuzzleCameraController; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_AEDDMDKFABN_OFFSET UNITYSDK_OFFSET(0xDD9E580)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_APCNOFDNAEJ_OFFSET UNITYSDK_OFFSET(0xDD9E490)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_BINDDUMMYTOUI_OFFSET UNITYSDK_OFFSET(0xDD9A590)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CALCBILLBOARDSCREENROTATE_OFFSET UNITYSDK_OFFSET(0xDD9B730)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDA0180)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CLDDLOFICHA_OFFSET UNITYSDK_OFFSET(0xDD9BC20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDDA0130)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_DESTROYBOARD_OFFSET UNITYSDK_OFFSET(0xDD9A030)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EALMEPPBIND_OFFSET UNITYSDK_OFFSET(0xDD9E080)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EBJKPJHNMNG_OFFSET UNITYSDK_OFFSET(0xDD9CE40)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EBPOJCJNDLN_OFFSET UNITYSDK_OFFSET(0xDD9F8C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EEPKELOFCMO_OFFSET UNITYSDK_OFFSET(0xDD9DFB0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ENDCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDD9D490)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EPBBCPGINIA_OFFSET UNITYSDK_OFFSET(0xDD9D110)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_FOAHKMBAOOH_OFFSET UNITYSDK_OFFSET(0xDD9D7B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_GETGROUP_OFFSET UNITYSDK_OFFSET(0xDD9C670)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_HMPEIDFDJDD_OFFSET UNITYSDK_OFFSET(0xDD9F140)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0xDD9FB90)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_1_OFFSET UNITYSDK_OFFSET(0xDD99050)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_2_OFFSET UNITYSDK_OFFSET(0xDD98BD0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_OFFSET UNITYSDK_OFFSET(0xDD92D40)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITCAMERA_OFFSET UNITYSDK_OFFSET(0xDD99E60)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITDUMMYBLOCK_OFFSET UNITYSDK_OFFSET(0xDD990B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_IOLNPILPPHF_OFFSET UNITYSDK_OFFSET(0xDDA0010)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_KHANEKIDNIJ_OFFSET UNITYSDK_OFFSET(0xDD9D9F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_KJOCNEPNIFA_OFFSET UNITYSDK_OFFSET(0xDD9E360)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_KKMBIJAIDLE_OFFSET UNITYSDK_OFFSET(0xDD9DD00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_LMPOHGOODPI_OFFSET UNITYSDK_OFFSET(0xDD9E4F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_MAIHCHMDOKN_OFFSET UNITYSDK_OFFSET(0xDD9F250)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_MPEDDHOFFHG_OFFSET UNITYSDK_OFFSET(0xDD9DF10)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKACTION0_OFFSET UNITYSDK_OFFSET(0xDD9D730)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKACTION1_OFFSET UNITYSDK_OFFSET(0xDD9D970)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xDD9D6A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD9A4B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xDD9A2C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD9D420)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONRELOAD_OFFSET UNITYSDK_OFFSET(0xDD9C080)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSELECTORDER_OFFSET UNITYSDK_OFFSET(0xDD9C1A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSTARTCONTROL_OFFSET UNITYSDK_OFFSET(0xDD9A400)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSTARTROTATE_OFFSET UNITYSDK_OFFSET(0xDD9BA80)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_OPIOFJODHOP_OFFSET UNITYSDK_OFFSET(0xDD9FA00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHATTACHDUMMYBLOCKROTATION_OFFSET UNITYSDK_OFFSET(0xDD9B5F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHDUMMYBLOCKATTACH_OFFSET UNITYSDK_OFFSET(0xDD9A670)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHXZDUMMYBLOCKATTACH_OFFSET UNITYSDK_OFFSET(0xDD9A710)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHYDUMMYBLOCKATTACH_OFFSET UNITYSDK_OFFSET(0xDD9ABB0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_RESETCONTROLBOARD_OFFSET UNITYSDK_OFFSET(0xDD938A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_STARTCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDD9CED0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_UNBINDDUMMYFROMUI_OFFSET UNITYSDK_OFFSET(0xDD9A600)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD9C770)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleControlBoard_TypeDefinitionIndex = 78826;

	class RubikCubePuzzleControlBoard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean MFKLNBPPNPN; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* CubeObject; // 0x20
		::RPG::GameCore::OptionTriggerInfo* RotateOption; // 0x28
		::UnityEngine::Vector2 CameraOffsetXY; // 0x30
		::System::Single CameraFOV; // 0x38
		::System::Single BrickWidth; // 0x3C
		::System::Single UIExtraOffset; // 0x40
		::System::Single UIExtraOffsetY; // 0x44
		::UnityEngine::AnimationCurve* RotateCurve; // 0x48
		::UnityEngine::AnimationCurve* CameraRotateCurve; // 0x50
		::System::Single RotateUpperLimit; // 0x58
		::RPG::Client::Prop::RubikCubePuzzleControlModeType ModeType; // 0x5C
		::RPG::Client::Prop::RubikCubePuzzleCameraController* LCGPKNKDMHJ; // 0x60
		::System::Boolean IDBEBIDMHME; // 0x68
		::System::Byte _padding1[0x7];
		::UnityEngine::Transform* IAPKDGODOOO; // 0x70
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x78
		::RPG::Client::Prop::RubikCubePuzzleBoard* HPDLAPJCNOO; // 0x80
		::RPG::Client::Prop::RubikCubePuzzleCube* AMNCFPIKELK; // 0x88
		::RPG::Client::MonoTriggerRegion* BKNPJHNHIOG; // 0x90
		::System::Int32 OEIAODPCGMM; // 0x98
		::System::Int32 AOLOFLPADDH; // 0x9C
		::System::Int32 DPEKNFFPPAM; // 0xA0
		::System::Byte _padding2[0x4];
		::Il2CppArray<::CJFGKHDCINL>* DPMBLNFHLHE; // 0xA8
		::Il2CppArray<::CJFGKHDCINL>* KPMLAHLEAAL; // 0xB0
		::Il2CppArray<::CJFGKHDCINL>* NFGEPGMJDEL; // 0xB8
		::System::Boolean CCIFMCDALII; // 0xC0
		::System::Byte _padding3[0x3];
		::System::Int32 LCEGGBOGCGC; // 0xC4
		::RPG::Client::Prop::RubikCubePuzzleAxis HIFGLEIMPOP; // 0xC8
		::System::Boolean OBMMBGAOFHM; // 0xCC
		::System::Byte _padding4[0x3];
		::UnityEngine::Transform* ILPDLGIJMNN; // 0xD0
		::RPG::GameCore::PropComponent* FEOOACOCPCN; // 0xD8
		::System::Boolean DILDIDIGEBM; // 0xE0
		::System::Byte _padding5[0x3];
		::System::Single HJNEIOPIJHM; // 0xE4
		::System::Single PECIJKPECBF; // 0xE8
		::System::Single KJFFAPOIHKE; // 0xEC
		::System::Single LKKHFFMIECG; // 0xF0
		::System::Single BCGHNNBGMCM; // 0xF4
		::System::Boolean HPCKMKBNHAE; // 0xF8
		::System::Boolean FJCOIDADPKI; // 0xF9
		::System::Byte _padding6[0x2];
		::RPG::Client::Prop::RubikCubePuzzleDragModeState OBBODDBKMCE; // 0xFC
		::UnityEngine::Vector3 KAHEDCBGMKN; // 0x100
		::UnityEngine::Vector3 NHDDELMNNFC; // 0x10C
		::UnityEngine::Transform* LHIAFECCAIB; // 0x118
		::System::Single JJKPFPOFNKL; // 0x120
		::System::Byte _padding7[0x4];
		::UnityEngine::Transform* BFPPKFKAHAB; // 0x128
		::System::Boolean KJNCEIMINHD; // 0x130
		::System::Boolean JEEAPEKNGFL; // 0x131
		::System::Byte _padding8[0x6];
		::RPG::GameCore::GameEntity* JPCMHJPCJLP; // 0x138
		::System::Boolean CKBHACPEKHD; // 0x140
		::System::Boolean MHBAFHLGLFN; // 0x141
		::System::Byte _padding9[0x2];
		::UnityEngine::Vector3 ONCMHMMEDKK; // 0x144
		static ::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>** StaticGet_MNDILHOLOFK()
		{
			return (::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>**)UnitySDK::FromName("RPG.Client.Prop", "RubikCubePuzzleControlBoard")->GetStaticField(0x508B0);
		}

		static ::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>** StaticGet_OGIJMFFHAHE()
		{
			return (::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>**)UnitySDK::FromName("RPG.Client.Prop", "RubikCubePuzzleControlBoard")->GetStaticField(0x508B8);
		}

		static ::System::Object** StaticGet_ONHNMJCNHDA()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "RubikCubePuzzleControlBoard")->GetStaticField(0x508C0);
		}

		static ::System::Single* StaticGet_JDLGIGLBDOB()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "RubikCubePuzzleControlBoard")->GetStaticField(0x12230);
		}

		static ::System::Int32* StaticGet_DJHPDIHFMJC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "RubikCubePuzzleControlBoard")->GetStaticField(0x12234);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitBoard(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RubikCubePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_OFFSET))(this, a1, a2);
		}

		::System::Void InitBoard_1(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::LightRubikCubePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::LightRubikCubePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_1_OFFSET))(this, a1, a2);
		}

		::System::Void InitBoard_2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITBOARD_2_OFFSET))(this, a1);
		}

		::System::Void DestroyBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_DESTROYBOARD_OFFSET))(this);
		}

		::System::Void OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void OnStartControl(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSTARTCONTROL_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetControlBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_RESETCONTROLBOARD_OFFSET))(this);
		}

		::System::Void InitDummyBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITDUMMYBLOCK_OFFSET))(this);
		}

		::System::Void InitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_INITCAMERA_OFFSET))(this);
		}

		::System::Void BindDummyToUI(::CJFGKHDCINL a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJFGKHDCINL))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_BINDDUMMYTOUI_OFFSET))(this, a1);
		}

		::System::Void UnbindDummyFromUI(::CJFGKHDCINL a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJFGKHDCINL))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_UNBINDDUMMYFROMUI_OFFSET))(this, a1);
		}

		::System::Void RefreshDummyBlockAttach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHDUMMYBLOCKATTACH_OFFSET))(this);
		}

		::System::Void RefreshAttachDummyBlockRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHATTACHDUMMYBLOCKROTATION_OFFSET))(this);
		}

		::System::Void CalcBillboardScreenRotate(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CALCBILLBOARDSCREENROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshYDummyBlockAttach(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHYDUMMYBLOCKATTACH_OFFSET))(this, a1);
		}

		::System::Void RefreshXZDummyBlockAttach(::System::Boolean a1, ::Il2CppArray<::CJFGKHDCINL>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::CJFGKHDCINL>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_REFRESHXZDUMMYBLOCKATTACH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStartRotate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSTARTROTATE_OFFSET))(this, a1);
		}

		::System::Void OnReload(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONRELOAD_OFFSET))(this, a1);
		}

		::System::Void OnSelectOrder(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONSELECTORDER_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::RubikCubeGroup GetGroup()
		{
			return ((::RPG::Client::Prop::RubikCubeGroup(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_GETGROUP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void StartControlMode(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_STARTCONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void OnPuzzleFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONPUZZLEFINISH_OFFSET))(this, a1);
		}

		::System::Void OnClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnClickAction0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKACTION0_OFFSET))(this, a1);
		}

		::System::Void OnClickAction1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ONCLICKACTION1_OFFSET))(this, a1);
		}

		::System::Void EndControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_ENDCONTROLMODE_OFFSET))(this);
		}

		::UnityEngine::Transform* KKMBIJAIDLE(::System::Boolean a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_KKMBIJAIDLE_OFFSET))(this, a1);
		}

		::System::Int32 MPEDDHOFFHG(::RPG::Client::Prop::RubikCubePuzzleAxis a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleAxis, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_MPEDDHOFFHG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::RubikCubePuzzleAxis EEPKELOFCMO(::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>* a1, ::System::Int32 a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3)
		{
			return ((::RPG::Client::Prop::RubikCubePuzzleAxis(*)(::PVOID, ::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleAxis>*, ::System::Int32, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EEPKELOFCMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EALMEPPBIND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EALMEPPBIND_OFFSET))(this);
		}

		::RPG::Client::MonoTriggerRegion* KJOCNEPNIFA(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_KJOCNEPNIFA_OFFSET))(this, a1);
		}

		::System::Void APCNOFDNAEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_APCNOFDNAEJ_OFFSET))(this);
		}

		::System::Boolean CLDDLOFICHA(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_CLDDLOFICHA_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* LMPOHGOODPI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_LMPOHGOODPI_OFFSET))(this);
		}

		::System::Void AEDDMDKFABN(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_AEDDMDKFABN_OFFSET))(this, a1);
		}

		::System::Void EPBBCPGINIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EPBBCPGINIA_OFFSET))(this);
		}

		::System::Void KHANEKIDNIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_KHANEKIDNIJ_OFFSET))(this);
		}

		::System::Void MAIHCHMDOKN(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_MAIHCHMDOKN_OFFSET))(this, a1);
		}

		::System::Void EBPOJCJNDLN(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EBPOJCJNDLN_OFFSET))(this, a1);
		}

		::System::Void OPIOFJODHOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_OPIOFJODHOP_OFFSET))(this);
		}

		::System::Void HPNHBGEOGPO(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_HPNHBGEOGPO_OFFSET))(this, a1);
		}

		::System::Boolean HMPEIDFDJDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_HMPEIDFDJDD_OFFSET))(this);
		}

		::System::Boolean IOLNPILPPHF(::RPG::Client::Prop::RubikCubePuzzleAxis a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleAxis, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_IOLNPILPPHF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FOAHKMBAOOH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_FOAHKMBAOOH_OFFSET))(this, a1);
		}

		::System::Void EBJKPJHNMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONTROLBOARD_EBJKPJHNMNG_OFFSET))(this);
		}

	};
}
