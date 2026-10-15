#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define GCCCMKAKPGA_CTOR_OFFSET UNITYSDK_OFFSET(0x15960F90)

	class GCCCMKAKPGA : public ::System::Object
	{
	public:
		::RPG::Client::TextID BEFMGLFEILP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCCMKAKPGA_CTOR_OFFSET))(this);
		}

	};
