#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdPrototype.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BAT_BATPROTOTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D52D0)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATPrototype_TypeDefinitionIndex = 73671;

	class BATPrototype : public ::RPG::Client::CrowdAnimator::CrowdPrototype
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RendererPackages; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATPROTOTYPE_CTOR_OFFSET))(this);
		}

	};
}
