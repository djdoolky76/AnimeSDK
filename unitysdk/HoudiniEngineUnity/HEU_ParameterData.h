#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace HoudiniEngineUnity { class HEU_ParameterData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class Gradient; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x126D4D60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_CHILDINDEX_OFFSET UNITYSDK_OFFSET(0x126D3FD0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATMAX_OFFSET UNITYSDK_OFFSET(0x126D4380)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATMIN_OFFSET UNITYSDK_OFFSET(0x126D4370)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATUIMAX_OFFSET UNITYSDK_OFFSET(0x126D43A0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATUIMIN_OFFSET UNITYSDK_OFFSET(0x126D4390)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTMAX_OFFSET UNITYSDK_OFFSET(0x126D4130)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTMIN_OFFSET UNITYSDK_OFFSET(0x126D4070)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTUIMAX_OFFSET UNITYSDK_OFFSET(0x126D42B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTUIMIN_OFFSET UNITYSDK_OFFSET(0x126D41F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x126D3FC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMID_OFFSET UNITYSDK_OFFSET(0x126C0A10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMSIZE_OFFSET UNITYSDK_OFFSET(0x126D3FE0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASMAX_OFFSET UNITYSDK_OFFSET(0x126D4040)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASMIN_OFFSET UNITYSDK_OFFSET(0x126D4030)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASUIMAX_OFFSET UNITYSDK_OFFSET(0x126D4060)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASUIMIN_OFFSET UNITYSDK_OFFSET(0x126D4050)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISASSETPATH_OFFSET UNITYSDK_OFFSET(0x126D44C0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x126D4440)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLORRAMP_OFFSET UNITYSDK_OFFSET(0x126D4400)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLOR_OFFSET UNITYSDK_OFFSET(0x126D4420)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x126D43B0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x126D44D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOATRAMP_OFFSET UNITYSDK_OFFSET(0x126D43F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x126D4000)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFOLDER_OFFSET UNITYSDK_OFFSET(0x126D4430)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISINT_OFFSET UNITYSDK_OFFSET(0x126D3FF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISMULTIPARAM_OFFSET UNITYSDK_OFFSET(0x126D43D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISPATHFILE_OFFSET UNITYSDK_OFFSET(0x126D4020)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISRAMP_OFFSET UNITYSDK_OFFSET(0x126D43E0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISSTRING_OFFSET UNITYSDK_OFFSET(0x126D4010)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISTOGGLE_OFFSET UNITYSDK_OFFSET(0x126D4410)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0x126D4450)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterData_TypeDefinitionIndex = 41522;

	class HEU_ParameterData : public ::System::Object
	{
	public:
		::System::Int32 _unityIndex; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* _name; // 0x18
		::System::String* _labelName; // 0x20
		::System::String* _help; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _childParameterIDs; // 0x30
		::System::Int32 _choiceValue; // 0x38
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Int32>* _intValues; // 0x40
		::Il2CppArray<::System::Single>* _floatValues; // 0x48
		::Il2CppArray<::System::String*>* _stringValues; // 0x50
		::System::Boolean _toggle; // 0x58
		::System::Byte _padding2[0x3];
		::UnityEngine::Color _color; // 0x5C
		::System::Byte _padding3[0x4];
		::UnityEngine::Gradient* _gradient; // 0x70
		::UnityEngine::AnimationCurve* _animCurve; // 0x78
		::Il2CppArray<::UnityEngine::GUIContent*>* _choiceLabels; // 0x80
		::Il2CppArray<::System::String*>* _choiceStringValues; // 0x88
		::Il2CppArray<::System::Int32>* _choiceIntValues; // 0x90
		::HoudiniEngineUnity::HAPI_ParmInfo _parmInfo; // 0x98
		::System::Boolean _showChildren; // 0x12C
		::System::Byte _padding4[0x3];
		::System::String* _fileTypeInfo; // 0x130
		::System::Int32 _folderListChildrenProcessed; // 0x138
		::System::Int32 _tabSelectedIndex; // 0x13C
		::HoudiniEngineUnity::HEU_InputNode* _paramInputNode; // 0x140
		::System::Boolean _hasAssetPathTag; // 0x148
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ParmID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMID_OFFSET))(this);
		}

		::System::Int32 get_ParentID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARENTID_OFFSET))(this);
		}

		::System::Int32 get_ChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_CHILDINDEX_OFFSET))(this);
		}

		::System::Int32 get_ParmSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMSIZE_OFFSET))(this);
		}

		::System::Boolean IsInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISINT_OFFSET))(this);
		}

		::System::Boolean IsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOAT_OFFSET))(this);
		}

		::System::Boolean IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISSTRING_OFFSET))(this);
		}

		::System::Boolean IsPathFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISPATHFILE_OFFSET))(this);
		}

		::System::Boolean HasMin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASMIN_OFFSET))(this);
		}

		::System::Boolean HasMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASMAX_OFFSET))(this);
		}

		::System::Boolean HasUIMin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASUIMIN_OFFSET))(this);
		}

		::System::Boolean HasUIMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_HASUIMAX_OFFSET))(this);
		}

		::System::Int32 get_IntMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTMIN_OFFSET))(this);
		}

		::System::Int32 get_IntMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTMAX_OFFSET))(this);
		}

		::System::Int32 get_IntUIMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTUIMIN_OFFSET))(this);
		}

		::System::Int32 get_IntUIMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_INTUIMAX_OFFSET))(this);
		}

		::System::Single get_FloatMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATMIN_OFFSET))(this);
		}

		::System::Single get_FloatMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATMAX_OFFSET))(this);
		}

		::System::Single get_FloatUIMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATUIMIN_OFFSET))(this);
		}

		::System::Single get_FloatUIMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_FLOATUIMAX_OFFSET))(this);
		}

		::System::Boolean IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCONTAINER_OFFSET))(this);
		}

		::System::Boolean IsMultiParam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISMULTIPARAM_OFFSET))(this);
		}

		::System::Boolean IsRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISRAMP_OFFSET))(this);
		}

		::System::Boolean IsFloatRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOATRAMP_OFFSET))(this);
		}

		::System::Boolean IsColorRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLORRAMP_OFFSET))(this);
		}

		::System::Boolean IsToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISTOGGLE_OFFSET))(this);
		}

		::System::Boolean IsColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLOR_OFFSET))(this);
		}

		::System::Boolean IsFolder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFOLDER_OFFSET))(this);
		}

		::System::Boolean IsButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISBUTTON_OFFSET))(this);
		}

		::UnityEngine::Vector3 ToVector3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_TOVECTOR3_OFFSET))(this);
		}

		::System::Boolean IsAssetPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISASSETPATH_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_ParameterData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
