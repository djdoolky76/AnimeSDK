#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CLFBLCIJPKD_DGIMIECNEPP;
class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLFBLCIJPKD_ABMNJJLMDAF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x149716B0)
#define CLFBLCIJPKD_ABMNJJLMDAF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x149716F0)
#define CLFBLCIJPKD_ABMNJJLMDAF_INVOKE_OFFSET UNITYSDK_OFFSET(0x149710E0)
#define CLFBLCIJPKD_ABMNJJLMDAF__CTOR_OFFSET UNITYSDK_OFFSET(0x149710D0)

inline static constexpr unsigned int CLFBLCIJPKD_ABMNJJLMDAF_TypeDefinitionIndex = 88472;

class CLFBLCIJPKD_ABMNJJLMDAF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_ABMNJJLMDAF__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::CLFBLCIJPKD_DGIMIECNEPP* LDNCGMNHANO)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*, ::CLFBLCIJPKD_DGIMIECNEPP*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_ABMNJJLMDAF_INVOKE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ, LDNCGMNHANO);
	}

	::System::IAsyncResult* BeginInvoke(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::CLFBLCIJPKD_DGIMIECNEPP* LDNCGMNHANO, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*, ::CLFBLCIJPKD_DGIMIECNEPP*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_ABMNJJLMDAF_BEGININVOKE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ, LDNCGMNHANO, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_ABMNJJLMDAF_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
