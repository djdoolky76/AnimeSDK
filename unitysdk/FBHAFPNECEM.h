#pragma once
#include "unitysdk/unitysdk.h"
class JLGNGMLHKHJ;
namespace RPG::Client::LimaoNews { class LimaoNewsMainEntrance3DViewModel; }
namespace RPG::GameCore { class TaskContext; }

#define FBHAFPNECEM_AAKGMLEAKLG_OFFSET UNITYSDK_OFFSET(0x15692370)
#define FBHAFPNECEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15692110)
#define FBHAFPNECEM_NFBPDEHAFEF_OFFSET UNITYSDK_OFFSET(0x156923D0)
#define FBHAFPNECEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15692140)
#define FBHAFPNECEM_PKLMBPFCMOH_OFFSET UNITYSDK_OFFSET(0x15692280)

inline static constexpr unsigned int FBHAFPNECEM_TypeDefinitionIndex = 52948;

	class FBHAFPNECEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JLGNGMLHKHJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JLGNGMLHKHJ*))((::PBYTE)hIl2Cpp + FBHAFPNECEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHAFPNECEM_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* NFBPDEHAFEF(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FBHAFPNECEM_NFBPDEHAFEF_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::UInt32>* PKLMBPFCMOH(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FBHAFPNECEM_PKLMBPFCMOH_OFFSET))(a1);
		}

		static ::System::Void AAKGMLEAKLG(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FBHAFPNECEM_AAKGMLEAKLG_OFFSET))(a1);
		}

	};
