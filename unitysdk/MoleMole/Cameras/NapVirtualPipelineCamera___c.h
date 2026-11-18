#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C_MAFBNNJCHLJ_OFFSET UNITYSDK_OFFSET(0x163E3E20)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163E3DD0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163E3E10)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualPipelineCamera___c_TypeDefinitionIndex = 47284;

	class NapVirtualPipelineCamera___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapVirtualPipelineCamera___c_TypeDefinitionIndex)->GetStaticField(0x343B0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NapVirtualPipelineCamera___c_TypeDefinitionIndex)->GetStaticField(0x343B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean MAFBNNJCHLJ(::UnityEngine::RaycastHit OFLHPPDJLNL)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C_MAFBNNJCHLJ_OFFSET))(this, OFLHPPDJLNL);
		}
	};
}
