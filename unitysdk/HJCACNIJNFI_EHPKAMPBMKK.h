#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJAFIDKDKK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;
namespace System { class String; }

#define HJCACNIJNFI_EHPKAMPBMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D03050)

inline static constexpr unsigned int HJCACNIJNFI_EHPKAMPBMKK_TypeDefinitionIndex = 69317;

	class HJCACNIJNFI_EHPKAMPBMKK : public ::System::Object
	{
	public:
		::LAJCPEFEOPN* IHBKBFFMEMF; // 0x10
		::System::String* KBPHPMLIHBG; // 0x18
		::System::String* BIOPPFFJPGI; // 0x20
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x28
		::System::Boolean OJKJMJIDGPG; // 0x34
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x38
		::IMJAFIDKDKK KIHGHFHGNFN; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCACNIJNFI_EHPKAMPBMKK_CTOR_OFFSET))(this);
		}

	};
