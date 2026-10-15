#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"
#include "unitysdk/System/Object.h"
class DPNEAKNHADE;
namespace RPG { template <typename T> class PoolList_1; }

#define DELPKNBPNLN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA25800)
#define DELPKNBPNLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA259B0)

	class DELPKNBPNLN : public ::System::Object
	{
	public:
		::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean> PKDKLMCDLAE; // 0x10
		::System::Byte _padding0[0x88];
		::RPG::PoolList_1<::DPNEAKNHADE*>* JNKMGENNMDJ; // 0xA0
		::System::UInt32 OKEFEBGFHBB; // 0xA8
		::System::Boolean BOECFAMLMEH; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELPKNBPNLN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELPKNBPNLN_CLEAR_OFFSET))(this);
		}

	};
