#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/MOHHEMAADPG.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOBGGKJMEFG_ACHNDDOEBPB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE778060)
#define NOBGGKJMEFG_ACHNDDOEBPB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE778100)
#define NOBGGKJMEFG_ACHNDDOEBPB_INVOKE_OFFSET UNITYSDK_OFFSET(0xE777B70)
#define NOBGGKJMEFG_ACHNDDOEBPB__CTOR_OFFSET UNITYSDK_OFFSET(0xE777B60)

inline static constexpr unsigned int NOBGGKJMEFG_ACHNDDOEBPB_TypeDefinitionIndex = 46802;

class NOBGGKJMEFG_ACHNDDOEBPB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_ACHNDDOEBPB__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Int32 COMDNFILAIC, ::System::Collections::Generic::List_1<::System::Int32>* OOAEFAKAFFA, ::MOHHEMAADPG NMHOJPKIHLG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::MOHHEMAADPG))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_ACHNDDOEBPB_INVOKE_OFFSET))(this, COMDNFILAIC, OOAEFAKAFFA, NMHOJPKIHLG);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 COMDNFILAIC, ::System::Collections::Generic::List_1<::System::Int32>* OOAEFAKAFFA, ::MOHHEMAADPG NMHOJPKIHLG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::MOHHEMAADPG, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_ACHNDDOEBPB_BEGININVOKE_OFFSET))(this, COMDNFILAIC, OOAEFAKAFFA, NMHOJPKIHLG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_ACHNDDOEBPB_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
