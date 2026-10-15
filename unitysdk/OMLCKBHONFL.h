#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define OMLCKBHONFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF31290)
#define OMLCKBHONFL_NHDIMMHPHJI_OFFSET UNITYSDK_OFFSET(0xBF312F0)
#define OMLCKBHONFL_OPDDNPDNDNN_OFFSET UNITYSDK_OFFSET(0xBF31390)
#define OMLCKBHONFL_UPDATE_OFFSET UNITYSDK_OFFSET(0xBF312A0)

	class OMLCKBHONFL : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + OMLCKBHONFL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + OMLCKBHONFL_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 NHDIMMHPHJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLCKBHONFL_NHDIMMHPHJI_OFFSET))(this);
		}

		::System::UInt32 OPDDNPDNDNN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLCKBHONFL_OPDDNPDNDNN_OFFSET))(this);
		}

	};
