#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNDPCFELMN_ICKOONFGGBF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPNDPCFELMN_IDGMFOKGLAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C3B40)
#define KPNDPCFELMN_IDGMFOKGLAO_MGKIKAKCJFB_OFFSET UNITYSDK_OFFSET(0xB5C46E0)

inline static constexpr unsigned int KPNDPCFELMN_IDGMFOKGLAO_TypeDefinitionIndex = 69489;

	class KPNDPCFELMN_IDGMFOKGLAO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* NOOJKACFJLG; // 0x10
		::System::String* IILMMLOCBIE; // 0x18
		::System::String* EKDHNICPKDJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNDPCFELMN_IDGMFOKGLAO_CTOR_OFFSET))(this);
		}

		::KPNDPCFELMN_ICKOONFGGBF* MGKIKAKCJFB()
		{
			return ((::KPNDPCFELMN_ICKOONFGGBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNDPCFELMN_IDGMFOKGLAO_MGKIKAKCJFB_OFFSET))(this);
		}

	};
