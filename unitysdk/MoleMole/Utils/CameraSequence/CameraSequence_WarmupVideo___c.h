#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F79DF0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F79E30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C___WARMUPVIDEO_B__10_0_OFFSET UNITYSDK_OFFSET(0x18F79E40)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C___WARMUPVIDEO_B__10_1_OFFSET UNITYSDK_OFFSET(0x18F79E50)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_WarmupVideo___c_TypeDefinitionIndex = 50350;

	class CameraSequence_WarmupVideo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraSequence_WarmupVideo___c_TypeDefinitionIndex)->GetStaticField(0x48E30);
		}
		static ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>** StaticGet___9__10_1()
		{
			return (::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequence_WarmupVideo___c_TypeDefinitionIndex)->GetStaticField(0x48E38);
		}
		static ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequence_WarmupVideo___c_TypeDefinitionIndex)->GetStaticField(0x48E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C__CTOR_OFFSET))(this);
		}

		::System::Void __WarmupVideo_b__10_0(::MoleMole::MultipleVideoPlayerManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C___WARMUPVIDEO_B__10_0_OFFSET))(this, manager);
		}

		::System::Void __WarmupVideo_b__10_1(::MoleMole::MultipleVideoPlayerManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO___C___WARMUPVIDEO_B__10_1_OFFSET))(this, manager);
		}
	};
}
