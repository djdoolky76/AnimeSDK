#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class OAFCCICMILM;

#define GKKNCBGCGNP_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1CA82FA0)
#define GKKNCBGCGNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA82660)
#define GKKNCBGCGNP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CA82670)

inline static constexpr unsigned int GKKNCBGCGNP_TypeDefinitionIndex = 42395;

	class GKKNCBGCGNP : public ::System::Object
	{
	public:
		::FDPALAEIHPB* MBKIEFPKECG; // 0x10
		::OAFCCICMILM* CKJLAAOFGCC; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + GKKNCBGCGNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKNCBGCGNP_EXECUTE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKNCBGCGNP_CLEANUP_OFFSET))(this);
		}

	};
