#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/MMHCBMJGEBL.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define APNCODNOFLH_JLHPKOGBJKJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13602D20)
#define APNCODNOFLH_JLHPKOGBJKJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13602D90)
#define APNCODNOFLH_JLHPKOGBJKJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x13602A30)
#define APNCODNOFLH_JLHPKOGBJKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13602A20)

inline static constexpr unsigned int APNCODNOFLH_JLHPKOGBJKJ_TypeDefinitionIndex = 80729;

class APNCODNOFLH_JLHPKOGBJKJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + APNCODNOFLH_JLHPKOGBJKJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Int32 Invoke(::MMHCBMJGEBL& AAOCANGHBDG)
	{
		return ((::System::Int32(*)(::PVOID, ::MMHCBMJGEBL&))((::PBYTE)hIl2Cpp + APNCODNOFLH_JLHPKOGBJKJ_INVOKE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::IAsyncResult* BeginInvoke(::MMHCBMJGEBL& AAOCANGHBDG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MMHCBMJGEBL&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + APNCODNOFLH_JLHPKOGBJKJ_BEGININVOKE_OFFSET))(this, AAOCANGHBDG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Int32 EndInvoke(::MMHCBMJGEBL& AAOCANGHBDG, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Int32(*)(::PVOID, ::MMHCBMJGEBL&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + APNCODNOFLH_JLHPKOGBJKJ_ENDINVOKE_OFFSET))(this, AAOCANGHBDG, IGAAKDOIPNN);
	}
};
