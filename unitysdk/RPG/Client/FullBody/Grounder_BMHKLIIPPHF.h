#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_FULLBODY_GROUNDER_BMHKLIIPPHF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD05FB90)
#define RPG_CLIENT_FULLBODY_GROUNDER_BMHKLIIPPHF_CTOR_OFFSET UNITYSDK_OFFSET(0xD05FB10)
#define RPG_CLIENT_FULLBODY_GROUNDER_BMHKLIIPPHF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD05FBC0)
#define RPG_CLIENT_FULLBODY_GROUNDER_BMHKLIIPPHF_INVOKE_OFFSET UNITYSDK_OFFSET(0xD05FB80)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounder_BMHKLIIPPHF_TypeDefinitionIndex = 74230;

	class Grounder_BMHKLIIPPHF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_BMHKLIIPPHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_BMHKLIIPPHF_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_BMHKLIIPPHF_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_BMHKLIIPPHF_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
