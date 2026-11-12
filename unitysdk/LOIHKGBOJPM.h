#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define LOIHKGBOJPM_CTOR_OFFSET UNITYSDK_OFFSET(0xC066840)
#define LOIHKGBOJPM_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xC066620)

inline static constexpr unsigned int LOIHKGBOJPM_TypeDefinitionIndex = 62674;

	class LOIHKGBOJPM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIHKGBOJPM_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + LOIHKGBOJPM_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
