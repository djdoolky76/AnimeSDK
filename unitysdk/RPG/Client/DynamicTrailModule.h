#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/DynamicTrailModule_GBBLLBAMFPC.h"
namespace RPG::Client { class DynamicTrailModule_CHFHAKMMMGD; }
namespace RPG::Client { class DynamicTrailModule_PNNNHOHCKNN; }
namespace RPG::Client::TAUtils { template <typename T> class CircularBuffer_1; }
namespace RPG::Client::TAUtils { template <typename T> class ReusableList_1; }
namespace System { class Object; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DYNAMICTRAILMODULE_AEEJNBDIGCF_OFFSET UNITYSDK_OFFSET(0xCD06AF0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_BELOLPNDHBK_OFFSET UNITYSDK_OFFSET(0xCD066C0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_BOCCGJKHJCL_OFFSET UNITYSDK_OFFSET(0xCD06C90)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CMOMAMJMOFH_OFFSET UNITYSDK_OFFSET(0xCD05520)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD074D0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_EJECPELEJKF_OFFSET UNITYSDK_OFFSET(0xCD03870)
#define RPG_CLIENT_DYNAMICTRAILMODULE_EOKPHEGDINL_OFFSET UNITYSDK_OFFSET(0xCD03780)
#define RPG_CLIENT_DYNAMICTRAILMODULE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCD053F0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_IFNKEKEADHF_OFFSET UNITYSDK_OFFSET(0xCD03060)
#define RPG_CLIENT_DYNAMICTRAILMODULE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCD02E90)
#define RPG_CLIENT_DYNAMICTRAILMODULE_LIOHEPIFNBM_OFFSET UNITYSDK_OFFSET(0xCD06420)
#define RPG_CLIENT_DYNAMICTRAILMODULE_MMGGIDMGOCA_OFFSET UNITYSDK_OFFSET(0xCD034F0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_NGFDNADFNGC_OFFSET UNITYSDK_OFFSET(0xCD055C0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_OCHNBCJJNFK_OFFSET UNITYSDK_OFFSET(0xCD03190)
#define RPG_CLIENT_DYNAMICTRAILMODULE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xCD03430)
#define RPG_CLIENT_DYNAMICTRAILMODULE_PAKEAHGMCDO_OFFSET UNITYSDK_OFFSET(0xCD05080)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicTrailModule_TypeDefinitionIndex = 70441;

	class DynamicTrailModule : public ::System::Object
	{
	public:
		::UnityEngine::Transform* StartPoint; // 0x10
		::UnityEngine::Transform* EndPoint; // 0x18
		::System::Int32 TrailLength; // 0x20
		::System::Single EmitInterval; // 0x24
		::System::Single TrailDuration; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* MeshOrigin; // 0x30
		::System::Boolean TrailInterpolation; // 0x38
		::System::Byte _padding1[0x3];
		::System::Int32 InterpolationSegments; // 0x3C
		::UnityEngine::Material* TrailMaterial; // 0x40
		::UnityEngine::AnimationCurve* WidthCurve; // 0x48
		::UnityEngine::AnimationCurve* AlphaCurve; // 0x50
		::UnityEngine::Gradient* ColorGradient; // 0x58
		::RPG::Client::TAUtils::CircularBuffer_1<::System::Object*>* _TrailPoints; // 0x60
		::RPG::Client::TAUtils::ReusableList_1<::System::Object*>* _InterpolatedPoints; // 0x68
		::UnityEngine::Mesh* _TrailMesh; // 0x70
		::System::Single _LifeTime; // 0x78
		::System::Single _LastEmitTime; // 0x7C
		::Il2CppArray<::UnityEngine::Vector3>* _CachedVertices; // 0x80
		::Il2CppArray<::UnityEngine::Vector2>* _CachedUVs; // 0x88
		::Il2CppArray<::UnityEngine::Color>* _CachedColors; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* _CachedNormals; // 0x98
		::Il2CppArray<::UnityEngine::Vector3>* _CachedDirections; // 0xA0
		::Il2CppArray<::UnityEngine::Vector3>* _CachedCenters; // 0xA8
		::Il2CppArray<::System::Int32>* _CachedTriangles; // 0xB0
		::Il2CppArray<::UnityEngine::Vector3>* _CachedStartPositions; // 0xB8
		::Il2CppArray<::UnityEngine::Vector3>* _CachedEndPositions; // 0xC0
		::Il2CppArray<::System::Single>* _CachedTimes; // 0xC8
		::RPG::Client::DynamicTrailModule_CHFHAKMMMGD* _CachedStartSpline; // 0xD0
		::RPG::Client::DynamicTrailModule_CHFHAKMMMGD* _CachedEndSpline; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void IFNKEKEADHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_IFNKEKEADHF_OFFSET))(this);
		}

		::System::Void MMGGIDMGOCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_MMGGIDMGOCA_OFFSET))(this);
		}

		::System::Void NGFDNADFNGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_NGFDNADFNGC_OFFSET))(this);
		}

		::RPG::Client::DynamicTrailModule_GBBLLBAMFPC LIOHEPIFNBM(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::RPG::Client::DynamicTrailModule_CHFHAKMMMGD* a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::DynamicTrailModule_GBBLLBAMFPC(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::RPG::Client::DynamicTrailModule_CHFHAKMMMGD*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_LIOHEPIFNBM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BOCCGJKHJCL(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2, ::RPG::Client::DynamicTrailModule_PNNNHOHCKNN* a3, ::System::Int32 a4, ::System::Object* a5, ::System::Object* a6, ::System::Object* a7, ::System::Object* a8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::RPG::Client::DynamicTrailModule_PNNNHOHCKNN*, ::System::Int32, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_BOCCGJKHJCL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::UnityEngine::Vector3 BELOLPNDHBK(::RPG::Client::DynamicTrailModule_GBBLLBAMFPC a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::DynamicTrailModule_GBBLLBAMFPC, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_BELOLPNDHBK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AEEJNBDIGCF(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_AEEJNBDIGCF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EOKPHEGDINL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_EOKPHEGDINL_OFFSET))(this);
		}

		::System::Void EJECPELEJKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_EJECPELEJKF_OFFSET))(this);
		}

		::System::Void OCHNBCJJNFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_OCHNBCJJNFK_OFFSET))(this);
		}

		::System::Void CMOMAMJMOFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CMOMAMJMOFH_OFFSET))(this);
		}

		::System::Void PAKEAHGMCDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_PAKEAHGMCDO_OFFSET))(this);
		}

	};
}
