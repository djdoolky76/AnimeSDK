#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class SharedStatics; }
namespace System::Security::Util { class Tokenizer_StringMaker; }

#define SYSTEM_SHAREDSTATICS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D27FF50)
#define SYSTEM_SHAREDSTATICS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D27FF40)
#define SYSTEM_SHAREDSTATICS_GETSHAREDSTRINGMAKER_OFFSET UNITYSDK_OFFSET(0x1D276850)
#define SYSTEM_SHAREDSTATICS_RELEASESHAREDSTRINGMAKER_OFFSET UNITYSDK_OFFSET(0x1D276E30)

namespace System
{
	inline static constexpr unsigned int SharedStatics_TypeDefinitionIndex = 327;

	class SharedStatics : public ::System::Object
	{
	public:
		::System::Security::Util::Tokenizer_StringMaker* _maker; // 0x10
		static ::System::SharedStatics** StaticGet__sharedStatics()
		{
			return (::System::SharedStatics**)UnitySDK::FromName("System", "SharedStatics")->GetStaticField(0x1F940);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_CCTOR_OFFSET))();
		}

		static ::System::Security::Util::Tokenizer_StringMaker* GetSharedStringMaker()
		{
			return ((::System::Security::Util::Tokenizer_StringMaker*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_GETSHAREDSTRINGMAKER_OFFSET))();
		}

		static ::System::Void ReleaseSharedStringMaker(::System::Security::Util::Tokenizer_StringMaker* a1)
		{
			return ((::System::Void(*)(::System::Security::Util::Tokenizer_StringMaker*))((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_RELEASESHAREDSTRINGMAKER_OFFSET))(a1);
		}

	};
}
