#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJCHNOIBJCA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarComparer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBIOHKOEMDD_IHPDOPAKDCG_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF8FD0)

inline static constexpr unsigned int HBIOHKOEMDD_IHPDOPAKDCG_TypeDefinitionIndex = 66730;

	class HBIOHKOEMDD_IHPDOPAKDCG : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarComparer* NFPPDEOJACA; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>* GNFFGBJGFPI; // 0x18
		::HJCHNOIBJCA* KPLENGFGHHG; // 0x20
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* FJHJLBJMKNA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_IHPDOPAKDCG_CTOR_OFFSET))(this);
		}

	};
