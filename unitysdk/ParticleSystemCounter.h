#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define PARTICLESYSTEMCOUNTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BF3DF30)
#define PARTICLESYSTEMCOUNTER_CLOSECANVAS_OFFSET UNITYSDK_OFFSET(0x1BF40ED0)
#define PARTICLESYSTEMCOUNTER_COUNTANDDISPLAYPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1BF3EAB0)
#define PARTICLESYSTEMCOUNTER_CREATEEXPORTBUTTON_OFFSET UNITYSDK_OFFSET(0x1BF3F0D0)
#define PARTICLESYSTEMCOUNTER_ENSUREUIINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1BF3E4A0)
#define PARTICLESYSTEMCOUNTER_EXPORTPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1BF40E80)
#define PARTICLESYSTEMCOUNTER_GETGAMEOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x1BF40A40)
#define PARTICLESYSTEMCOUNTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF3DC00)
#define PARTICLESYSTEMCOUNTER_OPENORCLOSEPARTICLESYSTEMCOUNTER_OFFSET UNITYSDK_OFFSET(0x1BF40C90)
#define PARTICLESYSTEMCOUNTER_SAVEPARTICLESYSTEMSTOFILE_OFFSET UNITYSDK_OFFSET(0x1BF3FA30)
#define PARTICLESYSTEMCOUNTER_TOGGLECOUNTER_OFFSET UNITYSDK_OFFSET(0x1BF40E30)
#define PARTICLESYSTEMCOUNTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BF3E1F0)
#define PARTICLESYSTEMCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF410C0)

inline static constexpr unsigned int ParticleSystemCounter_TypeDefinitionIndex = 38694;

class ParticleSystemCounter : public ::UnityEngine::MonoBehaviour
{
public:
	static ::ParticleSystemCounter** StaticGet__instance()
	{
		return (::ParticleSystemCounter**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemCounter_TypeDefinitionIndex)->GetStaticField(0x51130);
	}
	// static const ::System::Int32 kUpdateFrameCount = 0x4; // 0x0
	::System::Boolean enableUpdate; // 0x18
	::System::Byte _padding0[0x7];
	::UnityEngine::UI::Text* counterText; // 0x20
	::UnityEngine::GameObject* canvasObj; // 0x28
	::UnityEngine::UI::Button* exportButton; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* particleSystems; // 0x38
	::System::Int32 frameCounter; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER__CTOR_OFFSET))(this);
	}

	static ::ParticleSystemCounter* get_Instance()
	{
		return ((::ParticleSystemCounter*(*)())((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_GET_INSTANCE_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_UPDATE_OFFSET))(this);
	}

	::System::Int32 CountAndDisplayParticleSystems()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_COUNTANDDISPLAYPARTICLESYSTEMS_OFFSET))(this);
	}

	::System::Void EnsureUIInitialized()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_ENSUREUIINITIALIZED_OFFSET))(this);
	}

	::System::Void CreateExportButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_CREATEEXPORTBUTTON_OFFSET))(this);
	}

	::System::Void SaveParticleSystemsToFile()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_SAVEPARTICLESYSTEMSTOFILE_OFFSET))(this);
	}

	::System::String* GetGameObjectPath(::UnityEngine::Transform* trans)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_GETGAMEOBJECTPATH_OFFSET))(this, trans);
	}

	::System::Void OpenOrCloseParticleSystemCounter()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_OPENORCLOSEPARTICLESYSTEMCOUNTER_OFFSET))(this);
	}

	static ::System::Void ToggleCounter()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_TOGGLECOUNTER_OFFSET))();
	}

	static ::System::Void ExportParticleSystems()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_EXPORTPARTICLESYSTEMS_OFFSET))();
	}

	::System::Void CloseCanvas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_CLOSECANVAS_OFFSET))(this);
	}
};
