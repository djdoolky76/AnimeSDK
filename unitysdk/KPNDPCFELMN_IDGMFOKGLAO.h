#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNDPCFELMN_ICKOONFGGBF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPNDPCFELMN_IDGMFOKGLAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1912E380)
#define KPNDPCFELMN_IDGMFOKGLAO_MGKIKAKCJFB_OFFSET UNITYSDK_OFFSET(0x1912EF20)

inline static constexpr unsigned int KPNDPCFELMN_IDGMFOKGLAO_TypeDefinitionIndex = 71443;

	class KPNDPCFELMN_IDGMFOKGLAO : public ::System::Object
	{
	public:
		::System::String* IILMMLOCBIE; // 0x10
		::System::String* EKDHNICPKDJ; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* NOOJKACFJLG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNDPCFELMN_IDGMFOKGLAO_CTOR_OFFSET))(this);
		}

		::KPNDPCFELMN_ICKOONFGGBF* MGKIKAKCJFB()
		{
			return ((::KPNDPCFELMN_ICKOONFGGBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNDPCFELMN_IDGMFOKGLAO_MGKIKAKCJFB_OFFSET))(this);
		}

	};
