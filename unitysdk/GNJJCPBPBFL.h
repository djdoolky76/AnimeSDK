#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPOIGEKGJPA;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System { class String; }

#define GNJJCPBPBFL_JKCBNMOAJJE_OFFSET UNITYSDK_OFFSET(0x13DF2910)
#define GNJJCPBPBFL_LADFBEHMOMH_OFFSET UNITYSDK_OFFSET(0x13DF29B0)
#define GNJJCPBPBFL_MHNNIGMCDHP_OFFSET UNITYSDK_OFFSET(0x13DF28A0)
#define GNJJCPBPBFL__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF2890)

inline static constexpr unsigned int GNJJCPBPBFL_TypeDefinitionIndex = 45668;

class GNJJCPBPBFL : public ::System::Object
{
public:
	::DPOIGEKGJPA* OGAKFIANEDK; // 0x10
	::MoleMole::InLevelBuddyDataItem* LCEFNMNLJOE; // 0x18
	::System::Int32 DMBMOMEKJFO; // 0x20
	::System::Boolean OKDMHCBKNGI; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 DPNDCBICEMH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJJCPBPBFL__CTOR_OFFSET))(this);
	}

	::System::String* MHNNIGMCDHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJJCPBPBFL_MHNNIGMCDHP_OFFSET))(this);
	}

	::System::Boolean JKCBNMOAJJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJJCPBPBFL_JKCBNMOAJJE_OFFSET))(this);
	}

	::System::Boolean LADFBEHMOMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJJCPBPBFL_LADFBEHMOMH_OFFSET))(this);
	}
};
