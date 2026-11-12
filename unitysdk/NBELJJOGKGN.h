#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
class NFDMDHCLEIN;
namespace System { class Object; }
namespace System { class Type; }

#define NBELJJOGKGN_CLEAR_OFFSET UNITYSDK_OFFSET(0xC344760)
#define NBELJJOGKGN_CTOR_OFFSET UNITYSDK_OFFSET(0xC344920)
#define NBELJJOGKGN_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC3447B0)
#define NBELJJOGKGN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC344700)

inline static constexpr unsigned int NBELJJOGKGN_TypeDefinitionIndex = 75517;

	class NBELJJOGKGN : public ::System::Object
	{
	public:
		::DMGLFMNEJGL* KPGKAMHEDNO; // 0x10
		::NFDMDHCLEIN* NHKIFNKACMP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBELJJOGKGN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::NFDMDHCLEIN* a1, ::DMGLFMNEJGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NFDMDHCLEIN*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + NBELJJOGKGN_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBELJJOGKGN_CLEAR_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NBELJJOGKGN_GETCONTEXT_OFFSET))(this, a1);
		}

	};
