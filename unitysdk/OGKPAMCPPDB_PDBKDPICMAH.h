#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OGKPAMCPPDB_PDBKDPICMAH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18442870)
#define OGKPAMCPPDB_PDBKDPICMAH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18442920)
#define OGKPAMCPPDB_PDBKDPICMAH_INVOKE_OFFSET UNITYSDK_OFFSET(0x184424F0)
#define OGKPAMCPPDB_PDBKDPICMAH__CTOR_OFFSET UNITYSDK_OFFSET(0x184424E0)

inline static constexpr unsigned int OGKPAMCPPDB_PDBKDPICMAH_TypeDefinitionIndex = 82563;

class OGKPAMCPPDB_PDBKDPICMAH : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OGKPAMCPPDB_PDBKDPICMAH__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Single Invoke(::System::Single GIAEPMKCBIB, ::System::Single DOBFFIICAII, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OGKPAMCPPDB_PDBKDPICMAH_INVOKE_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII, IMLLDOHDCNC);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single GIAEPMKCBIB, ::System::Single DOBFFIICAII, ::System::Single IMLLDOHDCNC, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OGKPAMCPPDB_PDBKDPICMAH_BEGININVOKE_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII, IMLLDOHDCNC, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Single EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OGKPAMCPPDB_PDBKDPICMAH_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
