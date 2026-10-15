#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNOCOHFFHCP.h"
namespace RPG::GameCore { class PropComponent; }

#define MOMMAHLDPME_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2F9B0)
#define MOMMAHLDPME_GET_ICONID_OFFSET UNITYSDK_OFFSET(0xBA2F770)

inline static constexpr unsigned int MOMMAHLDPME_TypeDefinitionIndex = 60644;

	class MOMMAHLDPME : public ::JNOCOHFFHCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMMAHLDPME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_IconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMMAHLDPME_GET_ICONID_OFFSET))(this);
		}

	};
