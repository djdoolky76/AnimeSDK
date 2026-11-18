#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYOEMOTION_PATHPROPDICT_GETPATHINDEX_OFFSET UNITYSDK_OFFSET(0x1D5A0C30)
#define MIHOYOEMOTION_PATHPROPDICT_GETPATH_OFFSET UNITYSDK_OFFSET(0x1D5A0640)
#define MIHOYOEMOTION_PATHPROPDICT_GETPROPINDEX_OFFSET UNITYSDK_OFFSET(0x1D5A1A40)
#define MIHOYOEMOTION_PATHPROPDICT_GETPROP_OFFSET UNITYSDK_OFFSET(0x1D5A1450)
#define MIHOYOEMOTION_PATHPROPDICT_GET_DICT_OFFSET UNITYSDK_OFFSET(0x1D5A0490)
#define MIHOYOEMOTION_PATHPROPDICT_ISDICTINITED_OFFSET UNITYSDK_OFFSET(0x1D5A0310)
#define MIHOYOEMOTION_PATHPROPDICT_SAVE_OFFSET UNITYSDK_OFFSET(0x1D5A2260)
#define MIHOYOEMOTION_PATHPROPDICT_SET_DICT_OFFSET UNITYSDK_OFFSET(0x1D5A05E0)
#define MIHOYOEMOTION_PATHPROPDICT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5A23E0)
#define MIHOYOEMOTION_PATHPROPDICT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A22A0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int PathPropDict_TypeDefinitionIndex = 38075;

	class PathPropDict : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::miHoYoEmotion::PathPropDict** StaticGet_dict()
		{
			return (::miHoYoEmotion::PathPropDict**)Il2CppClass::FromTypeDefinitionIndex(PathPropDict_TypeDefinitionIndex)->GetStaticField(0x2DC50);
		}
		static ::System::Boolean* StaticGet_DYNAMIC_ADD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PathPropDict_TypeDefinitionIndex)->GetStaticField(0x9E80);
		}
		// static const ::System::Int32 PATH_STEP = 0x3E8; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* pathList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* propList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDictInited()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_ISDICTINITED_OFFSET))();
		}

		static ::miHoYoEmotion::PathPropDict* get_Dict()
		{
			return ((::miHoYoEmotion::PathPropDict*(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GET_DICT_OFFSET))();
		}

		static ::System::Void set_Dict(::miHoYoEmotion::PathPropDict* value)
		{
			return ((::System::Void(*)(::miHoYoEmotion::PathPropDict*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_SET_DICT_OFFSET))(value);
		}

		static ::System::String* GetPath(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GETPATH_OFFSET))(index);
		}

		static ::System::Int32 GetPathIndex(::System::String* path)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GETPATHINDEX_OFFSET))(path);
		}

		static ::System::String* GetProp(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GETPROP_OFFSET))(index);
		}

		static ::System::Int32 GetPropIndex(::System::String* prop)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_GETPROPINDEX_OFFSET))(prop);
		}

		static ::System::Void Save()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PATHPROPDICT_SAVE_OFFSET))();
		}
	};
}
