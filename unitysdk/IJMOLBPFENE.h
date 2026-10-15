#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DACDFPKGELK.h"
class LEEEMFAEDLN;
namespace System { class String; }

#define IJMOLBPFENE_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x164619A0)
#define IJMOLBPFENE_CTOR_OFFSET UNITYSDK_OFFSET(0x164618A0)
#define IJMOLBPFENE_EIPJNDDBOGL_OFFSET UNITYSDK_OFFSET(0x16461AB0)
#define IJMOLBPFENE_OOPJCBAIKMA_OFFSET UNITYSDK_OFFSET(0x16461B80)

inline static constexpr unsigned int IJMOLBPFENE_TypeDefinitionIndex = 80647;

	class IJMOLBPFENE : public ::System::Object
	{
	public:
		::System::String* LDNLKDCNEBJ; // 0x10
		::System::Single HBDJCFFDGDD; // 0x18
		::UnityEngine::Vector3 ILKFLOGDICE; // 0x1C
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + IJMOLBPFENE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::DACDFPKGELK AKJABINEGDJ()
		{
			return ((::DACDFPKGELK(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMOLBPFENE_AKJABINEGDJ_OFFSET))(this);
		}

		::DACDFPKGELK OOPJCBAIKMA(::System::Single a1)
		{
			return ((::DACDFPKGELK(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJMOLBPFENE_OOPJCBAIKMA_OFFSET))(this, a1);
		}

		::LEEEMFAEDLN* EIPJNDDBOGL(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::LEEEMFAEDLN*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IJMOLBPFENE_EIPJNDDBOGL_OFFSET))(this, a1, a2);
		}

	};
