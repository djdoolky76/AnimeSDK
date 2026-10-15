#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDLCNGPGEFP.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
class ICKLANINJDB;

#define BHCEEHPIGFL_CTOR_OFFSET UNITYSDK_OFFSET(0xB46EA10)
#define BHCEEHPIGFL_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0xB46EA00)

inline static constexpr unsigned int BHCEEHPIGFL_TypeDefinitionIndex = 78052;

	class BHCEEHPIGFL : public ::FDLCNGPGEFP
	{
	public:
		::RPG::Client::LittleGameShare::MsgRetcode _Retcode_k__BackingField; // 0x10
		::System::Void _ctor(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + BHCEEHPIGFL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::MsgRetcode get_Retcode()
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCEEHPIGFL_GET_RETCODE_OFFSET))(this);
		}

	};
