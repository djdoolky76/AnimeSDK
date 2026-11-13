#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EarlyAccessContent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GIHEENGNBDL_BJNJFOOJGID_OFFSET UNITYSDK_OFFSET(0x1A3DBF50)
#define GIHEENGNBDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DBDA0)
#define GIHEENGNBDL_DPDBHPOPFCB_OFFSET UNITYSDK_OFFSET(0x1A3DBEF0)
#define GIHEENGNBDL_JBMKEOLJOOK_OFFSET UNITYSDK_OFFSET(0x1A3DBFB0)
#define GIHEENGNBDL_JMOPONIENIO_OFFSET UNITYSDK_OFFSET(0x1A3DBE90)

inline static constexpr unsigned int GIHEENGNBDL_TypeDefinitionIndex = 76791;

	class GIHEENGNBDL : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* LLJBDMKPOGI; // 0x10
		::RPG::Client::EarlyAccessContent* OMNPCDLLHEG; // 0x18
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
