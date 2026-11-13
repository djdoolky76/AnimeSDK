#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class StoryLineData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ECCINKAGJME_BJNJFOOJGID_OFFSET UNITYSDK_OFFSET(0x1C3D1F60)
#define ECCINKAGJME_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D1CD0)
#define ECCINKAGJME_DPDBHPOPFCB_OFFSET UNITYSDK_OFFSET(0x1C3D1ED0)
#define ECCINKAGJME_JBMKEOLJOOK_OFFSET UNITYSDK_OFFSET(0x1C3D1FB0)
#define ECCINKAGJME_JMOPONIENIO_OFFSET UNITYSDK_OFFSET(0x1C3D1E70)

inline static constexpr unsigned int ECCINKAGJME_TypeDefinitionIndex = 76790;

	class ECCINKAGJME : public ::System::Object
	{
	public:
		::RPG::Client::StoryLineData* AOJKMPDNLKI; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* ACKBIIJEHDP; // 0x18
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
