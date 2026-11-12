#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define JOMGPHIGMLE_CTOR_OFFSET UNITYSDK_OFFSET(0xBAD5810)
#define JOMGPHIGMLE_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0xBAD5820)

inline static constexpr unsigned int JOMGPHIGMLE_TypeDefinitionIndex = 66646;

	class JOMGPHIGMLE : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + JOMGPHIGMLE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMGPHIGMLE_FJNIJBIIFGO_OFFSET))(this);
		}

	};
