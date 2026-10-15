#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDHODAPAOMM.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client { class MonoWavingBlockControl; }
namespace RPG::GameCore { class PropComponent; }
namespace UnityEngine { class GameObject; }

#define DGOHBALMJFN_CTOR_OFFSET UNITYSDK_OFFSET(0xE850160)
#define DGOHBALMJFN_DJCBGDDOLBL_OFFSET UNITYSDK_OFFSET(0xE8503D0)
#define DGOHBALMJFN_HJBIAPFLPAI_OFFSET UNITYSDK_OFFSET(0xE850350)
#define DGOHBALMJFN_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE8501B0)
#define DGOHBALMJFN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE850170)
#define DGOHBALMJFN_NNNGFJMFLON_OFFSET UNITYSDK_OFFSET(0xE8501F0)

inline static constexpr unsigned int DGOHBALMJFN_TypeDefinitionIndex = 57380;

	class DGOHBALMJFN : public ::HDHODAPAOMM
	{
	public:
		::RPG::Client::MonoWavingBlockControl* GIGFMBDOPOH; // 0x18
		::System::Nullable_1<::System::Int32> OBGJMDKPNCC; // 0x20
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
