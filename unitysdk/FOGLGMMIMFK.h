#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2ConditionType.h"
#include "unitysdk/System/Object.h"
class BLFLMBHILEO;
class IBGEIKMLIFK;
namespace System { class String; }

#define FOGLGMMIMFK_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x158DE210)
#define FOGLGMMIMFK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158DDFA0)
#define FOGLGMMIMFK_CTOR_OFFSET UNITYSDK_OFFSET(0x158DE3C0)

inline static constexpr unsigned int FOGLGMMIMFK_TypeDefinitionIndex = 65986;

	class FOGLGMMIMFK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGLGMMIMFK_CTOR_OFFSET))(this);
		}

		static ::IBGEIKMLIFK* BPLPBPMEODA(::Il2CppArray<::BLFLMBHILEO*>* a1)
		{
			return ((::IBGEIKMLIFK*(*)(::Il2CppArray<::BLFLMBHILEO*>*))((::PBYTE)hIl2Cpp + FOGLGMMIMFK_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::IBGEIKMLIFK* BPLPBPMEODA_1(::RPG::GameCore::MatchThreeV2ConditionType a1, ::System::String* a2)
		{
			return ((::IBGEIKMLIFK*(*)(::RPG::GameCore::MatchThreeV2ConditionType, ::System::String*))((::PBYTE)hIl2Cpp + FOGLGMMIMFK_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

	};
