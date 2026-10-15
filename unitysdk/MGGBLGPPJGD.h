#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEGNFCCGONN;

#define MGGBLGPPJGD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92A7E0)
#define MGGBLGPPJGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92A840)

	class MGGBLGPPJGD : public ::System::Object
	{
	public:
		::NEGNFCCGONN* BPAPBAFOMCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBLGPPJGD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBLGPPJGD_CLEAR_OFFSET))(this);
		}

	};
