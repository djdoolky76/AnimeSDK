#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILEDHBPJGFC.h"
#include "unitysdk/NDGBEEKKHFI.h"
class AEHPHKBKPJA;
class GLLAKJJGELM;
class PLAJONHLDJN;

#define FENBIHEDDPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15727020)

inline static constexpr unsigned int FENBIHEDDPB_TypeDefinitionIndex = 60383;

	class FENBIHEDDPB : public ::ILEDHBPJGFC
	{
	public:
		::GLLAKJJGELM* MEEGCHMGNAJ; // 0x30
		::NDGBEEKKHFI NHACJDFHFEI; // 0x38
		::AEHPHKBKPJA* FOFKAOELGPN; // 0x50
		::PLAJONHLDJN* JJAOKAJJOBM; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBIHEDDPB_CTOR_OFFSET))(this);
		}

	};
