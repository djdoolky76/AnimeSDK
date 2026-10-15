#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJCPILKAEG;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleStateMachine; }

#define OJFACDDHHPO_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA7970)
#define OJFACDDHHPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEA7930)
#define OJFACDDHHPO_INIT_OFFSET UNITYSDK_OFFSET(0xBEA77E0)
#define OJFACDDHHPO_ONENTER_OFFSET UNITYSDK_OFFSET(0xBEA78B0)
#define OJFACDDHHPO_ONEXIT_OFFSET UNITYSDK_OFFSET(0xBEA78F0)
#define OJFACDDHHPO_PREPAREONSTARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xBEA7830)

inline static constexpr unsigned int OJFACDDHHPO_TypeDefinitionIndex = 78384;

	class OJFACDDHHPO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFACDDHHPO_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* a1, ::JLJCPILKAEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine*, ::JLJCPILKAEG*))((::PBYTE)hIl2Cpp + OJFACDDHHPO_INIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* PrepareOnStartPuzzle()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFACDDHHPO_PREPAREONSTARTPUZZLE_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFACDDHHPO_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFACDDHHPO_ONEXIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFACDDHHPO_DISPOSE_OFFSET))(this);
		}

	};
