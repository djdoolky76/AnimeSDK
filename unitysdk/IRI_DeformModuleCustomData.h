#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_DeformModuleCustomData_AutoFitBoundsMode.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/IRI_DeformModuleCustomData_IRI_DataPerObject.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Transform; }

#define IRI_DEFORMMODULECUSTOMDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB86BCF0)
#define IRI_DEFORMMODULECUSTOMDATA_COLLECTOBJECT_OFFSET UNITYSDK_OFFSET(0xB8688C0)
#define IRI_DEFORMMODULECUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xB86BCC0)
#define IRI_DEFORMMODULECUSTOMDATA_ENCODEDATA_OFFSET UNITYSDK_OFFSET(0xB86A810)
#define IRI_DEFORMMODULECUSTOMDATA_GETELEMENTMATRIXLIST_OFFSET UNITYSDK_OFFSET(0xB86A370)
#define IRI_DEFORMMODULECUSTOMDATA_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xB868310)
#define IRI_DEFORMMODULECUSTOMDATA_GET_MPB_OFFSET UNITYSDK_OFFSET(0xB868580)
#define IRI_DEFORMMODULECUSTOMDATA_HDMLLHLFGFL_OFFSET UNITYSDK_OFFSET(0xB86A9F0)
#define IRI_DEFORMMODULECUSTOMDATA_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xB86BB20)
#define IRI_DEFORMMODULECUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB86A320)
#define IRI_DEFORMMODULECUSTOMDATA_RESETCUSTOMDEFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0xB8682B0)
#define IRI_DEFORMMODULECUSTOMDATA_RESETDATA_OFFSET UNITYSDK_OFFSET(0xB8698B0)
#define IRI_DEFORMMODULECUSTOMDATA_SETSIZE_OFFSET UNITYSDK_OFFSET(0xB86AA80)
#define IRI_DEFORMMODULECUSTOMDATA_SET_MPB_OFFSET UNITYSDK_OFFSET(0xB8685F0)

inline static constexpr unsigned int IRI_DeformModuleCustomData_TypeDefinitionIndex = 48201;

	class IRI_DeformModuleCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IRI_DeformModuleCustomData_AutoFitBoundsMode FitBoundsMode; // 0x18
		::UnityEngine::Vector3 BoundsStartPos; // 0x1C
		::UnityEngine::Vector3 BoundsSize; // 0x28
		::System::Boolean IfUseCustomDeformBounds; // 0x34
		::System::Byte _padding0[0x3];
		::UnityEngine::Bounds CustomDeformBounds; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* ModuleObjDatas; // 0x50
		::UnityEngine::MaterialPropertyBlock* LCAGOLEJJJK; // 0x58
		static ::System::Single* StaticGet_LFBAEACBCCJ()
		{
			return (::System::Single*)UnitySDK::FromName("", "IRI_DeformModuleCustomData")->GetStaticField(0x137A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_CCTOR_OFFSET))();
		}

		::System::Void ResetCustomDeformBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_RESETCUSTOMDEFORMBOUNDS_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* get_Mpb()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_GET_MPB_OFFSET))(this);
		}

		::System::Void set_Mpb(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_SET_MPB_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void CollectObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_COLLECTOBJECT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_ONENABLE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetElementMatrixList(::UnityEngine::Transform* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_GETELEMENTMATRIXLIST_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 EncodeData(::IRI_DeformModuleCustomData_IRI_DataPerObject a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::IRI_DeformModuleCustomData_IRI_DataPerObject))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_ENCODEDATA_OFFSET))(this, a1);
		}

		::System::Void HDMLLHLFGFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_HDMLLHLFGFL_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_RESETDATA_OFFSET))(this);
		}

		::System::Void SetSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_SETSIZE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

	};
