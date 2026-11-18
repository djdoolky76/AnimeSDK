#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLLAEGMBGNN.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHACCMOKNMA_LCBCNOOPNBJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1618DC80)
#define FHACCMOKNMA_LCBCNOOPNBJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1618DD10)
#define FHACCMOKNMA_LCBCNOOPNBJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x1618D6A0)
#define FHACCMOKNMA_LCBCNOOPNBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1618DC70)

inline static constexpr unsigned int FHACCMOKNMA_LCBCNOOPNBJ_TypeDefinitionIndex = 49999;

class FHACCMOKNMA_LCBCNOOPNBJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FHACCMOKNMA_LCBCNOOPNBJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* BADJIMECAGC, ::System::Collections::Generic::IList_1<::NLLAEGMBGNN>* MIJIBILCPKJ, ::NLLAEGMBGNN ILIOMLEHCEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::NLLAEGMBGNN>*, ::NLLAEGMBGNN))((::PBYTE)hIl2Cpp + FHACCMOKNMA_LCBCNOOPNBJ_INVOKE_OFFSET))(this, BADJIMECAGC, MIJIBILCPKJ, ILIOMLEHCEK);
	}

	::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::System::Int32>* BADJIMECAGC, ::System::Collections::Generic::IList_1<::NLLAEGMBGNN>* MIJIBILCPKJ, ::NLLAEGMBGNN ILIOMLEHCEK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::NLLAEGMBGNN>*, ::NLLAEGMBGNN, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FHACCMOKNMA_LCBCNOOPNBJ_BEGININVOKE_OFFSET))(this, BADJIMECAGC, MIJIBILCPKJ, ILIOMLEHCEK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FHACCMOKNMA_LCBCNOOPNBJ_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
