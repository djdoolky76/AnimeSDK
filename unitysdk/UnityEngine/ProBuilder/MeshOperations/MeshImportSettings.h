#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x204E3570)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_QUADS_OFFSET UNITYSDK_OFFSET(0x204E3450)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_SMOOTHINGANGLE_OFFSET UNITYSDK_OFFSET(0x204E3490)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x204E3470)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_QUADS_OFFSET UNITYSDK_OFFSET(0x204E3460)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_SMOOTHINGANGLE_OFFSET UNITYSDK_OFFSET(0x204E34A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x204E3480)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204E34B0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshImportSettings_TypeDefinitionIndex = 45579;

	class MeshImportSettings : public ::System::Object
	{
	public:
		::System::Boolean m_Quads; // 0x10
		::System::Boolean m_Smoothing; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single m_SmoothingThreshold; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_CTOR_OFFSET))(this);
		}

		::System::Boolean get_quads()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_QUADS_OFFSET))(this);
		}

		::System::Void set_quads(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_QUADS_OFFSET))(this, a1);
		}

		::System::Boolean get_smoothing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_SMOOTHING_OFFSET))(this);
		}

		::System::Void set_smoothing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_SMOOTHING_OFFSET))(this, a1);
		}

		::System::Single get_smoothingAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_SMOOTHINGANGLE_OFFSET))(this);
		}

		::System::Void set_smoothingAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_SMOOTHINGANGLE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_TOSTRING_OFFSET))(this);
		}

	};
}
