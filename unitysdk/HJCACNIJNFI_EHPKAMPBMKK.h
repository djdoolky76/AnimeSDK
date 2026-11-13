#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJAFIDKDKK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;
namespace System { class String; }

#define HJCACNIJNFI_EHPKAMPBMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x181F3130)

inline static constexpr unsigned int HJCACNIJNFI_EHPKAMPBMKK_TypeDefinitionIndex = 71271;

	class HJCACNIJNFI_EHPKAMPBMKK : public ::System::Object
	{
	public:
		::System::String* BIOPPFFJPGI; // 0x10
		::LAJCPEFEOPN* IHBKBFFMEMF; // 0x18
		::System::String* KBPHPMLIHBG; // 0x20
		::IMJAFIDKDKK KIHGHFHGNFN; // 0x28
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x68
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x78
		::System::Boolean OJKJMJIDGPG; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCACNIJNFI_EHPKAMPBMKK_CTOR_OFFSET))(this);
		}

	};
