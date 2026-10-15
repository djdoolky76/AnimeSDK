#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
class CLMEOCEIFBI;
class KFELGAIGHAP;
namespace RPG::GameCore { class DynamicValueRangeCallback; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define EKJEHDDDBII_CTOR_OFFSET UNITYSDK_OFFSET(0x154FE5E0)
#define EKJEHDDDBII_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x154FD2E0)
#define EKJEHDDDBII_FEBKLLMDHCJ_OFFSET UNITYSDK_OFFSET(0x154FD950)
#define EKJEHDDDBII_OJPAPNHNCAB_OFFSET UNITYSDK_OFFSET(0x154FD630)

inline static constexpr unsigned int EKJEHDDDBII_TypeDefinitionIndex = 53754;

	class EKJEHDDDBII : public ::System::Object
	{
	public:
		::Il2CppArray<::CLMEOCEIFBI*>* BJJHBLIPILN; // 0x10
		::KFELGAIGHAP* LEAHACBFJBP; // 0x18
		::System::Byte PLPOFKKEENK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJEHDDDBII_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>*))((::PBYTE)hIl2Cpp + EKJEHDDDBII_DLAILGNMFGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OJPAPNHNCAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKJEHDDDBII_OJPAPNHNCAB_OFFSET))(this, a1);
		}

		::System::Void FEBKLLMDHCJ(::RPG::GameCore::TaskContext* a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EKJEHDDDBII_FEBKLLMDHCJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
