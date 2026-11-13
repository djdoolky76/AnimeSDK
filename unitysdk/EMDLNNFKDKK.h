#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class ShowMazeBuffSelectInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define EMDLNNFKDKK_CTOR_OFFSET UNITYSDK_OFFSET(0x187CC130)
#define EMDLNNFKDKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187CC7A0)
#define EMDLNNFKDKK_EPGNFOIJHAK_OFFSET UNITYSDK_OFFSET(0x187CC8E0)
#define EMDLNNFKDKK_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0x187CC6B0)
#define EMDLNNFKDKK_NBDFMCLLDPC_OFFSET UNITYSDK_OFFSET(0x187CC990)
#define EMDLNNFKDKK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x187CC1F0)
#define EMDLNNFKDKK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x187CC620)
#define EMDLNNFKDKK_TICK_OFFSET UNITYSDK_OFFSET(0x187CC880)

inline static constexpr unsigned int EMDLNNFKDKK_TypeDefinitionIndex = 59938;

	class EMDLNNFKDKK : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x18
		::Il2CppArray<::System::UInt32>* NKIBAOGMADC; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::ShowMazeBuffSelectInBattle* OFKGLJOAMLD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMazeBuffSelectInBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMazeBuffSelectInBattle*))((::PBYTE)hIl2Cpp + EMDLNNFKDKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDLNNFKDKK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDLNNFKDKK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDLNNFKDKK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMDLNNFKDKK_TICK_OFFSET))(this, a1);
		}

		::System::Void EPGNFOIJHAK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EMDLNNFKDKK_EPGNFOIJHAK_OFFSET))(this, a1);
		}

		::System::Void IOAEBFCPHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDLNNFKDKK_IOAEBFCPHCK_OFFSET))(this);
		}

		::System::Void NBDFMCLLDPC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMDLNNFKDKK_NBDFMCLLDPC_OFFSET))(this, a1);
		}

	};
