#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJAFIDKDKK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;
namespace System { class String; }

#define HJCACNIJNFI_EHPKAMPBMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x16C52460)

inline static constexpr unsigned int HJCACNIJNFI_EHPKAMPBMKK_TypeDefinitionIndex = 71271;

	class HJCACNIJNFI_EHPKAMPBMKK : public ::System::Object
	{
	public:
		::System::String* BIOPPFFJPGI; // 0x10
		::LAJCPEFEOPN* IHBKBFFMEMF; // 0x18
		::System::String* KBPHPMLIHBG; // 0x20
		::System::Boolean OJKJMJIDGPG; // 0x28
		::System::Byte _padding0[0x3];
		::IMJAFIDKDKK KIHGHFHGNFN; // 0x2C
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x6C
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCACNIJNFI_EHPKAMPBMKK_CTOR_OFFSET))(this);
		}

	};
