#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class String; }

#define ROOTMOTION_LAYERMASKEXTENSIONS_ADDTOMASK_OFFSET UNITYSDK_OFFSET(0x1FAEB110)
#define ROOTMOTION_LAYERMASKEXTENSIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1FAEAE50)
#define ROOTMOTION_LAYERMASKEXTENSIONS_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1FAEAF40)
#define ROOTMOTION_LAYERMASKEXTENSIONS_CREATE_OFFSET UNITYSDK_OFFSET(0x1FAEAE60)
#define ROOTMOTION_LAYERMASKEXTENSIONS_INVERSE_OFFSET UNITYSDK_OFFSET(0x1FAEB100)
#define ROOTMOTION_LAYERMASKEXTENSIONS_LAYERNUMBERSTOMASK_OFFSET UNITYSDK_OFFSET(0x1FAEB020)
#define ROOTMOTION_LAYERMASKEXTENSIONS_MASKTONAMES_OFFSET UNITYSDK_OFFSET(0x1FAEB210)
#define ROOTMOTION_LAYERMASKEXTENSIONS_MASKTONUMBERS_OFFSET UNITYSDK_OFFSET(0x1FAEB360)
#define ROOTMOTION_LAYERMASKEXTENSIONS_MASKTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1FAEB4E0)
#define ROOTMOTION_LAYERMASKEXTENSIONS_MASKTOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAEB440)
#define ROOTMOTION_LAYERMASKEXTENSIONS_NAMESTOMASK_OFFSET UNITYSDK_OFFSET(0x1FAEAED0)
#define ROOTMOTION_LAYERMASKEXTENSIONS_REMOVEFROMMASK_OFFSET UNITYSDK_OFFSET(0x1FAEB190)

namespace RootMotion
{
	inline static constexpr unsigned int LayerMaskExtensions_TypeDefinitionIndex = 36925;

	class LayerMaskExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean Contains(::UnityEngine::LayerMask mask, ::System::Int32 layer)
		{
			return ((::System::Boolean(*)(::UnityEngine::LayerMask, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_CONTAINS_OFFSET))(mask, layer);
		}

		static ::UnityEngine::LayerMask Create(::Il2CppArray<::System::String*>* layerNames)
		{
			return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_CREATE_OFFSET))(layerNames);
		}

		static ::UnityEngine::LayerMask Create_1(::Il2CppArray<::System::Int32>* layerNumbers)
		{
			return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_CREATE_1_OFFSET))(layerNumbers);
		}

		static ::UnityEngine::LayerMask NamesToMask(::Il2CppArray<::System::String*>* layerNames)
		{
			return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_NAMESTOMASK_OFFSET))(layerNames);
		}

		static ::UnityEngine::LayerMask LayerNumbersToMask(::Il2CppArray<::System::Int32>* layerNumbers)
		{
			return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_LAYERNUMBERSTOMASK_OFFSET))(layerNumbers);
		}

		static ::UnityEngine::LayerMask Inverse(::UnityEngine::LayerMask original)
		{
			return ((::UnityEngine::LayerMask(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_INVERSE_OFFSET))(original);
		}

		static ::UnityEngine::LayerMask AddToMask(::UnityEngine::LayerMask original, ::Il2CppArray<::System::String*>* layerNames)
		{
			return ((::UnityEngine::LayerMask(*)(::UnityEngine::LayerMask, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_ADDTOMASK_OFFSET))(original, layerNames);
		}

		static ::UnityEngine::LayerMask RemoveFromMask(::UnityEngine::LayerMask original, ::Il2CppArray<::System::String*>* layerNames)
		{
			return ((::UnityEngine::LayerMask(*)(::UnityEngine::LayerMask, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_REMOVEFROMMASK_OFFSET))(original, layerNames);
		}

		static ::Il2CppArray<::System::String*>* MaskToNames(::UnityEngine::LayerMask original)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_MASKTONAMES_OFFSET))(original);
		}

		static ::Il2CppArray<::System::Int32>* MaskToNumbers(::UnityEngine::LayerMask original)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_MASKTONUMBERS_OFFSET))(original);
		}

		static ::System::String* MaskToString(::UnityEngine::LayerMask original)
		{
			return ((::System::String*(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_MASKTOSTRING_OFFSET))(original);
		}

		static ::System::String* MaskToString_1(::UnityEngine::LayerMask original, ::System::String* delimiter)
		{
			return ((::System::String*(*)(::UnityEngine::LayerMask, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_LAYERMASKEXTENSIONS_MASKTOSTRING_1_OFFSET))(original, delimiter);
		}
	};
}
