#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class OAFCCICMILM;

#define CPMBBNHHPAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E52F0)
#define CPMBBNHHPAE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C9E5300)
#define CPMBBNHHPAE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C9E5760)

inline static constexpr unsigned int CPMBBNHHPAE_TypeDefinitionIndex = 42398;

	class CPMBBNHHPAE : public ::System::Object
	{
	public:
		::FDPALAEIHPB* MBKIEFPKECG; // 0x10
		::OAFCCICMILM* CKJLAAOFGCC; // 0x18
		::System::Single CCAPEPFBMGI; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + CPMBBNHHPAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMBBNHHPAE_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMBBNHHPAE_INITIALIZE_OFFSET))(this);
		}

	};
