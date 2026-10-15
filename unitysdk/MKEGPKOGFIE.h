#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAODNLIPMEO;
namespace RPG::Client { class MonsterData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKEGPKOGFIE_CCJJFNGDHLM_OFFSET UNITYSDK_OFFSET(0xB991440)
#define MKEGPKOGFIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB991640)
#define MKEGPKOGFIE_FIEAJMFDBEG_OFFSET UNITYSDK_OFFSET(0xB991320)
#define MKEGPKOGFIE_KBDONBEMMMJ_OFFSET UNITYSDK_OFFSET(0xB991590)
#define MKEGPKOGFIE_LLGAFJEJLEA_OFFSET UNITYSDK_OFFSET(0xB990800)

	class MKEGPKOGFIE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGPKOGFIE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*>* LLGAFJEJLEA(::EAODNLIPMEO* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*>*(*)(::PVOID, ::EAODNLIPMEO*, ::System::Int32))((::PBYTE)hIl2Cpp + MKEGPKOGFIE_LLGAFJEJLEA_OFFSET))(this, a1, a2);
		}

		::System::UInt32 FIEAJMFDBEG(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKEGPKOGFIE_FIEAJMFDBEG_OFFSET))(this, a1);
		}

		::System::Boolean CCJJFNGDHLM(::EAODNLIPMEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAODNLIPMEO*))((::PBYTE)hIl2Cpp + MKEGPKOGFIE_CCJJFNGDHLM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* KBDONBEMMMJ(::EAODNLIPMEO* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::EAODNLIPMEO*))((::PBYTE)hIl2Cpp + MKEGPKOGFIE_KBDONBEMMMJ_OFFSET))(this, a1);
		}

	};
