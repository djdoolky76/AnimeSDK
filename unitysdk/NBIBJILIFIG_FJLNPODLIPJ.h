#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"
class ICKLANINJDB;
class MCKLINCMDKK;
class NBIBJILIFIG_DNOOPHCHPIH;
class NBIBJILIFIG_LJEGDMAPEPF;

#define NBIBJILIFIG_FJLNPODLIPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7578F0)
#define NBIBJILIFIG_FJLNPODLIPJ_GET_RSPMSGID_OFFSET UNITYSDK_OFFSET(0x1C757F20)
#define NBIBJILIFIG_FJLNPODLIPJ_HFCDEKNKNHB_OFFSET UNITYSDK_OFFSET(0x1C7580A0)
#define NBIBJILIFIG_FJLNPODLIPJ_PROCESS_OFFSET UNITYSDK_OFFSET(0x1C757F30)

inline static constexpr unsigned int NBIBJILIFIG_FJLNPODLIPJ_TypeDefinitionIndex = 36962;

	class NBIBJILIFIG_FJLNPODLIPJ : public ::System::Object
	{
	public:
		::NBIBJILIFIG_DNOOPHCHPIH* ADFOIPBBEHI; // 0x10
		::System::UInt32 _RspMsgID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::NBIBJILIFIG_DNOOPHCHPIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NBIBJILIFIG_DNOOPHCHPIH*))((::PBYTE)hIl2Cpp + NBIBJILIFIG_FJLNPODLIPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RspMsgID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBJILIFIG_FJLNPODLIPJ_GET_RSPMSGID_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::MsgRetcode Process(::System::UInt32 a1, ::MCKLINCMDKK* a2, ::ICKLANINJDB* a3, ::NBIBJILIFIG_LJEGDMAPEPF* a4)
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::MCKLINCMDKK*, ::ICKLANINJDB*, ::NBIBJILIFIG_LJEGDMAPEPF*))((::PBYTE)hIl2Cpp + NBIBJILIFIG_FJLNPODLIPJ_PROCESS_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::LittleGameShare::MsgRetcode HFCDEKNKNHB(::System::UInt32 a1, ::MCKLINCMDKK* a2, ::ICKLANINJDB* a3, ::NBIBJILIFIG_LJEGDMAPEPF* a4)
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::MCKLINCMDKK*, ::ICKLANINJDB*, ::NBIBJILIFIG_LJEGDMAPEPF*))((::PBYTE)hIl2Cpp + NBIBJILIFIG_FJLNPODLIPJ_HFCDEKNKNHB_OFFSET))(this, a1, a2, a3, a4);
		}

	};
