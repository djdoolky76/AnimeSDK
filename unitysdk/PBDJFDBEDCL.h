#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPBCNIIEOB.h"
#include "unitysdk/BAHMMEEMJOB.h"
class AIFAHLNOMGK;
namespace System { class Object; }

#define PBDJFDBEDCL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE4D30)
#define PBDJFDBEDCL_EMLFFGPEEMD_OFFSET UNITYSDK_OFFSET(0xBFE4BA0)
#define PBDJFDBEDCL_MEPFNJJDBMJ_OFFSET UNITYSDK_OFFSET(0xBFE4C80)
#define PBDJFDBEDCL_PIIINLMDBMJ_OFFSET UNITYSDK_OFFSET(0xBFE4A70)
#define PBDJFDBEDCL__ONBIND_OFFSET UNITYSDK_OFFSET(0xBFE49B0)

inline static constexpr unsigned int PBDJFDBEDCL_TypeDefinitionIndex = 72188;

	class PBDJFDBEDCL : public ::GJPBCNIIEOB
	{
	public:
		::AIFAHLNOMGK* KONBDNNCNKL; // 0x168
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL__ONBIND_OFFSET))(this);
		}

		::System::Void PIIINLMDBMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_PIIINLMDBMJ_OFFSET))(this, a1);
		}

		::System::Boolean EMLFFGPEEMD(::BAHMMEEMJOB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_EMLFFGPEEMD_OFFSET))(this, a1);
		}

		::System::Void MEPFNJJDBMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_MEPFNJJDBMJ_OFFSET))(this);
		}

	};
