#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Transform; }

#define DGAPILJDBON_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAAE50)
#define DGAPILJDBON_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADAB260)
#define DGAPILJDBON_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x1ADAB3D0)
#define DGAPILJDBON_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0x1ADAB430)
#define DGAPILJDBON_NIOPOKCOKKB_OFFSET UNITYSDK_OFFSET(0x1ADAB220)

inline static constexpr unsigned int DGAPILJDBON_TypeDefinitionIndex = 76337;

	class DGAPILJDBON : public ::System::Object
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x10
		::RPG::Client::ParkourGame::EffectConfig EABKOHGCHFP; // 0x18
		::System::Func_1<::System::Boolean>* PDHKKDGOBEL; // 0x40
		::EAPGFKLGCDH FMJPMFEDIJL; // 0x48
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
