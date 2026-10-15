#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SpikeTrapState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class PEEDLCHFAFL;

#define PDACHCELPMB_BKIJDOKHBLJ_OFFSET UNITYSDK_OFFSET(0xC00B710)
#define PDACHCELPMB_CTOR_OFFSET UNITYSDK_OFFSET(0xC00B700)
#define PDACHCELPMB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC00BB60)
#define PDACHCELPMB_IDHNJKHEBMJ_OFFSET UNITYSDK_OFFSET(0xC00BA50)

	class PDACHCELPMB : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::EFODGECFLLC* FKINCGODJEP; // 0x18
		::System::Void _ctor(::EFODGECFLLC* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFODGECFLLC*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + PDACHCELPMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BKIJDOKHBLJ(::HIOEAKHGILF* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState))((::PBYTE)hIl2Cpp + PDACHCELPMB_BKIJDOKHBLJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 IDHNJKHEBMJ(::HIOEAKHGILF* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32))((::PBYTE)hIl2Cpp + PDACHCELPMB_IDHNJKHEBMJ_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDACHCELPMB_DISPOSE_OFFSET))(this);
		}

	};
