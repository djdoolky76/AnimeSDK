#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBKGMECMMNI__CTOR_OFFSET UNITYSDK_OFFSET(0xF9F0020)

inline static constexpr unsigned int FBKGMECMMNI_TypeDefinitionIndex = 38915;

class FBKGMECMMNI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* OPCEPHOHFDC; // 0x10
	::System::String* JBHCOILFGCK; // 0x18
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* DBOEHFHNMBG; // 0x20
	::MoleMole::Config::ScreenEffectType MFLCCPAHBKN; // 0x28
	::System::Int32 FGLBFBNPECA; // 0x2C
	::System::UInt32 AECCAPBJJIN; // 0x30
	::System::Int32 DBPBPCEMMEE; // 0x34
	::System::Boolean PNFDNKPFICL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGMECMMNI__CTOR_OFFSET))(this);
	}
};
