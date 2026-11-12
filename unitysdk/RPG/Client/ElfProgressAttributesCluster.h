#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfProgressAttributeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFPROGRESSATTRIBUTESCLUSTER_CTOR_OFFSET UNITYSDK_OFFSET(0xD770A60)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProgressAttributesCluster_TypeDefinitionIndex = 65159;

	class ElfProgressAttributesCluster : public ::System::Object
	{
	public:
		::RPG::Client::ElfProgressAttributeData* SummaryAttribute; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfProgressAttributeData*>* Attributes; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESCLUSTER_CTOR_OFFSET))(this);
		}

	};
}
