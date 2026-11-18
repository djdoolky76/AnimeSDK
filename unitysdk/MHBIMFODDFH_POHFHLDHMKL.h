#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/LGCNEDCMPKM.h"

class JODMGCIFBLC;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MHBIMFODDFH_POHFHLDHMKL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15E2E650)
#define MHBIMFODDFH_POHFHLDHMKL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15E2E6F0)
#define MHBIMFODDFH_POHFHLDHMKL_INVOKE_OFFSET UNITYSDK_OFFSET(0x15E2E300)
#define MHBIMFODDFH_POHFHLDHMKL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2E2F0)

inline static constexpr unsigned int MHBIMFODDFH_POHFHLDHMKL_TypeDefinitionIndex = 42574;

class MHBIMFODDFH_POHFHLDHMKL : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MHBIMFODDFH_POHFHLDHMKL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::LGCNEDCMPKM& BKBGPKNGNMF, ::EOAHOOCNDHM& FDGOKNAPJPN, ::JODMGCIFBLC* GGCBBFDNMMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::EOAHOOCNDHM&, ::JODMGCIFBLC*))((::PBYTE)hIl2Cpp + MHBIMFODDFH_POHFHLDHMKL_INVOKE_OFFSET))(this, BKBGPKNGNMF, FDGOKNAPJPN, GGCBBFDNMMF);
	}

	::System::IAsyncResult* BeginInvoke(::LGCNEDCMPKM& BKBGPKNGNMF, ::EOAHOOCNDHM& FDGOKNAPJPN, ::JODMGCIFBLC* GGCBBFDNMMF, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::LGCNEDCMPKM&, ::EOAHOOCNDHM&, ::JODMGCIFBLC*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MHBIMFODDFH_POHFHLDHMKL_BEGININVOKE_OFFSET))(this, BKBGPKNGNMF, FDGOKNAPJPN, GGCBBFDNMMF, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::LGCNEDCMPKM& BKBGPKNGNMF, ::EOAHOOCNDHM& FDGOKNAPJPN, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::EOAHOOCNDHM&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MHBIMFODDFH_POHFHLDHMKL_ENDINVOKE_OFFSET))(this, BKBGPKNGNMF, FDGOKNAPJPN, IGAAKDOIPNN);
	}
};
