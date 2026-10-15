#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
#include "unitysdk/UnityEngine/KeyCode.h"
class FDPALAEIHPB;

#define CJNKHKKFCMF_ABHOBELFLJC_OFFSET UNITYSDK_OFFSET(0x1C9E3F70)
#define CJNKHKKFCMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E3F20)
#define CJNKHKKFCMF_DABEFMAGJLD_OFFSET UNITYSDK_OFFSET(0x1C9E3F30)
#define CJNKHKKFCMF_IKNBGBFGMCD_OFFSET UNITYSDK_OFFSET(0x1C9E3FB0)
#define CJNKHKKFCMF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C9E3FF0)

inline static constexpr unsigned int CJNKHKKFCMF_TypeDefinitionIndex = 42534;

	class CJNKHKKFCMF : public ::HLFHMKMJNPK
	{
	public:
		::UnityEngine::KeyCode JGBJOOCNCFD; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + CJNKHKKFCMF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean DABEFMAGJLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKHKKFCMF_DABEFMAGJLD_OFFSET))(this);
		}

		::System::Boolean ABHOBELFLJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKHKKFCMF_ABHOBELFLJC_OFFSET))(this);
		}

		::System::Int32 IKNBGBFGMCD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKHKKFCMF_IKNBGBFGMCD_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNKHKKFCMF_PAGKOAEOLKA_OFFSET))(this);
		}

	};
