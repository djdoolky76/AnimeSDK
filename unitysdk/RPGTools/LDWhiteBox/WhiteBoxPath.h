#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/PathNodePoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/NJOOOHDMEJC.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPGTools::LDWhiteBox { class WhiteBoxConnector; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRouteNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_BPNDNFOJEMP_OFFSET UNITYSDK_OFFSET(0xF36EBA0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_COLLECTKNOTS_OFFSET UNITYSDK_OFFSET(0xF36E1C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_CREATELOOSEENDPOINT_OFFSET UNITYSDK_OFFSET(0xF36DBB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_CTOR_OFFSET UNITYSDK_OFFSET(0xF36F820)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_EMBKGGMEOIG_OFFSET UNITYSDK_OFFSET(0xF36EEE0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_FOFFGAIAJLP_OFFSET UNITYSDK_OFFSET(0xF36DA00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xF36D2E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTAQUALIFIEDID_OFFSET UNITYSDK_OFFSET(0xF36D320)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTA_OFFSET UNITYSDK_OFFSET(0xF36D300)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTBQUALIFIEDID_OFFSET UNITYSDK_OFFSET(0xF36D330)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTB_OFFSET UNITYSDK_OFFSET(0xF36D310)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_MIDDLENODES_OFFSET UNITYSDK_OFFSET(0xF36D340)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0xF36D1A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHID_OFFSET UNITYSDK_OFFSET(0xF36D1C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHNAME_OFFSET UNITYSDK_OFFSET(0xF36D2C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xF36D1E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ISLOOSEENDPOINT_OFFSET UNITYSDK_OFFSET(0xF36DDE0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_MAKEDRAFTENDPOINTSPERSISTENT_OFFSET UNITYSDK_OFFSET(0xF36D980)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xF36D280)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_NKPLGLFCFDJ_OFFSET UNITYSDK_OFFSET(0xF36F170)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_OKHNJJMGGEE_OFFSET UNITYSDK_OFFSET(0xF36F4D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF36F7C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF36F6D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF36F410)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xF36F750)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_PHOMNHMKCKP_OFFSET UNITYSDK_OFFSET(0xF36EA70)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_REBUILDIFDIRTY_OFFSET UNITYSDK_OFFSET(0xF36DFC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETDRAFTENDPOINTA_OFFSET UNITYSDK_OFFSET(0xF36D860)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETDRAFTENDPOINTB_OFFSET UNITYSDK_OFFSET(0xF36D8F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_1_OFFSET UNITYSDK_OFFSET(0xF36D440)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_OFFSET UNITYSDK_OFFSET(0xF36D350)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_1_OFFSET UNITYSDK_OFFSET(0xF36D700)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_OFFSET UNITYSDK_OFFSET(0xF36D610)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xF36D2F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0xF36D1B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHID_OFFSET UNITYSDK_OFFSET(0xF36D1D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHNAME_OFFSET UNITYSDK_OFFSET(0xF36D2D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xF36D1F0)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxPath_TypeDefinitionIndex = 50014;

	class WhiteBoxPath : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _pathId; // 0x18
		::System::Single _width; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* _pathName; // 0x28
		::System::String* _description; // 0x30
		::System::Collections::Generic::List_1<::RPGTools::LDWhiteBox::PathNodePoint>* _middleNodes; // 0x38
		::UnityEngine::Transform* _endpointA; // 0x40
		::UnityEngine::Transform* _endpointB; // 0x48
		::System::String* _endpointAId; // 0x50
		::System::String* _endpointBId; // 0x58
		::RPGTools::LDWhiteBox::WhiteBoxRegion* _ownerRegion; // 0x60
		::UnityEngine::Mesh* JJEOBACJEEO; // 0x68
		::System::Boolean LINBEGOFFLB; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_CTOR_OFFSET))(this);
		}

		::RPGTools::LDWhiteBox::WhiteBoxRegion* get_OwnerRegion()
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_OWNERREGION_OFFSET))(this);
		}

		::System::Void set_OwnerRegion(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_OWNERREGION_OFFSET))(this, a1);
		}

		::System::String* get_PathId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHID_OFFSET))(this);
		}

		::System::Void set_PathId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHID_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::String* get_PathName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHNAME_OFFSET))(this);
		}

		::System::Void set_PathName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHNAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_EndpointA()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTA_OFFSET))(this);
		}

		::UnityEngine::Transform* get_EndpointB()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTB_OFFSET))(this);
		}

		::System::String* get_EndpointAQualifiedId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTAQUALIFIEDID_OFFSET))(this);
		}

		::System::String* get_EndpointBQualifiedId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTBQUALIFIEDID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPGTools::LDWhiteBox::PathNodePoint>* get_MiddleNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPGTools::LDWhiteBox::PathNodePoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_MIDDLENODES_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_MARKDIRTY_OFFSET))(this);
		}

		::System::Void SetEndpointA(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_OFFSET))(this, a1);
		}

		::System::Void SetEndpointA_1(::RPGTools::LDWhiteBox::WhiteBoxRouteNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRouteNode*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_1_OFFSET))(this, a1);
		}

		::System::Void SetEndpointB(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_OFFSET))(this, a1);
		}

		::System::Void SetEndpointB_1(::RPGTools::LDWhiteBox::WhiteBoxRouteNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRouteNode*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_1_OFFSET))(this, a1);
		}

		::System::Void SetDraftEndpointA(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETDRAFTENDPOINTA_OFFSET))(this, a1);
		}

		::System::Void SetDraftEndpointB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETDRAFTENDPOINTB_OFFSET))(this, a1);
		}

		::System::Void MakeDraftEndpointsPersistent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_MAKEDRAFTENDPOINTSPERSISTENT_OFFSET))(this);
		}

		::UnityEngine::Transform* CreateLooseEndpoint(::System::Boolean a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_CREATELOOSEENDPOINT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLooseEndpoint(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ISLOOSEENDPOINT_OFFSET))(this, a1);
		}

		static ::System::Void FOFFGAIAJLP(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_FOFFGAIAJLP_OFFSET))(a1, a2);
		}

		::System::Void RebuildIfDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_REBUILDIFDIRTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NJOOOHDMEJC>* CollectKnots()
		{
			return ((::System::Collections::Generic::List_1<::NJOOOHDMEJC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_COLLECTKNOTS_OFFSET))(this);
		}

		static ::System::Void EMBKGGMEOIG(::System::Collections::Generic::List_1<::NJOOOHDMEJC>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::NJOOOHDMEJC>*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_EMBKGGMEOIG_OFFSET))(a1);
		}

		static ::System::Void PHOMNHMKCKP(::NJOOOHDMEJC a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32 a3, ::RPGTools::LDWhiteBox::PathNodePoint a4)
		{
			return ((::System::Void(*)(::NJOOOHDMEJC, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::RPGTools::LDWhiteBox::PathNodePoint))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_PHOMNHMKCKP_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void BPNDNFOJEMP(::NJOOOHDMEJC a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::NJOOOHDMEJC, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_BPNDNFOJEMP_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 NKPLGLFCFDJ(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_NKPLGLFCFDJ_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONENABLE_OFFSET))(this);
		}

		::System::Void OKHNJJMGGEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_OKHNJJMGGEE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDESTROY_OFFSET))(this);
		}

	};
}
