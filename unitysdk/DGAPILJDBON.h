#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Transform; }

#define DGAPILJDBON_CTOR_OFFSET UNITYSDK_OFFSET(0xE837140)
#define DGAPILJDBON_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE837540)
#define DGAPILJDBON_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xE8376B0)
#define DGAPILJDBON_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0xE837710)
#define DGAPILJDBON_NIOPOKCOKKB_OFFSET UNITYSDK_OFFSET(0xE837500)

inline static constexpr unsigned int DGAPILJDBON_TypeDefinitionIndex = 74189;

	class DGAPILJDBON : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* PDHKKDGOBEL; // 0x10
		::EAPGFKLGCDH FMJPMFEDIJL; // 0x18
		::RPG::Client::ParkourGame::EffectConfig EABKOHGCHFP; // 0x28
		::System::String* GFNAPNFFGPJ; // 0x50
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::ParkourGame::EffectConfig a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::ParkourGame::EffectConfig))((::PBYTE)hIl2Cpp + DGAPILJDBON_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MonoEffect* NIOPOKCOKKB()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAPILJDBON_NIOPOKCOKKB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAPILJDBON_DISPOSE_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAPILJDBON_JJNFOPNOPBF_OFFSET))(this);
		}

		::System::Void LNGDBLEKGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAPILJDBON_LNGDBLEKGHG_OFFSET))(this);
		}

	};
