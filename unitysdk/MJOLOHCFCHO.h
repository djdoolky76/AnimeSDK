#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BCNCALJFGPN;
class PKPCAPOLHGN;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJOLOHCFCHO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA5BA0)
#define MJOLOHCFCHO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA5BE0)
#define MJOLOHCFCHO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA5600)
#define MJOLOHCFCHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA55F0)

inline static constexpr unsigned int MJOLOHCFCHO_TypeDefinitionIndex = 28962;

class MJOLOHCFCHO : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MJOLOHCFCHO__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::BCNCALJFGPN* Invoke(::PKPCAPOLHGN* AAOCANGHBDG, ::System::Collections::Generic::List_1<::BCNCALJFGPN*>* DGNHGJCGNKF)
	{
		return ((::BCNCALJFGPN*(*)(::PVOID, ::PKPCAPOLHGN*, ::System::Collections::Generic::List_1<::BCNCALJFGPN*>*))((::PBYTE)hIl2Cpp + MJOLOHCFCHO_INVOKE_OFFSET))(this, AAOCANGHBDG, DGNHGJCGNKF);
	}

	::System::IAsyncResult* BeginInvoke(::PKPCAPOLHGN* AAOCANGHBDG, ::System::Collections::Generic::List_1<::BCNCALJFGPN*>* DGNHGJCGNKF, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::PKPCAPOLHGN*, ::System::Collections::Generic::List_1<::BCNCALJFGPN*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MJOLOHCFCHO_BEGININVOKE_OFFSET))(this, AAOCANGHBDG, DGNHGJCGNKF, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::BCNCALJFGPN* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::BCNCALJFGPN*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MJOLOHCFCHO_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
