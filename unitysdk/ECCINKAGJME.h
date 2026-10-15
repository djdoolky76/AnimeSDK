#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class StoryLineData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ECCINKAGJME_BJNJFOOJGID_OFFSET UNITYSDK_OFFSET(0x12D03E60)
#define ECCINKAGJME_CTOR_OFFSET UNITYSDK_OFFSET(0x12D03C00)
#define ECCINKAGJME_DPDBHPOPFCB_OFFSET UNITYSDK_OFFSET(0x12D03DD0)
#define ECCINKAGJME_JBMKEOLJOOK_OFFSET UNITYSDK_OFFSET(0x12D03EB0)
#define ECCINKAGJME_JMOPONIENIO_OFFSET UNITYSDK_OFFSET(0x12D03D70)

inline static constexpr unsigned int ECCINKAGJME_TypeDefinitionIndex = 74642;

	class ECCINKAGJME : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* ACKBIIJEHDP; // 0x10
		::RPG::Client::StoryLineData* AOJKMPDNLKI; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECCINKAGJME_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JMOPONIENIO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECCINKAGJME_JMOPONIENIO_OFFSET))(this, a1);
		}

		::System::Boolean DPDBHPOPFCB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECCINKAGJME_DPDBHPOPFCB_OFFSET))(this, a1);
		}

		::System::Boolean BJNJFOOJGID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECCINKAGJME_BJNJFOOJGID_OFFSET))(this, a1);
		}

		::System::Boolean JBMKEOLJOOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCINKAGJME_JBMKEOLJOOK_OFFSET))(this);
		}

	};
