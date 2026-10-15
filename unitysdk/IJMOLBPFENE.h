#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DACDFPKGELK.h"
class LEEEMFAEDLN;
namespace System { class String; }

#define IJMOLBPFENE_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x1646F070)
#define IJMOLBPFENE_CTOR_OFFSET UNITYSDK_OFFSET(0x1646EF70)
#define IJMOLBPFENE_EIPJNDDBOGL_OFFSET UNITYSDK_OFFSET(0x1646F180)
#define IJMOLBPFENE_OOPJCBAIKMA_OFFSET UNITYSDK_OFFSET(0x1646F250)

	class IJMOLBPFENE : public ::System::Object
	{
	public:
		::System::String* LDNLKDCNEBJ; // 0x10
		::UnityEngine::Vector3 ILKFLOGDICE; // 0x18
		::System::Single HBDJCFFDGDD; // 0x24
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
