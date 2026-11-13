#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define JGDJHBBGGEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1934AD40)
#define JGDJHBBGGEO_FAGLKDIJIEF_OFFSET UNITYSDK_OFFSET(0x1934AE40)
#define JGDJHBBGGEO_IKKFEBKBAKD_OFFSET UNITYSDK_OFFSET(0x1934AEE0)
#define JGDJHBBGGEO_ILFCOLOIBEM_OFFSET UNITYSDK_OFFSET(0x1934ADA0)
#define JGDJHBBGGEO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1934AD50)

inline static constexpr unsigned int JGDJHBBGGEO_TypeDefinitionIndex = 66614;

	class JGDJHBBGGEO : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + JGDJHBBGGEO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + JGDJHBBGGEO_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 ILFCOLOIBEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDJHBBGGEO_ILFCOLOIBEM_OFFSET))(this);
		}

		::System::Boolean FAGLKDIJIEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDJHBBGGEO_FAGLKDIJIEF_OFFSET))(this);
		}

		::System::UInt32 IKKFEBKBAKD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDJHBBGGEO_IKKFEBKBAKD_OFFSET))(this);
		}

	};
