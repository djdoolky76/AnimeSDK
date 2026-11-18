#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define GJDLKFAMLAC_KOBHCOPIIBJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15D71410)
#define GJDLKFAMLAC_KOBHCOPIIBJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15D714C0)
#define GJDLKFAMLAC_KOBHCOPIIBJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x15D710D0)
#define GJDLKFAMLAC_KOBHCOPIIBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15D710C0)

inline static constexpr unsigned int GJDLKFAMLAC_KOBHCOPIIBJ_TypeDefinitionIndex = 39921;

class GJDLKFAMLAC_KOBHCOPIIBJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_KOBHCOPIIBJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::UInt16 OMMEALOOOOD, ::System::UInt16 GIAEPMKCBIB, ::System::UInt16 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_KOBHCOPIIBJ_INVOKE_OFFSET))(this, OMMEALOOOOD, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt16 OMMEALOOOOD, ::System::UInt16 GIAEPMKCBIB, ::System::UInt16 DOBFFIICAII, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_KOBHCOPIIBJ_BEGININVOKE_OFFSET))(this, OMMEALOOOOD, GIAEPMKCBIB, DOBFFIICAII, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_KOBHCOPIIBJ_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
