#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JPNIHFOOFLP;
class NEAHEDAOJFF;
namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoUI3DTouch; }

#define HHLKOEICAHB_AOFIPLFLLFA_OFFSET UNITYSDK_OFFSET(0x15CD2790)
#define HHLKOEICAHB_AOMEHCCGGAG_OFFSET UNITYSDK_OFFSET(0x15CD28C0)
#define HHLKOEICAHB_BAKMPHKDCEG_OFFSET UNITYSDK_OFFSET(0x15CD20C0)
#define HHLKOEICAHB_CHCINCOCLJA_OFFSET UNITYSDK_OFFSET(0x15CD25F0)
#define HHLKOEICAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2D40)
#define HHLKOEICAHB_DDAEDMNAPDM_OFFSET UNITYSDK_OFFSET(0x15CD2CB0)
#define HHLKOEICAHB_DDFDCBJBHPK_OFFSET UNITYSDK_OFFSET(0x15CD2360)
#define HHLKOEICAHB_EJMNGMMFOAN_OFFSET UNITYSDK_OFFSET(0x15CD2720)
#define HHLKOEICAHB_EPFKCKNKAJF_OFFSET UNITYSDK_OFFSET(0x15CD2940)
#define HHLKOEICAHB_GBJLPPFCAFH_OFFSET UNITYSDK_OFFSET(0x15CD27E0)
#define HHLKOEICAHB_JGKNILPPBPG_OFFSET UNITYSDK_OFFSET(0x15CD24E0)
#define HHLKOEICAHB_JMEFMOPDIHL_OFFSET UNITYSDK_OFFSET(0x15CD2690)
#define HHLKOEICAHB_KCMIACJFEKF_OFFSET UNITYSDK_OFFSET(0x15CD2BD0)
#define HHLKOEICAHB_MGMEHJGMEAD_OFFSET UNITYSDK_OFFSET(0x15CD1F40)
#define HHLKOEICAHB_MPBDICEAINN_OFFSET UNITYSDK_OFFSET(0x15CD2B30)
#define HHLKOEICAHB_OKLFLECDPHJ_OFFSET UNITYSDK_OFFSET(0x15CD1ED0)
#define HHLKOEICAHB_OKMMDGOHMCA_OFFSET UNITYSDK_OFFSET(0x15CD2140)
#define HHLKOEICAHB_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x15CD1E50)

inline static constexpr unsigned int HHLKOEICAHB_TypeDefinitionIndex = 62309;

	class HHLKOEICAHB : public ::System::Object
	{
	public:
		::RPG::Client::MonoUI3DTouch* ADMBIEFLAFD; // 0x10
		::Cinemachine::CinemachineVirtualCamera* MBMOBDNPFDL; // 0x18
		::Cinemachine::CinemachineFramingTransposer* EDPJICNHIPF; // 0x20
		::NEAHEDAOJFF* LOMDHHJLPMJ; // 0x28
		::JPNIHFOOFLP* BPHFCHHFGFC; // 0x30
		::RPG::Client::MonoExUICamera* BMPJCAJJPHA; // 0x38
		::System::Single EKKKMOFOJPL; // 0x40
		::System::Boolean NLPFMNOPJGO; // 0x44
		::System::Boolean DCMBFDPPANO; // 0x45
		::System::Byte _padding0[0x2];
		::System::Single POFMFCAGGIC; // 0x48
		// static const ::System::Object GELBGDFGMNB; // 0x0
		// static const ::System::Object FEPJOGPGDHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKOEICAHB_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 PointerPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKOEICAHB_POINTERPOSITION_OFFSET))(this);
		}

		::System::Void OKLFLECDPHJ(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + HHLKOEICAHB_OKLFLECDPHJ_OFFSET))(this, a1);
		}

		::System::Void MGMEHJGMEAD(::RPG::Client::MonoExUICamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + HHLKOEICAHB_MGMEHJGMEAD_OFFSET))(this, a1);
		}

		::System::Void BAKMPHKDCEG(::NEAHEDAOJFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEAHEDAOJFF*))((::PBYTE)hIl2Cpp + HHLKOEICAHB_BAKMPHKDCEG_OFFSET))(this, a1);
		}

		::System::Void OKMMDGOHMCA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HHLKOEICAHB_OKMMDGOHMCA_OFFSET))(this, a1, a2);
		}

		::System::Void DDFDCBJBHPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKOEICAHB_DDFDCBJBHPK_OFFSET))(this);
		}

		::System::Void JGKNILPPBPG(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + HHLKOEICAHB_JGKNILPPBPG_OFFSET))(this, a1);
		}

		::System::Void CHCINCOCLJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKOEICAHB_CHCINCOCLJA_OFFSET))(this);
		}

		::System::Void JMEFMOPDIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKOEICAHB_JMEFMOPDIHL_OFFSET))(this);
		}

		::System::Void EJMNGMMFOAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKOEICAHB_EJMNGMMFOAN_OFFSET))(this);
		}

		::System::Boolean AOFIPLFLLFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKOEICAHB_AOFIPLFLLFA_OFFSET))(this);
		}

		::System::Void GBJLPPFCAFH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HHLKOEICAHB_GBJLPPFCAFH_OFFSET))(this, a1, a2);
		}

		::System::Void EPFKCKNKAJF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHLKOEICAHB_EPFKCKNKAJF_OFFSET))(this, a1);
		}

		::System::Single MPBDICEAINN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKOEICAHB_MPBDICEAINN_OFFSET))(this);
		}

		::System::Void AOMEHCCGGAG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HHLKOEICAHB_AOMEHCCGGAG_OFFSET))(this, a1);
		}

		::System::Void KCMIACJFEKF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHLKOEICAHB_KCMIACJFEKF_OFFSET))(this, a1);
		}

		::System::Void DDAEDMNAPDM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHLKOEICAHB_DDAEDMNAPDM_OFFSET))(this, a1);
		}

	};
