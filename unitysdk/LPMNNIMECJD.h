#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"
class AJKLCFNAHBH;
namespace System { class String; }

#define LPMNNIMECJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC07650)
#define LPMNNIMECJD_FNPCAPGFMNB_OFFSET UNITYSDK_OFFSET(0x1EC079C0)
#define LPMNNIMECJD_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1EC06670)
#define LPMNNIMECJD_SET_OFFSET UNITYSDK_OFFSET(0x1EC07960)

inline static constexpr unsigned int LPMNNIMECJD_TypeDefinitionIndex = 35219;

	class LPMNNIMECJD : public ::System::Object
	{
	public:
		::UnityEngine::SystemLanguage AIKAPJELHNK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMNNIMECJD_CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPMNNIMECJD_SET_OFFSET))(this, a1);
		}

		static ::UnityEngine::SystemLanguage MNGGAOFNGIP(::AJKLCFNAHBH* a1)
		{
			return ((::UnityEngine::SystemLanguage(*)(::AJKLCFNAHBH*))((::PBYTE)hIl2Cpp + LPMNNIMECJD_MNGGAOFNGIP_OFFSET))(a1);
		}

		::UnityEngine::SystemLanguage FNPCAPGFMNB(::System::String* a1)
		{
			return ((::UnityEngine::SystemLanguage(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPMNNIMECJD_FNPCAPGFMNB_OFFSET))(this, a1);
		}

	};
