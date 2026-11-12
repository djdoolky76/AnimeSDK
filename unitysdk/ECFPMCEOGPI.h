#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
class ILMMNCLCDIM;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }

#define ECFPMCEOGPI_CTOR_OFFSET UNITYSDK_OFFSET(0x13ABD680)
#define ECFPMCEOGPI_EGJKOEJKBLC_OFFSET UNITYSDK_OFFSET(0x13ABD4F0)
#define ECFPMCEOGPI_EJNBJPPGNJF_OFFSET UNITYSDK_OFFSET(0x13ABCF00)
#define ECFPMCEOGPI_FHILCOOPLLC_OFFSET UNITYSDK_OFFSET(0x13ABD030)
#define ECFPMCEOGPI_NLIFDKMPCPP_OFFSET UNITYSDK_OFFSET(0x13ABD230)
#define ECFPMCEOGPI_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x13ABCAD0)
#define ECFPMCEOGPI_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x13ABCC00)

inline static constexpr unsigned int ECFPMCEOGPI_TypeDefinitionIndex = 55489;

	class ECFPMCEOGPI : public ::System::Object
	{
	public:
		::ILMMNCLCDIM* MEKMJHBBAIB; // 0x10
		::CENEFPOMFKG* JGAGMFENBHA; // 0x18
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20
		::System::Boolean BFJAPBAAGFI; // 0x28
		// static const ::System::String* DHBECPGJIDH; // 0x0
		// static const ::System::String* DLCHOBHHLJO; // 0x0
		// static const ::System::String* JNKABLCGNCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFPMCEOGPI_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + ECFPMCEOGPI_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFPMCEOGPI_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void EJNBJPPGNJF(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + ECFPMCEOGPI_EJNBJPPGNJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FHILCOOPLLC(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + ECFPMCEOGPI_FHILCOOPLLC_OFFSET))(this, a1);
		}

		::System::Void NLIFDKMPCPP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECFPMCEOGPI_NLIFDKMPCPP_OFFSET))(this, a1);
		}

		::System::Void EGJKOEJKBLC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECFPMCEOGPI_EGJKOEJKBLC_OFFSET))(this, a1);
		}

	};
