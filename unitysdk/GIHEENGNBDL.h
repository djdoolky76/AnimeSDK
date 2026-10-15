#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EarlyAccessContent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GIHEENGNBDL_BJNJFOOJGID_OFFSET UNITYSDK_OFFSET(0x15A37940)
#define GIHEENGNBDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15A37790)
#define GIHEENGNBDL_DPDBHPOPFCB_OFFSET UNITYSDK_OFFSET(0x15A378E0)
#define GIHEENGNBDL_JBMKEOLJOOK_OFFSET UNITYSDK_OFFSET(0x15A379A0)
#define GIHEENGNBDL_JMOPONIENIO_OFFSET UNITYSDK_OFFSET(0x15A37880)

inline static constexpr unsigned int GIHEENGNBDL_TypeDefinitionIndex = 74644;

	class GIHEENGNBDL : public ::System::Object
	{
	public:
		::RPG::Client::EarlyAccessContent* OMNPCDLLHEG; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* LLJBDMKPOGI; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIHEENGNBDL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JMOPONIENIO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIHEENGNBDL_JMOPONIENIO_OFFSET))(this, a1);
		}

		::System::Boolean DPDBHPOPFCB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIHEENGNBDL_DPDBHPOPFCB_OFFSET))(this, a1);
		}

		::System::Boolean BJNJFOOJGID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIHEENGNBDL_BJNJFOOJGID_OFFSET))(this, a1);
		}

		::System::Boolean JBMKEOLJOOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHEENGNBDL_JBMKEOLJOOK_OFFSET))(this);
		}

	};
