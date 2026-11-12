#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNIEIFJIO;
class HLJNBBHKKMI;
class MJAOHLLPLGK;

#define DFPKFKNANLP_CTOR_OFFSET UNITYSDK_OFFSET(0xF1A3A80)
#define DFPKFKNANLP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF1A3AE0)

inline static constexpr unsigned int DFPKFKNANLP_TypeDefinitionIndex = 80004;

	class DFPKFKNANLP : public ::System::Object
	{
	public:
		::AIMNIEIFJIO* AOLDAIOHGNN; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DFPKFKNANLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKFKNANLP_EXECUTE_OFFSET))(this);
		}

	};
