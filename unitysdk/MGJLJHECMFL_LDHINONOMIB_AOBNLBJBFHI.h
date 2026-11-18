#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A64C930)
#define MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A64C960)
#define MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A64C6A0)
#define MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A64C690)

inline static constexpr unsigned int MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI_TypeDefinitionIndex = 80063;

class MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MGJLJHECMFL_LDHINONOMIB_AOBNLBJBFHI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
