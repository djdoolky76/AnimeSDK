#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEvent; }

#define KKHHLADOHDJ_BEEEMPBIMGA_OFFSET UNITYSDK_OFFSET(0x1E5380A0)
#define KKHHLADOHDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E528FE0)
#define KKHHLADOHDJ_FEAAHGDEPMD_OFFSET UNITYSDK_OFFSET(0x1E538150)
#define KKHHLADOHDJ_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x1E538200)
#define KKHHLADOHDJ_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E538040)

inline static constexpr unsigned int KKHHLADOHDJ_TypeDefinitionIndex = 45143;

	class KKHHLADOHDJ
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::UnityEngine::Events::UnityEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + KKHHLADOHDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* JBIOGKPHKKC()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHHLADOHDJ_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void BEEEMPBIMGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHHLADOHDJ_BEEEMPBIMGA_OFFSET))(this);
		}

		::System::Void FEAAHGDEPMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHHLADOHDJ_FEAAHGDEPMD_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHHLADOHDJ_ILEMLGEGLCC_OFFSET))(this);
		}

	};
