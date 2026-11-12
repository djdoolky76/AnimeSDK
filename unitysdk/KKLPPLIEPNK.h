#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNJOFEPIMFN.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KKLPPLIEPNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1C400)
#define KKLPPLIEPNK_PIGEMAHNLKC_OFFSET UNITYSDK_OFFSET(0xBD1C410)

inline static constexpr unsigned int KKLPPLIEPNK_TypeDefinitionIndex = 67043;

	class KKLPPLIEPNK : public ::GNJOFEPIMFN
	{
	public:
		::System::Int32 LICEADHLAGO; // 0x18
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + KKLPPLIEPNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* PIGEMAHNLKC(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KKLPPLIEPNK_PIGEMAHNLKC_OFFSET))(this, a1, a2);
		}

	};
