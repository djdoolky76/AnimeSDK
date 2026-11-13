#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSet3CFreeLook3rdCameraNearClippingPlane; }
namespace RPG::GameCore { class TaskContext; }

#define JGLDLLFGPAE_CTOR_OFFSET UNITYSDK_OFFSET(0x19351B50)
#define JGLDLLFGPAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19351B90)
#define JGLDLLFGPAE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x19351B80)
#define JGLDLLFGPAE_MPEKHANKCCJ_OFFSET UNITYSDK_OFFSET(0x19351C30)
#define JGLDLLFGPAE_ONSKIP_OFFSET UNITYSDK_OFFSET(0x19351BD0)
#define JGLDLLFGPAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19351D10)

inline static constexpr unsigned int JGLDLLFGPAE_TypeDefinitionIndex = 53591;

	class JGLDLLFGPAE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane*))((::PBYTE)hIl2Cpp + JGLDLLFGPAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLDLLFGPAE_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLDLLFGPAE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLDLLFGPAE_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLDLLFGPAE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void MPEKHANKCCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLDLLFGPAE_MPEKHANKCCJ_OFFSET))(this);
		}

	};
