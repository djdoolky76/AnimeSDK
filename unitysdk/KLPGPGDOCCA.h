#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KLPGPGDOCCA_BOJFIJLHACE.h"
class KLPGPGDOCCA_AnimatedItem;
namespace RPG::Client { class GPUParticleTransformLoopAnim; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }

#define KLPGPGDOCCA_CAEEDOFEEBH_OFFSET UNITYSDK_OFFSET(0xB532D20)
#define KLPGPGDOCCA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB533FE0)
#define KLPGPGDOCCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB533FB0)
#define KLPGPGDOCCA_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0xB532080)
#define KLPGPGDOCCA_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB530130)
#define KLPGPGDOCCA_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xB531850)
#define KLPGPGDOCCA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB52FDA0)
#define KLPGPGDOCCA_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB52FFF0)
#define KLPGPGDOCCA_OHHEKEMJLOB_OFFSET UNITYSDK_OFFSET(0xB533DB0)
#define KLPGPGDOCCA_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB533C30)
#define KLPGPGDOCCA_OKKLJMBPFOG_OFFSET UNITYSDK_OFFSET(0xB531E60)
#define KLPGPGDOCCA_OLMFHCLLBNN_OFFSET UNITYSDK_OFFSET(0xB533EF0)
#define KLPGPGDOCCA_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB52FE30)
#define KLPGPGDOCCA_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0xB52FF70)
#define KLPGPGDOCCA_TICK_OFFSET UNITYSDK_OFFSET(0xB5305B0)

inline static constexpr unsigned int KLPGPGDOCCA_TypeDefinitionIndex = 70317;

	class KLPGPGDOCCA : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::ComputeBuffer* DBHNOCDGANH; // 0x38
		::UnityEngine::Quaternion AIIALNAMCLJ; // 0x40
		::System::Single JBJNJAIMFGD; // 0x50
		::System::Boolean GFGGJHIEPMN; // 0x54
		::System::Byte _padding0[0x3];
		::System::Single DADEEMLDLNC; // 0x58
		::UnityEngine::Vector3 BCJIIOELICG; // 0x5C
		::System::Single HDHPNOOMAGE; // 0x68
		static ::System::Int32* StaticGet_EDNMPHPDKDB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KLPGPGDOCCA")->GetStaticField(0x139B0);
		}

		static ::System::Int32* StaticGet_OAIDAOIMMBG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KLPGPGDOCCA")->GetStaticField(0x139B4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLPGPGDOCCA_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_TICK_OFFSET))(this, a1);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void OKKLJMBPFOG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_OKKLJMBPFOG_OFFSET))(this, a1);
		}

		::System::Void HAOBJNHJFGM(::KLPGPGDOCCA_AnimatedItem* a1, ::System::Int32 a2, ::KLPGPGDOCCA_BOJFIJLHACE a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLPGPGDOCCA_AnimatedItem*, ::System::Int32, ::KLPGPGDOCCA_BOJFIJLHACE))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_HAOBJNHJFGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OLMFHCLLBNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_OLMFHCLLBNN_OFFSET))(this, a1);
		}

		::System::Void CAEEDOFEEBH(::KLPGPGDOCCA_AnimatedItem* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KLPGPGDOCCA_AnimatedItem*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_CAEEDOFEEBH_OFFSET))(this, a1, a2);
		}

		::System::Void OHHEKEMJLOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_OHHEKEMJLOB_OFFSET))(this);
		}

		::RPG::Client::GPUParticleTransformLoopAnim* PNIEFOONFOP()
		{
			return ((::RPG::Client::GPUParticleTransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_PNIEFOONFOP_OFFSET))(this);
		}

	};
