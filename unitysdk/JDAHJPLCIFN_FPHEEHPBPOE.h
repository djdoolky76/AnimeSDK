#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ENFLEEPLNPC.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define JDAHJPLCIFN_FPHEEHPBPOE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x153CB8E0)
#define JDAHJPLCIFN_FPHEEHPBPOE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x153CB980)
#define JDAHJPLCIFN_FPHEEHPBPOE_INVOKE_OFFSET UNITYSDK_OFFSET(0x153CB330)
#define JDAHJPLCIFN_FPHEEHPBPOE__CTOR_OFFSET UNITYSDK_OFFSET(0x153CB320)

inline static constexpr unsigned int JDAHJPLCIFN_FPHEEHPBPOE_TypeDefinitionIndex = 89536;

class JDAHJPLCIFN_FPHEEHPBPOE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JDAHJPLCIFN_FPHEEHPBPOE__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::ENFLEEPLNPC Invoke(::System::String* FCCLIEJAKLI, ::System::Int32 LPBEAEAPIPN, ::System::Char EIGJAFOJEBB)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + JDAHJPLCIFN_FPHEEHPBPOE_INVOKE_OFFSET))(this, FCCLIEJAKLI, LPBEAEAPIPN, EIGJAFOJEBB);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* FCCLIEJAKLI, ::System::Int32 LPBEAEAPIPN, ::System::Char EIGJAFOJEBB, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JDAHJPLCIFN_FPHEEHPBPOE_BEGININVOKE_OFFSET))(this, FCCLIEJAKLI, LPBEAEAPIPN, EIGJAFOJEBB, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::ENFLEEPLNPC EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::ENFLEEPLNPC(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JDAHJPLCIFN_FPHEEHPBPOE_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
