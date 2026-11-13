#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNIEIFJIO;
class HLJNBBHKKMI;
class MJAOHLLPLGK;

#define DFPKFKNANLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A85C0)
#define DFPKFKNANLP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B3A8620)

inline static constexpr unsigned int DFPKFKNANLP_TypeDefinitionIndex = 80003;

	class DFPKFKNANLP : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::AIMNIEIFJIO* AOLDAIOHGNN; // 0x18
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DFPKFKNANLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKFKNANLP_EXECUTE_OFFSET))(this);
		}

	};
