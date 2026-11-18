#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class LJOBPBEAFDA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNDIFMAINIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F5820)

inline static constexpr unsigned int PNDIFMAINIM_TypeDefinitionIndex = 44647;

class PNDIFMAINIM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* DPMJNLHKDCJ; // 0x10
	::System::Collections::Generic::List_1<::LJOBPBEAFDA*>* GMCPKHJAEAK; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* PLPNOOICCHL; // 0x20
	::System::String* IIGNJAIIMEP; // 0x28
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FightModeType, ::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>*>* DIEHGCPOFHD; // 0x30
	::System::Boolean EPIDDEALKJD; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single MLDNLLPNNEO; // 0x3C
	::System::Single BAOKAFDLKNI; // 0x40
	::System::Nullable_1<::System::Single> ACJMOAFHBJO; // 0x44
	::System::Single APKDIGKDKCC; // 0x4C
	::System::Single PCOIKBHHEKD; // 0x50
	::System::Single GCKJLPHHJAL; // 0x54
	::System::Single MCPFPHODNIA; // 0x58
	::System::Single FMNIGANBOGM; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDIFMAINIM__CTOR_OFFSET))(this);
	}
};
