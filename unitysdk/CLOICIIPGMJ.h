#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJOCNCABJL;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define CLOICIIPGMJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xDA21910)
#define CLOICIIPGMJ_CDKMNHGGDOD_OFFSET UNITYSDK_OFFSET(0xDA21960)
#define CLOICIIPGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA21BE0)
#define CLOICIIPGMJ_EGKNKHEANAN_1_OFFSET UNITYSDK_OFFSET(0xDA21610)
#define CLOICIIPGMJ_IGDIEBODAAH_1_OFFSET UNITYSDK_OFFSET(0xDA21510)

inline static constexpr unsigned int CLOICIIPGMJ_TypeDefinitionIndex = 49780;

	class CLOICIIPGMJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* IGDIEBODAAH_1(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_IGDIEBODAAH_1_OFFSET))(this, a1, a2);
		}

		::GAJOCNCABJL* EGKNKHEANAN_1(::System::String* a1, ::System::Type* a2)
		{
			return ((::GAJOCNCABJL*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_EGKNKHEANAN_1_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void CDKMNHGGDOD(::GAJOCNCABJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJOCNCABJL*))((::PBYTE)hIl2Cpp + CLOICIIPGMJ_CDKMNHGGDOD_OFFSET))(this, a1);
		}

	};
