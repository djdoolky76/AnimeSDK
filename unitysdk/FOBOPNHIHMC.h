#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace System { class Object; }

#define FOBOPNHIHMC_CTOR_OFFSET UNITYSDK_OFFSET(0x158E1440)
#define FOBOPNHIHMC_GAOJGOJPCOJ_OFFSET UNITYSDK_OFFSET(0x158E13B0)
#define FOBOPNHIHMC__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x158E1290)

inline static constexpr unsigned int FOBOPNHIHMC_TypeDefinitionIndex = 63530;

	class FOBOPNHIHMC : public ::RPG::Client::BaseModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBOPNHIHMC_CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBOPNHIHMC__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void GAOJGOJPCOJ(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FOBOPNHIHMC_GAOJGOJPCOJ_OFFSET))(this, a1, a2);
		}

	};
