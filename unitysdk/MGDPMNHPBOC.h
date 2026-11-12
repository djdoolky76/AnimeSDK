#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGDPMNHPBOC;

#define MGDPMNHPBOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E364980)
#define MGDPMNHPBOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E364880)

inline static constexpr unsigned int MGDPMNHPBOC_TypeDefinitionIndex = 15561;

	class MGDPMNHPBOC : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarBaseType LKLNGCCIMEM; // 0x10
		::System::UInt32 NBFOFKGNNIO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPMNHPBOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGDPMNHPBOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGDPMNHPBOC*))((::PBYTE)hIl2Cpp + MGDPMNHPBOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
