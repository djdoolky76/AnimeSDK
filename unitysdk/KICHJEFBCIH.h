#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KICHJEFBCIH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A307190)
#define KICHJEFBCIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3071E0)
#define KICHJEFBCIH_LGEGPGKNFOO_OFFSET UNITYSDK_OFFSET(0x1A307180)

inline static constexpr unsigned int KICHJEFBCIH_TypeDefinitionIndex = 44491;

	class KICHJEFBCIH : public ::System::Object
	{
	public:
		::System::Int32 MCOFIICMFCJ; // 0x10
		::System::Single NGOBPILMMNH; // 0x14
		::System::Boolean KMGIHDHMBJB; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 MNMHMECGDAK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICHJEFBCIH_CTOR_OFFSET))(this);
		}

		::System::Boolean LGEGPGKNFOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KICHJEFBCIH_LGEGPGKNFOO_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICHJEFBCIH_CLEAR_OFFSET))(this);
		}

	};
