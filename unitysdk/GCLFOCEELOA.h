#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFIAGNDOLBD;
namespace RPG::Client { class GridFightPrayQuest; }

#define GCLFOCEELOA_CBGILKCGKAG_OFFSET UNITYSDK_OFFSET(0x15978480)
#define GCLFOCEELOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15978520)

inline static constexpr unsigned int GCLFOCEELOA_TypeDefinitionIndex = 65097;

	class GCLFOCEELOA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLFOCEELOA_CTOR_OFFSET))(this);
		}

		static ::CFIAGNDOLBD* CBGILKCGKAG(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::CFIAGNDOLBD*(*)(::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + GCLFOCEELOA_CBGILKCGKAG_OFFSET))(a1);
		}

	};
