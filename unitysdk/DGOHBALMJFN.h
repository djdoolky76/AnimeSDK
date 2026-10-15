#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDHODAPAOMM.h"
namespace RPG::Client { class MonoWavingBlockControl; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Nullable; }
namespace UnityEngine { class GameObject; }

#define DGOHBALMJFN_CTOR_OFFSET UNITYSDK_OFFSET(0xE85AFC0)
#define DGOHBALMJFN_DJCBGDDOLBL_OFFSET UNITYSDK_OFFSET(0xE85B230)
#define DGOHBALMJFN_HJBIAPFLPAI_OFFSET UNITYSDK_OFFSET(0xE85B1B0)
#define DGOHBALMJFN_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE85B010)
#define DGOHBALMJFN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE85AFD0)
#define DGOHBALMJFN_NNNGFJMFLON_OFFSET UNITYSDK_OFFSET(0xE85B050)

inline static constexpr unsigned int DGOHBALMJFN_TypeDefinitionIndex = 57380;

	class DGOHBALMJFN : public ::HDHODAPAOMM
	{
	public:
		::RPG::Client::MonoWavingBlockControl* GIGFMBDOPOH; // 0x18
		::System::Nullable* OBGJMDKPNCC; // 0x20
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + DGOHBALMJFN_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOHBALMJFN_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOHBALMJFN_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void NNNGFJMFLON(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DGOHBALMJFN_NNNGFJMFLON_OFFSET))(this, a1);
		}

		::System::Void DJCBGDDOLBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOHBALMJFN_DJCBGDDOLBL_OFFSET))(this);
		}

		::System::Void HJBIAPFLPAI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGOHBALMJFN_HJBIAPFLPAI_OFFSET))(this, a1);
		}

	};
