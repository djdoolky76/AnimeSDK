#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class B196ACFA9D2AE729; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class GUIContent; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x24D9910)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMID_OFFSET UNITYSDK_OFFSET(0x1E86100)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMSIZE_OFFSET UNITYSDK_OFFSET(0x180EE10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x1678410)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLORRAMP_OFFSET UNITYSDK_OFFSET(0x3899010)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLOR_OFFSET UNITYSDK_OFFSET(0x3899020)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x3899030)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOATRAMP_OFFSET UNITYSDK_OFFSET(0x3899900)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x3899910)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISINT_OFFSET UNITYSDK_OFFSET(0x3899920)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISPATHFILE_OFFSET UNITYSDK_OFFSET(0x3899930)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISRAMP_OFFSET UNITYSDK_OFFSET(0x3899950)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISSTRING_OFFSET UNITYSDK_OFFSET(0x3899970)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISTOGGLE_OFFSET UNITYSDK_OFFSET(0x3899980)
#define HOUDINIENGINEUNITY_HEU_PARAMETERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x3899990)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterData_TypeDefinitionIndex = 18147;

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
		::UnityEngine::E46B881AA2636190 _color; // 0x5C
		::System::Byte _padding3[0x4];
		::UnityEngine::B196ACFA9D2AE729* _gradient; // 0x70
		::UnityEngine::FAED0374422E783A* _animCurve; // 0x78
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

		::System::Boolean IsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOAT_OFFSET))(this);
		}

		::System::Int32 get_ParentID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARENTID_OFFSET))(this);
		}

		::System::Boolean IsRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISRAMP_OFFSET))(this);
		}

		::System::Boolean IsToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISTOGGLE_OFFSET))(this);
		}

		::System::Boolean IsPathFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISPATHFILE_OFFSET))(this);
		}

		::System::Boolean IsInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISINT_OFFSET))(this);
		}

		::System::Boolean IsButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISBUTTON_OFFSET))(this);
		}

		::System::Boolean IsColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLOR_OFFSET))(this);
		}

		::System::Boolean IsColorRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISCOLORRAMP_OFFSET))(this);
		}

		::System::Int32 get_ParmID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMID_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterData* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_ParameterData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Boolean IsFloatRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISFLOATRAMP_OFFSET))(this);
		}

		::System::Int32 get_ParmSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_GET_PARMSIZE_OFFSET))(this);
		}

		::System::Boolean IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA_ISSTRING_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERDATA__CTOR_OFFSET))(this);
		}
	};
}
