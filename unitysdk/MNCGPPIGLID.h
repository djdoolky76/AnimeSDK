#pragma once
#include "unitysdk/unitysdk.h"
class NGFHCJIAOLH;
class NPGGECBGAAI;
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define MNCGPPIGLID_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E7C70)
#define MNCGPPIGLID_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9E8370)
#define MNCGPPIGLID_MNEHHJLGEOO_OFFSET UNITYSDK_OFFSET(0xB9E81C0)
#define MNCGPPIGLID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9E7CF0)

inline static constexpr unsigned int MNCGPPIGLID_TypeDefinitionIndex = 52660;

	class MNCGPPIGLID
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NPGGECBGAAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NPGGECBGAAI*))((::PBYTE)hIl2Cpp + MNCGPPIGLID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCGPPIGLID_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCGPPIGLID_DISPOSE_OFFSET))(this);
		}

		::System::Single MNEHHJLGEOO(::UnityEngine::Animator* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MNCGPPIGLID_MNEHHJLGEOO_OFFSET))(this, a1);
		}

	};
