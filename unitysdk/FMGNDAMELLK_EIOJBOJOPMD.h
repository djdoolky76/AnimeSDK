#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FLBIGOCMGBG.h"
namespace RPG::Client { class MonoPlayerAttachmentController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define FMGNDAMELLK_EIOJBOJOPMD_ALNAEEDEENP_OFFSET UNITYSDK_OFFSET(0x15857280)
#define FMGNDAMELLK_EIOJBOJOPMD_BJHBKFHPFLN_OFFSET UNITYSDK_OFFSET(0x15856B10)
#define FMGNDAMELLK_EIOJBOJOPMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15856F00)
#define FMGNDAMELLK_EIOJBOJOPMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15856790)
#define FMGNDAMELLK_EIOJBOJOPMD_EGNMAGMPEDK_OFFSET UNITYSDK_OFFSET(0x15857350)
#define FMGNDAMELLK_EIOJBOJOPMD_NKMPPIDGFJF_OFFSET UNITYSDK_OFFSET(0x158571B0)

inline static constexpr unsigned int FMGNDAMELLK_EIOJBOJOPMD_TypeDefinitionIndex = 60150;

	class FMGNDAMELLK_EIOJBOJOPMD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* PAGLLPFNJED; // 0x10
		::UnityEngine::Transform* DHIPFJBEJPI; // 0x18
		::System::String* HFLDHJHJNCF; // 0x20
		::RPG::Client::MonoPlayerAttachmentController* JIIKAEMELPJ; // 0x28
		::System::String* GFNAPNFFGPJ; // 0x30
		::UnityEngine::Vector3 CGLNAJDDGJH; // 0x38
		::System::Void _ctor(::FLBIGOCMGBG a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLBIGOCMGBG))((::PBYTE)hIl2Cpp + FMGNDAMELLK_EIOJBOJOPMD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNDAMELLK_EIOJBOJOPMD_DISPOSE_OFFSET))(this);
		}

		::System::Void NKMPPIDGFJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNDAMELLK_EIOJBOJOPMD_NKMPPIDGFJF_OFFSET))(this);
		}

		::System::Void ALNAEEDEENP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNDAMELLK_EIOJBOJOPMD_ALNAEEDEENP_OFFSET))(this);
		}

		::System::Boolean BJHBKFHPFLN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNDAMELLK_EIOJBOJOPMD_BJHBKFHPFLN_OFFSET))(this);
		}

		::System::Void EGNMAGMPEDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNDAMELLK_EIOJBOJOPMD_EGNMAGMPEDK_OFFSET))(this);
		}

	};
