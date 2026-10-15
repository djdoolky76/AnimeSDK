#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"
class SerializedWarmupPSO;
namespace System { class String; }

#define DFIFIHGHDFG_CTOR_OFFSET UNITYSDK_OFFSET(0xE82ED80)
#define DFIFIHGHDFG_IIPAEGDMLJN_OFFSET UNITYSDK_OFFSET(0xE82E930)
#define DFIFIHGHDFG_JGGJOFDPBEC_OFFSET UNITYSDK_OFFSET(0xE82EB80)
#define DFIFIHGHDFG_PGIBIIAJNKJ_OFFSET UNITYSDK_OFFSET(0xE82E890)

	class DFIFIHGHDFG : public ::System::Object
	{
	public:
		::System::String* NLAPEHKLIBL; // 0x10
		// static const ::System::Object AGOMDJIJAHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIFIHGHDFG_CTOR_OFFSET))(this);
		}

		::System::String* PGIBIIAJNKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIFIHGHDFG_PGIBIIAJNKJ_OFFSET))(this);
		}

		::Il2CppArray<::SerializedWarmupPSO*>* IIPAEGDMLJN(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::GraphicsDeviceType a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::SerializedWarmupPSO*>*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::GraphicsDeviceType, ::System::Int32))((::PBYTE)hIl2Cpp + DFIFIHGHDFG_IIPAEGDMLJN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JGGJOFDPBEC(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::GraphicsDeviceType a3, ::Il2CppArray<::SerializedWarmupPSO*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::GraphicsDeviceType, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + DFIFIHGHDFG_JGGJOFDPBEC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
