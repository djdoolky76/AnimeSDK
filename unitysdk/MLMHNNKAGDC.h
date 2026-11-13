#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBOFEHOPCEC;
class GLEPMONEPEM;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MLMHNNKAGDC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B9289F0)
#define MLMHNNKAGDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B929510)
#define MLMHNNKAGDC_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0x1B928F60)
#define MLMHNNKAGDC_DMKNFMMPEMA_OFFSET UNITYSDK_OFFSET(0x1B928C40)
#define MLMHNNKAGDC_HFODDGLNJGJ_OFFSET UNITYSDK_OFFSET(0x1B928A90)
#define MLMHNNKAGDC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B9288C0)
#define MLMHNNKAGDC_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x1B928960)
#define MLMHNNKAGDC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B928CC0)
#define MLMHNNKAGDC_KPOBDDBABJG_OFFSET UNITYSDK_OFFSET(0x1B928C80)
#define MLMHNNKAGDC_LNDJJFIKDKH_OFFSET UNITYSDK_OFFSET(0x1B928B60)
#define MLMHNNKAGDC_LNKFDPNJMBC_OFFSET UNITYSDK_OFFSET(0x1B928BE0)
#define MLMHNNKAGDC_ONIPLEMHAME_OFFSET UNITYSDK_OFFSET(0x1B928AF0)

inline static constexpr unsigned int MLMHNNKAGDC_TypeDefinitionIndex = 78863;

	class MLMHNNKAGDC : public ::System::Object
	{
	public:
		::System::String* FOMHLLCANPB; // 0x10
		::BBOFEHOPCEC* HDMEPPFFIDK; // 0x18
		::GLEPMONEPEM* KAKEIDJDNHJ; // 0x20
		::RPG::GameCore::GameEntity* EHIFMPNLNON; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_CTOR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_CLEAR_OFFSET))(this);
		}

		::System::Void HFODDGLNJGJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_HFODDGLNJGJ_OFFSET))(this, a1);
		}

		::System::Void ONIPLEMHAME(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_ONIPLEMHAME_OFFSET))(this, a1, a2);
		}

		::System::Void LNDJJFIKDKH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_LNDJJFIKDKH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIVariable* LNKFDPNJMBC(::System::String* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_LNKFDPNJMBC_OFFSET))(this, a1);
		}

		::BBOFEHOPCEC* DMKNFMMPEMA()
		{
			return ((::BBOFEHOPCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_DMKNFMMPEMA_OFFSET))(this);
		}

		::System::String* KPOBDDBABJG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_KPOBDDBABJG_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::GLEPMONEPEM* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::GLEPMONEPEM*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void DCADIANHPFD(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + MLMHNNKAGDC_DCADIANHPFD_OFFSET))(a1, a2);
		}

	};
