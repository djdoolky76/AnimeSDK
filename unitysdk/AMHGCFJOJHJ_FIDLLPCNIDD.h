#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BIPBNDIFDOL;
class ENGKPGFGGLM;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AMHGCFJOJHJ_FIDLLPCNIDD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14517C00)
#define AMHGCFJOJHJ_FIDLLPCNIDD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14517C90)
#define AMHGCFJOJHJ_FIDLLPCNIDD_INVOKE_OFFSET UNITYSDK_OFFSET(0x145175F0)
#define AMHGCFJOJHJ_FIDLLPCNIDD__CTOR_OFFSET UNITYSDK_OFFSET(0x145175E0)

inline static constexpr unsigned int AMHGCFJOJHJ_FIDLLPCNIDD_TypeDefinitionIndex = 71375;

class AMHGCFJOJHJ_FIDLLPCNIDD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AMHGCFJOJHJ_FIDLLPCNIDD__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::BIPBNDIFDOL* HHIJHDFHPOI, ::System::Single PMNLNNGEIFM, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::System::Single, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AMHGCFJOJHJ_FIDLLPCNIDD_INVOKE_OFFSET))(this, HHIJHDFHPOI, PMNLNNGEIFM, FFNKDGGHBPP);
	}

	::System::IAsyncResult* BeginInvoke(::BIPBNDIFDOL* HHIJHDFHPOI, ::System::Single PMNLNNGEIFM, ::ENGKPGFGGLM* FFNKDGGHBPP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::BIPBNDIFDOL*, ::System::Single, ::ENGKPGFGGLM*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AMHGCFJOJHJ_FIDLLPCNIDD_BEGININVOKE_OFFSET))(this, HHIJHDFHPOI, PMNLNNGEIFM, FFNKDGGHBPP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AMHGCFJOJHJ_FIDLLPCNIDD_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
