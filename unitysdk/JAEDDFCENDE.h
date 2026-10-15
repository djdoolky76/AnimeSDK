#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
class ALMFLCJCHKP;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JAEDDFCENDE_CTOR_OFFSET UNITYSDK_OFFSET(0x16541340)
#define JAEDDFCENDE_ELOKBDDIPJP_OFFSET UNITYSDK_OFFSET(0x165416D0)
#define JAEDDFCENDE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16541690)
#define JAEDDFCENDE_KGDLPJGFLFM_OFFSET UNITYSDK_OFFSET(0x16541720)

inline static constexpr unsigned int JAEDDFCENDE_TypeDefinitionIndex = 77951;

	class JAEDDFCENDE : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* ENOJCDIEPHA; // 0x20
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + JAEDDFCENDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDDFCENDE_EXECUTE_OFFSET))(this);
		}

		::System::Void ELOKBDDIPJP(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + JAEDDFCENDE_ELOKBDDIPJP_OFFSET))(this, a1);
		}

		::System::Void KGDLPJGFLFM(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + JAEDDFCENDE_KGDLPJGFLFM_OFFSET))(this, a1);
		}

	};
