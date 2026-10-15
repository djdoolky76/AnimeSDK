#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpenCocoon; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KBDJIHAKDOD_CTOR_OFFSET UNITYSDK_OFFSET(0xB2EA3E0)
#define KBDJIHAKDOD_MOCCGOGPMKG_OFFSET UNITYSDK_OFFSET(0xB2EAEA0)
#define KBDJIHAKDOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2EA430)
#define KBDJIHAKDOD__ONPAGECANCELCLOSE_OFFSET UNITYSDK_OFFSET(0xB2EB060)
#define KBDJIHAKDOD__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0xB2EAF70)

inline static constexpr unsigned int KBDJIHAKDOD_TypeDefinitionIndex = 58239;

	class KBDJIHAKDOD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenCocoon* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenCocoon*))((::PBYTE)hIl2Cpp + KBDJIHAKDOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDJIHAKDOD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean MOCCGOGPMKG(::RPG::GameCore::PropComponent* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::UInt32))((::PBYTE)hIl2Cpp + KBDJIHAKDOD_MOCCGOGPMKG_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPageConfirmClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBDJIHAKDOD__ONPAGECONFIRMCLOSE_OFFSET))(this, a1);
		}

		::System::Void _OnPageCancelClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDJIHAKDOD__ONPAGECANCELCLOSE_OFFSET))(this);
		}

	};
