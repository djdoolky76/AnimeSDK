#pragma once
#include "unitysdk/unitysdk.h"
class FJEOAPBLMKG;
namespace RPG::GameCore { class AdvPlayerForceUseDefaultOutfit; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define JPKDLLGICEL_CMBBOCIANPD_OFFSET UNITYSDK_OFFSET(0xB2C4ED0)
#define JPKDLLGICEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C4EA0)
#define JPKDLLGICEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2C5520)

inline static constexpr unsigned int JPKDLLGICEL_TypeDefinitionIndex = 52469;

	class JPKDLLGICEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*))((::PBYTE)hIl2Cpp + JPKDLLGICEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CMBBOCIANPD(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>* a2, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>*, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>*))((::PBYTE)hIl2Cpp + JPKDLLGICEL_CMBBOCIANPD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKDLLGICEL_ONTASKBEGIN_OFFSET))(this);
		}

	};
