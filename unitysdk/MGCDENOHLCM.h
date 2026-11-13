#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define MGCDENOHLCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E543A30)
#define MGCDENOHLCM_FNCNMCEOALF_OFFSET UNITYSDK_OFFSET(0x1E5438C0)
#define MGCDENOHLCM_LNHAOGJFKJE_OFFSET UNITYSDK_OFFSET(0x1E543950)

inline static constexpr unsigned int MGCDENOHLCM_TypeDefinitionIndex = 45157;

	class MGCDENOHLCM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCDENOHLCM_CTOR_OFFSET))(this);
		}

		::System::Object* FNCNMCEOALF(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGCDENOHLCM_FNCNMCEOALF_OFFSET))(this, a1);
		}

		::System::Object* LNHAOGJFKJE(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGCDENOHLCM_LNHAOGJFKJE_OFFSET))(this, a1);
		}

	};
