#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJFNJCPHFDM;
class GAGKMDGBGFL;
namespace RPG::Client::Promises { class IPromise; }

#define MGFNPLKAALN_CTOR_OFFSET UNITYSDK_OFFSET(0xB91ACA0)
#define MGFNPLKAALN_FDLJEEGKKLI_OFFSET UNITYSDK_OFFSET(0xB91ACB0)

inline static constexpr unsigned int MGFNPLKAALN_TypeDefinitionIndex = 80224;

	class MGFNPLKAALN : public ::System::Object
	{
	public:
		::GAGKMDGBGFL* MJHHLOPFDNK; // 0x10
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x18
		::System::Void _ctor(::GAGKMDGBGFL* a1, ::FJFNJCPHFDM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GAGKMDGBGFL*, ::FJFNJCPHFDM*))((::PBYTE)hIl2Cpp + MGFNPLKAALN_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* FDLJEEGKKLI(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFNPLKAALN_FDLJEEGKKLI_OFFSET))(this, a1);
		}

	};
