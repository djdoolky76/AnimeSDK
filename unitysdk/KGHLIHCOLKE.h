#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelEnvType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGHLIHCOLKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB80F0)

	class KGHLIHCOLKE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* GCDEPMINDBH; // 0x10
		::System::UInt32 GBNPNJPBBLP; // 0x18
		::System::Boolean AAMBBADINCL; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FourRotateVoxelEnvType FOLGBLOBAPM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHLIHCOLKE_CTOR_OFFSET))(this);
		}

	};
