#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_AFTERIMAGE_ACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0x1C5A4A60)
#define MOLEMOLE_AFTERIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C5A24E0)
#define MOLEMOLE_AFTERIMAGE_BJHCBDJFOND_OFFSET UNITYSDK_OFFSET(0x1C5A4CA0)
#define MOLEMOLE_AFTERIMAGE_DEACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0x1C5A5610)
#define MOLEMOLE_AFTERIMAGE_ENFHFBCFAPP_OFFSET UNITYSDK_OFFSET(0x1C5A3DA0)
#define MOLEMOLE_AFTERIMAGE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C5A2DD0)
#define MOLEMOLE_AFTERIMAGE_GENERALTRANSDICT_OFFSET UNITYSDK_OFFSET(0x1C5A2530)
#define MOLEMOLE_AFTERIMAGE_GET_IMAGELIFETIME_OFFSET UNITYSDK_OFFSET(0x1C5A2480)
#define MOLEMOLE_AFTERIMAGE_HAPPLFGJOOL_OFFSET UNITYSDK_OFFSET(0x1C5A5710)
#define MOLEMOLE_AFTERIMAGE_ICCHAKCCKEA_OFFSET UNITYSDK_OFFSET(0x1C5A3E00)
#define MOLEMOLE_AFTERIMAGE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C5A3C30)
#define MOLEMOLE_AFTERIMAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C5A2D70)
#define MOLEMOLE_AFTERIMAGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C5A2D20)
#define MOLEMOLE_AFTERIMAGE_PBJNJCMEFLH_OFFSET UNITYSDK_OFFSET(0x1C5A59C0)
#define MOLEMOLE_AFTERIMAGE_PJDNMAIAHDB_OFFSET UNITYSDK_OFFSET(0x1C5A2E20)
#define MOLEMOLE_AFTERIMAGE_SET_IMAGELIFETIME_OFFSET UNITYSDK_OFFSET(0x1C5A24D0)
#define MOLEMOLE_AFTERIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A5660)

namespace MoleMole
{
	inline static constexpr unsigned int AfterImage_TypeDefinitionIndex = 74622;

	class AfterImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 ImageLimit = 0x14; // 0x0
		::System::Boolean UseLowPrefab; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Animator* TargetAnimator; // 0x20
		::UnityEngine::Transform* TargetRoot; // 0x28
		::UnityEngine::Transform* BoneToot; // 0x30
		::System::Boolean useTargetPos; // 0x38
		::System::Boolean useFrameMode; // 0x39
		::System::Byte _padding1[0x2];
		::System::Single timeLimit; // 0x3C
		::System::Int32 imageNumber; // 0x40
		::System::Single DCLKKOKPNFF; // 0x44
		::Il2CppArray<::System::Object*>* materialProperty; // 0x48
		::System::Boolean useFixedMaterial; // 0x50
		::System::Byte _padding2[0x7];
		::UnityEngine::Material* fixedMaterial; // 0x58
		::System::Boolean use2ndFixedMaterial; // 0x60
		::System::Byte _padding3[0x7];
		::UnityEngine::Material* fixedMaterial2nd; // 0x68
		::System::Boolean SimpleMode; // 0x70
		::System::Boolean Acitveed; // 0x71
		::System::Byte _padding4[0x2];
		::System::Single HPCILAJBBHH; // 0x74
		::System::Single FNIOPKPHDEH; // 0x78
		::System::Byte _padding5[0x4];
		::Il2CppArray<::System::Single>* NJIFHAAEHAK; // 0x80
		::System::Int32 BCKPCGHKHNA; // 0x88
		::System::Int32 GOPEAHLJLED; // 0x8C
		::System::Int32 ICEFMKGBGAG; // 0x90
		::System::Byte _padding6[0x4];
		::Il2CppArray<::UnityEngine::Mesh*>* LMGFBIOGBMK; // 0x98
		::System::Object* GIPKPMCFLPG; // 0xA0
		::Il2CppArray<::Il2CppArray<::UnityEngine::Material*>*>* NMDINPACCPA; // 0xA8
		::System::Object* MNECHKMLNKH; // 0xB0
		::Il2CppArray<::UnityEngine::Transform*>* ALPBJEEMIME; // 0xB8
		::Il2CppArray<::UnityEngine::Vector3>* BFGCKBCHGPP; // 0xC0
		::System::Boolean DEFJLANCGGO; // 0xC8
		::System::Byte _padding7[0x3];
		::UnityEngine::Color GPAILJADJPB; // 0xCC
		::System::Byte _padding8[0x4];
		::UnityEngine::MaterialPropertyBlock* IBPEMADAPNO; // 0xE0
		::Il2CppArray<::UnityEngine::Matrix4x4>* EGLKANNNOJF; // 0xE8
		::UnityEngine::Vector3 JMMMHHGDPPG; // 0xF0
		::System::Byte _padding9[0x4];
		::Il2CppArray<::UnityEngine::MeshFilter*>* DKMIMIMKIGA; // 0x100
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* PDHBJOKBPHP; // 0x108
		::System::Boolean JBJFINAFFKO; // 0x110
		::System::Byte _padding10[0x7];
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::UnityEngine::Transform*>* EDBFNHIHECD; // 0x118
		::UnityEngine::Transform* BAMBDKKCHBB; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE__CTOR_OFFSET))(this);
		}

		::System::Single get_ImageLifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_GET_IMAGELIFETIME_OFFSET))(this);
		}

		::System::Void set_ImageLifeTime(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_SET_IMAGELIFETIME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void GeneralTransDict(::UnityEngine::GameObject* AFIAGMMKEHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_GENERALTRANSDICT_OFFSET))(this, AFIAGMMKEHB);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ActivateAfterImage(::System::Boolean LANMPFHMHKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_ACTIVATEAFTERIMAGE_OFFSET))(this, LANMPFHMHKN);
		}

		::System::Void DeactivateAfterImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_DEACTIVATEAFTERIMAGE_OFFSET))(this);
		}

		::System::Boolean HAPPLFGJOOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_HAPPLFGJOOL_OFFSET))(this);
		}

		::System::Void ENFHFBCFAPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_ENFHFBCFAPP_OFFSET))(this);
		}

		::System::Void ICCHAKCCKEA(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_ICCHAKCCKEA_OFFSET))(this, ABHBKFJKINO);
		}

		::UnityEngine::Material* PBJNJCMEFLH()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_PBJNJCMEFLH_OFFSET))(this);
		}

		::System::Void BJHCBDJFOND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_BJHCBDJFOND_OFFSET))(this);
		}

		::System::Void PJDNMAIAHDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_PJDNMAIAHDB_OFFSET))(this);
		}
	};
}
