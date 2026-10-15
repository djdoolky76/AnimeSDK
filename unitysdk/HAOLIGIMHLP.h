#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EDHPIGIAOLE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropAttachMove; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAOLIGIMHLP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9DEC0)
#define HAOLIGIMHLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B9DED0)
#define HAOLIGIMHLP_EPNBGKJBCEF_OFFSET UNITYSDK_OFFSET(0x15B9DF70)
#define HAOLIGIMHLP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B9E340)
#define HAOLIGIMHLP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B9E240)
#define HAOLIGIMHLP_TICK_OFFSET UNITYSDK_OFFSET(0x15B9E2E0)

inline static constexpr unsigned int HAOLIGIMHLP_TypeDefinitionIndex = 58301;

	class HAOLIGIMHLP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropAttachMove* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::PropComponent* KDCGICCJBMB; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::EDHPIGIAOLE* HDIOLMOJFDN; // 0x30
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropAttachMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropAttachMove*))((::PBYTE)hIl2Cpp + HAOLIGIMHLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOLIGIMHLP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOLIGIMHLP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAOLIGIMHLP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOLIGIMHLP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EPNBGKJBCEF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOLIGIMHLP_EPNBGKJBCEF_OFFSET))(this);
		}

	};
