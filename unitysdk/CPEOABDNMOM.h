#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CPEOABDNMOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1917B530)

inline static constexpr unsigned int CPEOABDNMOM_TypeDefinitionIndex = 64357;

	class CPEOABDNMOM : public ::System::Object
	{
	public:
		::System::UInt32 LLDCHLHNADA; // 0x10
		::System::Int32 HHNGHAKGEBG; // 0x14
		::System::Boolean CPONHCAOFDH; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion JNKLNLKHGBB; // 0x1C
		::System::UInt32 DMKMAAEAOGD; // 0x2C
		::System::UInt32 PCCCKLNCLHB; // 0x30
		::UnityEngine::Vector3 ELFDIEFKCMH; // 0x34
		::System::UInt32 KAGEJBMFGFD; // 0x40
		::System::UInt32 DILCDKOHIFG; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEOABDNMOM_CTOR_OFFSET))(this);
		}

	};
