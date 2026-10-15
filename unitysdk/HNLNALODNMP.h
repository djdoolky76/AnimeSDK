#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFLJIEBFMOF.h"
#include "unitysdk/RPG/Client/TextID.h"

#define HNLNALODNMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D93920)
#define HNLNALODNMP_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x15D93910)

inline static constexpr unsigned int HNLNALODNMP_TypeDefinitionIndex = 68936;

	class HNLNALODNMP : public ::MFLJIEBFMOF
	{
	public:
		::RPG::Client::TextID _Content_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HNLNALODNMP_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLNALODNMP_GET_CONTENT_OFFSET))(this);
		}

	};
