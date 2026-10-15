#pragma once
#include "unitysdk/unitysdk.h"
class WaveFloatingProxy;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define WAVEFLOATING_CTOR_OFFSET UNITYSDK_OFFSET(0xE9F7A70)
#define WAVEFLOATING_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE9F7A20)

	class WaveFloating
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* childrenRenders; // 0x30
		::WaveFloatingProxy* proxyObject; // 0x38
		::System::Int32 bufferId; // 0x40
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* clonedMeshed; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* clonedMaterials; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVEFLOATING_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVEFLOATING_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
