#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIHollowChessboardResult3DModelController_LightLerpState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/MonoHollowResultPageConfig_LightConfig.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DLJLLKJEMEN;
class DMNHEGHEIEO;
class IJPHAMDDIAO;
class MonoHollowResultPageConfig;
class MonoHollowResultPageConfig_BlinkConfigInfo;
class MonoHollowResultPageConfig_ResutlLights;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowChessPieceResult3DModelController; }
namespace MoleMole { class UIHollowChessboardResult3DModelController_NumberBlinker; }
namespace MoleMole::Config { class HollowResultConfigPageCamera; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Light; }

#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ADDGROUPMEMBERBYPOSITION_OFFSET UNITYSDK_OFFSET(0x17F48160)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ADDGROUPMEMBER_OFFSET UNITYSDK_OFFSET(0x17F481E0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_AHOBLMCCAJP_OFFSET UNITYSDK_OFFSET(0x17F49990)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BBNOKOCIECD_OFFSET UNITYSDK_OFFSET(0x17F48890)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BHBFHOOBCPA_OFFSET UNITYSDK_OFFSET(0x17F470C0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BINK_OFFSET UNITYSDK_OFFSET(0x17F47420)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BLNBHCFEJEP_OFFSET UNITYSDK_OFFSET(0x17F49A10)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BUILDCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x17F462C0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_EDPIOECFJLB_OFFSET UNITYSDK_OFFSET(0x17F48C90)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_EEDGEEKEDFM_OFFSET UNITYSDK_OFFSET(0x17F45E60)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ELMHNEIOEAC_OFFSET UNITYSDK_OFFSET(0x17F49EB0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_FEPBIADPPJF_OFFSET UNITYSDK_OFFSET(0x17F45C30)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETNUMBERREGION_OFFSET UNITYSDK_OFFSET(0x17F48500)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETRESULTPIECE_1_OFFSET UNITYSDK_OFFSET(0x17F484A0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETRESULTPIECE_OFFSET UNITYSDK_OFFSET(0x17F48380)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GET_NUMBERRESULT_OFFSET UNITYSDK_OFFSET(0x17F45AE0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_HBHPPCHJCPJ_OFFSET UNITYSDK_OFFSET(0x17F48F30)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_HEMJFJJLIGO_OFFSET UNITYSDK_OFFSET(0x17F490F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_HIPNGKBNKJP_OFFSET UNITYSDK_OFFSET(0x17F48C00)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_HOGOEACCOHB_OFFSET UNITYSDK_OFFSET(0x17F46440)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x17F474F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_KILBDDLGLON_OFFSET UNITYSDK_OFFSET(0x17F49CF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_KLNDDJAKCHJ_OFFSET UNITYSDK_OFFSET(0x17F48880)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17F46260)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NKEIEIOLIJL_OFFSET UNITYSDK_OFFSET(0x17F47580)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F45B00)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17F45CF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F45D80)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F45B90)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F45CA0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_PGONJPGAAFF_OFFSET UNITYSDK_OFFSET(0x17F49DA0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQFOCUSCONFIGGRID_OFFSET UNITYSDK_OFFSET(0x17F478E0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQINITCAMERAANIM_OFFSET UNITYSDK_OFFSET(0x17F48100)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQRESULTCAMERA_OFFSET UNITYSDK_OFFSET(0x17F47820)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SET_NUMBERRESULT_OFFSET UNITYSDK_OFFSET(0x17F45AF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17F45DF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F486B0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F48560)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F48700)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17F48790)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F48850)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F48860)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F48870)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboardResult3DModelController_TypeDefinitionIndex = 72980;

	class UIHollowChessboardResult3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::UnityEngine::Quaternion* StaticGet_NKABLIOOBLD()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboardResult3DModelController_TypeDefinitionIndex)->GetStaticField(0xDD50);
		}
		::System::Nullable_1<::System::Int32> _JPPBICBNAJP_k__BackingField; // 0x368
		::DLJLLKJEMEN* LIPEOGFIPBB; // 0x370
		::MoleMole::UIHollowChessboardResult3DModelController_NumberBlinker* NEOIACLIPHA; // 0x378
		::System::Threading::CancellationTokenSource* EBPBAACBLFJ; // 0x380
		::DMNHEGHEIEO* _view; // 0x388
		::System::Object* AIKEEOOLKPB; // 0x390
		::Il2CppArray<::MoleMole::UIHollowChessPieceResult3DModelController*>* ENCNELOPDGL; // 0x398
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIHollowChessPieceResult3DModelController*>* BMIHGBOPKBM; // 0x3A0
		::MonoHollowResultPageConfig* CEJENBBHBBG; // 0x3A8
		::IJPHAMDDIAO* FNOLFEBMFJN; // 0x3B0
		::MoleMole::Config::HollowResultConfigPageCamera* LBPDEJDDJPE; // 0x3B8
		::MonoHollowResultPageConfig_ResutlLights* NOLKMBJCKGG; // 0x3C0
		::MoleMole::UIHollowChessboardResult3DModelController_LightLerpState CLCNANLAPEH; // 0x3C8
		::System::Single IJIFGFDHLIO; // 0x3CC
		::System::Boolean DGIOFIBICKA; // 0x3D0
		::System::Byte _padding0[0x7];
		::UnityEngine::Light* Light_top; // 0x3D8
		::UnityEngine::Light* Light_bottom; // 0x3E0
		::UnityEngine::Light* Light_left; // 0x3E8
		::UnityEngine::Light* Light_right; // 0x3F0
		::System::Single JJLOHDICCLE; // 0x3F8
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* IPHMGGNMHDL; // 0x400
		::System::Int32 JILFDPNGFHP; // 0x408
		::System::Int32 HLHJAKCCFAI; // 0x40C
		::System::Int32 PBHIKGFMGEK; // 0x410
		::System::Int32 MHBPPHJJEDH; // 0x414
		::System::Int32 GNFLAGGHKJD; // 0x418
		::System::Int32 OELEAMGAAMB; // 0x41C
		::System::Object* DepthMatrix; // 0x420

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Nullable_1<::System::Int32> get_NumberResult()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GET_NUMBERRESULT_OFFSET))(this);
		}

		::System::Void set_NumberResult(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SET_NUMBERRESULT_OFFSET))(this, value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void BuildChessboard(::MonoHollowResultPageConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MonoHollowResultPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BUILDCHESSBOARD_OFFSET))(this, config);
		}

		::System::Void Bink(::System::Single delayTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BINK_OFFSET))(this, delayTime);
		}

		::System::Void InitCamera(::System::String* cameraKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_INITCAMERA_OFFSET))(this, cameraKey);
		}

		::System::Void ReqResultCamera(::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQRESULTCAMERA_OFFSET))(this, onDone);
		}

		::System::Void ReqInitCameraAnim(::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQINITCAMERAANIM_OFFSET))(this, onDone);
		}

		::System::Void ReqFocusConfigGrid(::System::Single screenRatioX, ::System::Single screenRatioY, ::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQFOCUSCONFIGGRID_OFFSET))(this, screenRatioX, screenRatioY, onDone);
		}

		::System::Void AddGroupMember(::System::Int32 weight, ::System::Single radius, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ADDGROUPMEMBER_OFFSET))(this, weight, radius, pos);
		}

		::System::Void AddGroupMemberByPosition(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ADDGROUPMEMBERBYPOSITION_OFFSET))(this, pos);
		}

		::MoleMole::UIHollowChessPieceResult3DModelController* GetResultPiece(::System::Int32 fullX, ::System::Int32 fullY)
		{
			return ((::MoleMole::UIHollowChessPieceResult3DModelController*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETRESULTPIECE_OFFSET))(this, fullX, fullY);
		}

		::MoleMole::UIHollowChessPieceResult3DModelController* GetResultPiece_1(::MoleMole::Vector2Int fullVec)
		{
			return ((::MoleMole::UIHollowChessPieceResult3DModelController*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETRESULTPIECE_1_OFFSET))(this, fullVec);
		}

		static ::System::Int32 GetNumberRegion(::System::Int32 regionCol, ::System::Int32 x, ::System::Int32 totalCol)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETNUMBERREGION_OFFSET))(regionCol, x, totalCol);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void KLNDDJAKCHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_KLNDDJAKCHJ_OFFSET))(this);
		}

		::System::Void BBNOKOCIECD(::System::Int32 GIJMFFGINAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BBNOKOCIECD_OFFSET))(this, GIJMFFGINAO);
		}

		::System::Void NKEIEIOLIJL(::System::String* NIHGOLJOGKD)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NKEIEIOLIJL_OFFSET))(this, NIHGOLJOGKD);
		}

		static ::System::Void HIPNGKBNKJP(::System::Int32 HFAFFNLNAJE, ::System::Int32& DGCABFHCGFB, ::System::Int32& IEEFJFMIDMG)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_HIPNGKBNKJP_OFFSET))(HFAFFNLNAJE, DGCABFHCGFB, IEEFJFMIDMG);
		}

		::System::Void BHBFHOOBCPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BHBFHOOBCPA_OFFSET))(this);
		}

		::System::Void HBHPPCHJCPJ(::MonoHollowResultPageConfig_LightConfig GIAEPMKCBIB, ::MonoHollowResultPageConfig_LightConfig HODAIDNDKHD, ::System::Single BFGHPIFHKAO)
		{
			return ((::System::Void(*)(::PVOID, ::MonoHollowResultPageConfig_LightConfig, ::MonoHollowResultPageConfig_LightConfig, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_HBHPPCHJCPJ_OFFSET))(this, GIAEPMKCBIB, HODAIDNDKHD, BFGHPIFHKAO);
		}

		::System::Void HEMJFJJLIGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_HEMJFJJLIGO_OFFSET))(this);
		}

		::System::Void AHOBLMCCAJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_AHOBLMCCAJP_OFFSET))(this);
		}

		::System::Void BLNBHCFEJEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BLNBHCFEJEP_OFFSET))(this);
		}

		static ::System::Boolean KILBDDLGLON(::System::Object* GMHJGPODKLM, ::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_KILBDDLGLON_OFFSET))(GMHJGPODKLM, HAAEBCOBKFF, BFMMEICFNCD);
		}

		::System::Void EEDGEEKEDFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_EEDGEEKEDFM_OFFSET))(this);
		}

		::MonoHollowResultPageConfig_BlinkConfigInfo* PGONJPGAAFF(::System::Int32 ABHBKFJKINO)
		{
			return ((::MonoHollowResultPageConfig_BlinkConfigInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_PGONJPGAAFF_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void EDPIOECFJLB(::System::Single LNJFKBBFABK, ::System::Single JBFOAKELCNK, ::UnityEngine::Color KPFFDJNGAEB, ::UnityEngine::Color MMJGHGGDDFF, ::UnityEngine::Color MIFHCMAKOII, ::UnityEngine::Color DAAACOICAPJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_EDPIOECFJLB_OFFSET))(this, LNJFKBBFABK, JBFOAKELCNK, KPFFDJNGAEB, MMJGHGGDDFF, MIFHCMAKOII, DAAACOICAPJ);
		}

		::System::Void ELMHNEIOEAC(::System::Int32 GIJMFFGINAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ELMHNEIOEAC_OFFSET))(this, GIJMFFGINAO);
		}

		::System::Void HOGOEACCOHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_HOGOEACCOHB_OFFSET))(this);
		}

		::System::Void FEPBIADPPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_FEPBIADPPJF_OFFSET))(this);
		}
	};
}
