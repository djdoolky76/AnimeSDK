#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CFMGIKJLMBJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IANDOOLAALI_DKACGJABKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x181A04C0)
#define IANDOOLAALI_DKACGJABKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x181A04F0)
#define IANDOOLAALI_DKACGJABKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1819FFA0)
#define IANDOOLAALI_DKACGJABKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1819FF90)

inline static constexpr unsigned int IANDOOLAALI_DKACGJABKED_TypeDefinitionIndex = 82334;

class IANDOOLAALI_DKACGJABKED : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IANDOOLAALI_DKACGJABKED__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* KPCKNPPIELG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + IANDOOLAALI_DKACGJABKED_INVOKE_OFFSET))(this, KPCKNPPIELG);
	}

	::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* KPCKNPPIELG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IANDOOLAALI_DKACGJABKED_BEGININVOKE_OFFSET))(this, KPCKNPPIELG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IANDOOLAALI_DKACGJABKED_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
