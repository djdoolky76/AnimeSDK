#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsAllPuzzleStateMatchedClientOnly; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define EDEFNMCMIME_CMMJFAELBKE_OFFSET UNITYSDK_OFFSET(0x1330D340)
#define EDEFNMCMIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1330D090)
#define EDEFNMCMIME_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1330D0C0)

inline static constexpr unsigned int EDEFNMCMIME_TypeDefinitionIndex = 57981;

	class EDEFNMCMIME
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + EDEFNMCMIME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEFNMCMIME_EVALUATE_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* CMMJFAELBKE(::RPG::GameCore::DynamicString* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + EDEFNMCMIME_CMMJFAELBKE_OFFSET))(this, a1, a2, a3);
		}

	};
