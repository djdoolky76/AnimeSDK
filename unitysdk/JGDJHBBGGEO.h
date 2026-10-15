#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define JGDJHBBGGEO_CTOR_OFFSET UNITYSDK_OFFSET(0xB198D20)
#define JGDJHBBGGEO_FAGLKDIJIEF_OFFSET UNITYSDK_OFFSET(0xB198E20)
#define JGDJHBBGGEO_IKKFEBKBAKD_OFFSET UNITYSDK_OFFSET(0xB198EC0)
#define JGDJHBBGGEO_ILFCOLOIBEM_OFFSET UNITYSDK_OFFSET(0xB198D80)
#define JGDJHBBGGEO_UPDATE_OFFSET UNITYSDK_OFFSET(0xB198D30)

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
