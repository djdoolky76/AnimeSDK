#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertAction; }
namespace System { class String; }

#define OPNMFOPFDNG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFAD8A0)
#define OPNMFOPFDNG_GCNPNLAHIMI_OFFSET UNITYSDK_OFFSET(0xBFADDF0)
#define OPNMFOPFDNG_KIADNFBKOCM_OFFSET UNITYSDK_OFFSET(0xBFADCB0)
#define OPNMFOPFDNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFAD8D0)

inline static constexpr unsigned int OPNMFOPFDNG_TypeDefinitionIndex = 55778;

	class OPNMFOPFDNG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TurnInsertAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TurnInsertAction*))((::PBYTE)hIl2Cpp + OPNMFOPFDNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNMFOPFDNG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GCNPNLAHIMI(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + OPNMFOPFDNG_GCNPNLAHIMI_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* KIADNFBKOCM()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNMFOPFDNG_KIADNFBKOCM_OFFSET))(this);
		}

	};
