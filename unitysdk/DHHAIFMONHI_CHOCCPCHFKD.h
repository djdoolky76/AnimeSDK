#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class DJPBAKPBELL;
class PAPOPANPGIJ;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DHHAIFMONHI_CHOCCPCHFKD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA77780)
#define DHHAIFMONHI_CHOCCPCHFKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA77690)
#define DHHAIFMONHI_CHOCCPCHFKD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA777C0)
#define DHHAIFMONHI_CHOCCPCHFKD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA763F0)

inline static constexpr unsigned int DHHAIFMONHI_CHOCCPCHFKD_TypeDefinitionIndex = 37755;

	class DHHAIFMONHI_CHOCCPCHFKD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DHHAIFMONHI_CHOCCPCHFKD_CTOR_OFFSET))(this, a1, a2);
		}

		::DJPBAKPBELL* Invoke(::RPG::GameCore::TaskConfig* a1, ::PAPOPANPGIJ* a2)
		{
			return ((::DJPBAKPBELL*(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::PAPOPANPGIJ*))((::PBYTE)hIl2Cpp + DHHAIFMONHI_CHOCCPCHFKD_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TaskConfig* a1, ::PAPOPANPGIJ* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::PAPOPANPGIJ*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DHHAIFMONHI_CHOCCPCHFKD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::DJPBAKPBELL* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::DJPBAKPBELL*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DHHAIFMONHI_CHOCCPCHFKD_ENDINVOKE_OFFSET))(this, a1);
		}

	};
