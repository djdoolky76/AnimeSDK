#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CPBKEJKFDEN;
class HDJJJGCHLEE;
class MHFGFMELFLB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CPBKEJKFDEN_BGPLHFOFHHB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15A20300)
#define CPBKEJKFDEN_BGPLHFOFHHB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15A203A0)
#define CPBKEJKFDEN_BGPLHFOFHHB_INVOKE_OFFSET UNITYSDK_OFFSET(0x15A1FCE0)
#define CPBKEJKFDEN_BGPLHFOFHHB__CTOR_OFFSET UNITYSDK_OFFSET(0x15A1FCD0)

inline static constexpr unsigned int CPBKEJKFDEN_BGPLHFOFHHB_TypeDefinitionIndex = 65232;

class CPBKEJKFDEN_BGPLHFOFHHB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CPBKEJKFDEN_BGPLHFOFHHB__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::HDJJJGCHLEE* GHOGJBEFACH, ::MHFGFMELFLB* HBMGHPEPBNC, ::CPBKEJKFDEN* GJBHEJGENMI, ::System::Single JFLHDBCKGGF)
	{
		return ((::System::Void(*)(::PVOID, ::HDJJJGCHLEE*, ::MHFGFMELFLB*, ::CPBKEJKFDEN*, ::System::Single))((::PBYTE)hIl2Cpp + CPBKEJKFDEN_BGPLHFOFHHB_INVOKE_OFFSET))(this, GHOGJBEFACH, HBMGHPEPBNC, GJBHEJGENMI, JFLHDBCKGGF);
	}

	::System::IAsyncResult* BeginInvoke(::HDJJJGCHLEE* GHOGJBEFACH, ::MHFGFMELFLB* HBMGHPEPBNC, ::CPBKEJKFDEN* GJBHEJGENMI, ::System::Single JFLHDBCKGGF, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::HDJJJGCHLEE*, ::MHFGFMELFLB*, ::CPBKEJKFDEN*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CPBKEJKFDEN_BGPLHFOFHHB_BEGININVOKE_OFFSET))(this, GHOGJBEFACH, HBMGHPEPBNC, GJBHEJGENMI, JFLHDBCKGGF, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CPBKEJKFDEN_BGPLHFOFHHB_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
