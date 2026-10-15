#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPHJECLHDKJ;
class NBILAHJEBCL;

#define BACGJKIKHEO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C5123A0)
#define BACGJKIKHEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C512390)

inline static constexpr unsigned int BACGJKIKHEO_TypeDefinitionIndex = 41867;

	class BACGJKIKHEO : public ::System::Object
	{
	public:
		::MPHJECLHDKJ* IDJNMDGBKKI; // 0x10
		::System::Void _ctor(::MPHJECLHDKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPHJECLHDKJ*))((::PBYTE)hIl2Cpp + BACGJKIKHEO_CTOR_OFFSET))(this, a1);
		}

		::NBILAHJEBCL* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::NBILAHJEBCL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BACGJKIKHEO_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
