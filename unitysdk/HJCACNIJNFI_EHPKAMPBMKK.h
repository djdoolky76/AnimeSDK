#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJAFIDKDKK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;
namespace System { class String; }

#define HJCACNIJNFI_EHPKAMPBMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF65D0)

inline static constexpr unsigned int HJCACNIJNFI_EHPKAMPBMKK_TypeDefinitionIndex = 69317;

	class HJCACNIJNFI_EHPKAMPBMKK : public ::System::Object
	{
	public:
		::System::String* BIOPPFFJPGI; // 0x10
		::System::String* KBPHPMLIHBG; // 0x18
		::LAJCPEFEOPN* IHBKBFFMEMF; // 0x20
		::IMJAFIDKDKK KIHGHFHGNFN; // 0x28
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x68
		::System::Boolean OJKJMJIDGPG; // 0x78
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCACNIJNFI_EHPKAMPBMKK_CTOR_OFFSET))(this);
		}

	};
