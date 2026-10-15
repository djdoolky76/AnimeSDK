#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByMostAvatarBaseTypeMemberCount; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKAKCEHMOCA_CTOR_OFFSET UNITYSDK_OFFSET(0x157D8170)
#define FKAKCEHMOCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157D8250)

inline static constexpr unsigned int FKAKCEHMOCA_TypeDefinitionIndex = 55410;

	class FKAKCEHMOCA
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarBaseType>* EGNGOCIBNPJ; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarBaseType, ::System::Int32>* LGNPHEHBGHK; // 0x30
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount*))((::PBYTE)hIl2Cpp + FKAKCEHMOCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKAKCEHMOCA_ONTASKBEGIN_OFFSET))(this);
		}

	};
