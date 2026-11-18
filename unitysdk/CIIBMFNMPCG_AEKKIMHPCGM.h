#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CIIBMFNMPCG_AEKKIMHPCGM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x139CC6D0)
#define CIIBMFNMPCG_AEKKIMHPCGM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x139CC780)
#define CIIBMFNMPCG_AEKKIMHPCGM_INVOKE_OFFSET UNITYSDK_OFFSET(0x139CC3A0)
#define CIIBMFNMPCG_AEKKIMHPCGM__CTOR_OFFSET UNITYSDK_OFFSET(0x139CC390)

inline static constexpr unsigned int CIIBMFNMPCG_AEKKIMHPCGM_TypeDefinitionIndex = 82679;

class CIIBMFNMPCG_AEKKIMHPCGM : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_AEKKIMHPCGM__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Int32 LEDMDCCOJEL, ::System::Int32 LONJDPHDNPD, ::System::Boolean GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_AEKKIMHPCGM_INVOKE_OFFSET))(this, LEDMDCCOJEL, LONJDPHDNPD, GEGOALONGBI);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 LEDMDCCOJEL, ::System::Int32 LONJDPHDNPD, ::System::Boolean GEGOALONGBI, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_AEKKIMHPCGM_BEGININVOKE_OFFSET))(this, LEDMDCCOJEL, LONJDPHDNPD, GEGOALONGBI, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_AEKKIMHPCGM_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
