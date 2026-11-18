#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEPHPHBBNDN.h"
#include "unitysdk/System/MulticastDelegate.h"

class BGADAPCBDFJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICIJJJLDLBM_HHKKJPJPCGK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF837540)
#define ICIJJJLDLBM_HHKKJPJPCGK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF8375C0)
#define ICIJJJLDLBM_HHKKJPJPCGK_INVOKE_OFFSET UNITYSDK_OFFSET(0xF837220)
#define ICIJJJLDLBM_HHKKJPJPCGK__CTOR_OFFSET UNITYSDK_OFFSET(0xF837210)

inline static constexpr unsigned int ICIJJJLDLBM_HHKKJPJPCGK_TypeDefinitionIndex = 64735;

class ICIJJJLDLBM_HHKKJPJPCGK : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICIJJJLDLBM_HHKKJPJPCGK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::BGADAPCBDFJ*& ECMMKCJLBMD, ::PEPHPHBBNDN& BNBGIFONPGI)
	{
		return ((::System::Void(*)(::PVOID, ::BGADAPCBDFJ*&, ::PEPHPHBBNDN&))((::PBYTE)hIl2Cpp + ICIJJJLDLBM_HHKKJPJPCGK_INVOKE_OFFSET))(this, ECMMKCJLBMD, BNBGIFONPGI);
	}

	::System::IAsyncResult* BeginInvoke(::BGADAPCBDFJ*& ECMMKCJLBMD, ::PEPHPHBBNDN& BNBGIFONPGI, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::BGADAPCBDFJ*&, ::PEPHPHBBNDN&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICIJJJLDLBM_HHKKJPJPCGK_BEGININVOKE_OFFSET))(this, ECMMKCJLBMD, BNBGIFONPGI, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::BGADAPCBDFJ*& ECMMKCJLBMD, ::PEPHPHBBNDN& BNBGIFONPGI, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::BGADAPCBDFJ*&, ::PEPHPHBBNDN&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICIJJJLDLBM_HHKKJPJPCGK_ENDINVOKE_OFFSET))(this, ECMMKCJLBMD, BNBGIFONPGI, IGAAKDOIPNN);
	}
};
