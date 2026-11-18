#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CIIBMFNMPCG_PJFEJIAPOMM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x159DC4B0)
#define CIIBMFNMPCG_PJFEJIAPOMM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x159DC540)
#define CIIBMFNMPCG_PJFEJIAPOMM_INVOKE_OFFSET UNITYSDK_OFFSET(0x159DC190)
#define CIIBMFNMPCG_PJFEJIAPOMM__CTOR_OFFSET UNITYSDK_OFFSET(0x159DC180)

inline static constexpr unsigned int CIIBMFNMPCG_PJFEJIAPOMM_TypeDefinitionIndex = 82678;

class CIIBMFNMPCG_PJFEJIAPOMM : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_PJFEJIAPOMM__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::System::Int32 LEDMDCCOJEL, ::System::Int32 LONJDPHDNPD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_PJFEJIAPOMM_INVOKE_OFFSET))(this, LEDMDCCOJEL, LONJDPHDNPD);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 LEDMDCCOJEL, ::System::Int32 LONJDPHDNPD, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_PJFEJIAPOMM_BEGININVOKE_OFFSET))(this, LEDMDCCOJEL, LONJDPHDNPD, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_PJFEJIAPOMM_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
