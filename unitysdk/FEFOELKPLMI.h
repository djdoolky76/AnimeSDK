#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEFOELKPLMI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x132067B0)
#define FEFOELKPLMI__CTOR_OFFSET UNITYSDK_OFFSET(0x13206790)

inline static constexpr unsigned int FEFOELKPLMI_TypeDefinitionIndex = 77660;

class FEFOELKPLMI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KFFIGIHKDCG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* AHDPNAFHIHK; // 0x18
	::System::Int32 JOGJHDBEDPN; // 0x20
	::System::Int32 FDOGGANACAP; // 0x24
	::System::Int32 ONGKNJDGBLJ; // 0x28
	::System::Int32 JBMMGBOMDCO; // 0x2C

	::System::Void _ctor(::System::Int32 ADFNJNOELMG, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FEFOELKPLMI__CTOR_OFFSET))(this, ADFNJNOELMG, MOBNMDEDJIP);
	}

	::System::Void _ctor_1(::System::Int32 ADFNJNOELMG, ::System::Int32 MOBNMDEDJIP, ::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FEFOELKPLMI__CTOR_1_OFFSET))(this, ADFNJNOELMG, MOBNMDEDJIP, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
