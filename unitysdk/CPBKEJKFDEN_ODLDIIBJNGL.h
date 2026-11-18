#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CPBKEJKFDEN;
class HDJJJGCHLEE;
class MHFGFMELFLB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CPBKEJKFDEN_ODLDIIBJNGL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18314A40)
#define CPBKEJKFDEN_ODLDIIBJNGL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18314AE0)
#define CPBKEJKFDEN_ODLDIIBJNGL_INVOKE_OFFSET UNITYSDK_OFFSET(0x183143F0)
#define CPBKEJKFDEN_ODLDIIBJNGL__CTOR_OFFSET UNITYSDK_OFFSET(0x183143E0)

inline static constexpr unsigned int CPBKEJKFDEN_ODLDIIBJNGL_TypeDefinitionIndex = 65233;

class CPBKEJKFDEN_ODLDIIBJNGL : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CPBKEJKFDEN_ODLDIIBJNGL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::HDJJJGCHLEE* GHOGJBEFACH, ::MHFGFMELFLB* HBMGHPEPBNC, ::CPBKEJKFDEN* GJBHEJGENMI, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::HDJJJGCHLEE*, ::MHFGFMELFLB*, ::CPBKEJKFDEN*, ::System::Int32))((::PBYTE)hIl2Cpp + CPBKEJKFDEN_ODLDIIBJNGL_INVOKE_OFFSET))(this, GHOGJBEFACH, HBMGHPEPBNC, GJBHEJGENMI, JHFKDGBCOBA);
	}

	::System::IAsyncResult* BeginInvoke(::HDJJJGCHLEE* GHOGJBEFACH, ::MHFGFMELFLB* HBMGHPEPBNC, ::CPBKEJKFDEN* GJBHEJGENMI, ::System::Int32 JHFKDGBCOBA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::HDJJJGCHLEE*, ::MHFGFMELFLB*, ::CPBKEJKFDEN*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CPBKEJKFDEN_ODLDIIBJNGL_BEGININVOKE_OFFSET))(this, GHOGJBEFACH, HBMGHPEPBNC, GJBHEJGENMI, JHFKDGBCOBA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CPBKEJKFDEN_ODLDIIBJNGL_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
