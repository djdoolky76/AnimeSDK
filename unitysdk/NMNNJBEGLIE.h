#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetSkillTargetFormation; }
namespace RPG::GameCore { class TargetFormationConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMNNJBEGLIE_BJFBNHDGHND_OFFSET UNITYSDK_OFFSET(0xBC8B590)
#define NMNNJBEGLIE_BNGHILNFBOL_OFFSET UNITYSDK_OFFSET(0xBC8C9F0)
#define NMNNJBEGLIE_CCONCENLJNE_OFFSET UNITYSDK_OFFSET(0xBC8C320)
#define NMNNJBEGLIE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8A2D0)
#define NMNNJBEGLIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC8A2E0)
#define NMNNJBEGLIE_EEBDAGMGAAP_OFFSET UNITYSDK_OFFSET(0xBC8C0D0)
#define NMNNJBEGLIE_FOMPGDIFMCK_OFFSET UNITYSDK_OFFSET(0xBC8BD00)
#define NMNNJBEGLIE_ICMONKPLCMH_OFFSET UNITYSDK_OFFSET(0xBC8B150)
#define NMNNJBEGLIE_JMLBGDIIBND_OFFSET UNITYSDK_OFFSET(0xBC8B7B0)
#define NMNNJBEGLIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC8A380)
#define NMNNJBEGLIE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC8C9A0)
#define NMNNJBEGLIE_TICK_OFFSET UNITYSDK_OFFSET(0xBC8A320)

inline static constexpr unsigned int NMNNJBEGLIE_TypeDefinitionIndex = 56423;

	class NMNNJBEGLIE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetSkillTargetFormation* OFKGLJOAMLD; // 0x20
		::UnityEngine::Quaternion PKNPAPLFMHO; // 0x28
		::System::Int32 INAKMLFKHAM; // 0x38
		::UnityEngine::Vector3 HFINBPNMFEA; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormation*))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ICMONKPLCMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_ICMONKPLCMH_OFFSET))(this, a1);
		}

		::System::Void JMLBGDIIBND(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_JMLBGDIIBND_OFFSET))(this, a1, a2);
		}

		::System::Void BJFBNHDGHND(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_BJFBNHDGHND_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void EEBDAGMGAAP(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_EEBDAGMGAAP_OFFSET))(this, a1, a2);
		}

		::System::Void CCONCENLJNE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_CCONCENLJNE_OFFSET))(this, a1);
		}

		::System::Void FOMPGDIFMCK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TargetFormationConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetFormationConfig*))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_FOMPGDIFMCK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BNGHILNFBOL(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NMNNJBEGLIE_BNGHILNFBOL_OFFSET))(this, a1, a2);
		}

	};
