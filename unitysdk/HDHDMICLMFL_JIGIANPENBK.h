#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HDHDMICLMFL_JIGIANPENBK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15D9F1F0)
#define HDHDMICLMFL_JIGIANPENBK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15D9F260)
#define HDHDMICLMFL_JIGIANPENBK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15D9EEF0)
#define HDHDMICLMFL_JIGIANPENBK__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9EEE0)

inline static constexpr unsigned int HDHDMICLMFL_JIGIANPENBK_TypeDefinitionIndex = 85936;

class HDHDMICLMFL_JIGIANPENBK : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HDHDMICLMFL_JIGIANPENBK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDHDMICLMFL_JIGIANPENBK_INVOKE_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 BNLHPGHLKDK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HDHDMICLMFL_JIGIANPENBK_BEGININVOKE_OFFSET))(this, BNLHPGHLKDK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HDHDMICLMFL_JIGIANPENBK_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
