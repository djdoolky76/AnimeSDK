#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define HEBDCPNECAD_BBKMBAFIOLA_OFFSET UNITYSDK_OFFSET(0x16B87200)
#define HEBDCPNECAD_CTOR_OFFSET UNITYSDK_OFFSET(0x16B871A0)
#define HEBDCPNECAD_JIONJNOOEMD_OFFSET UNITYSDK_OFFSET(0x16B872A0)
#define HEBDCPNECAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x16B871B0)

inline static constexpr unsigned int HEBDCPNECAD_TypeDefinitionIndex = 66611;

	class HEBDCPNECAD : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + HEBDCPNECAD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + HEBDCPNECAD_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 BBKMBAFIOLA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBDCPNECAD_BBKMBAFIOLA_OFFSET))(this);
		}

		::System::UInt32 JIONJNOOEMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBDCPNECAD_JIONJNOOEMD_OFFSET))(this);
		}

	};
