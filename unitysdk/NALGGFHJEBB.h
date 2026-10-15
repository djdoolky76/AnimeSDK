#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NALGGFHJEBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BA3D0)
#define NALGGFHJEBB_NOIBFOCJMDB_OFFSET UNITYSDK_OFFSET(0x1C4BA3E0)
#define NALGGFHJEBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4C6620)

	class NALGGFHJEBB : public ::System::Object
	{
	public:
		::RPG::Client::SectionType GMPGDEINODK; // 0x10
		::System::UInt32 JFAGECNFHJL; // 0x14
		::System::UInt32 ELFDDLBMMPC; // 0x18
		::System::UInt32 DEFBCHJCDGL; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALGGFHJEBB_CTOR_OFFSET))(this);
		}

		::System::UInt32 NOIBFOCJMDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALGGFHJEBB_NOIBFOCJMDB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALGGFHJEBB_TOSTRING_OFFSET))(this);
		}

	};
