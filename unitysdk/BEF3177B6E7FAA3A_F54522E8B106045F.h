#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEF3177B6E7FAA3A_F54522E8B106045F_E110BDDAF4925FB4_OFFSET UNITYSDK_OFFSET(0x29B3BA0)
#define BEF3177B6E7FAA3A_F54522E8B106045F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BEF3177B6E7FAA3A_F54522E8B106045F_TypeDefinitionIndex = 15595;

class BEF3177B6E7FAA3A_F54522E8B106045F : public ::System::Object
{
public:
	::System::String* B5046D57FE148F88; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_F54522E8B106045F__CTOR_OFFSET))(this);
	}

	::System::Void E110BDDAF4925FB4(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* FA7C90E816B091EC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_F54522E8B106045F_E110BDDAF4925FB4_OFFSET))(this, FA7C90E816B091EC);
	}
};
