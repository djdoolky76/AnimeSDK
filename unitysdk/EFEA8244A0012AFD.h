#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/BF6B21D7FB02DE05.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class B050A49EC31B39FA;
namespace ABC::UI { class MonoPrefabLoader; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFEA8244A0012AFD_AA5A2A2A5B2D5C25_OFFSET UNITYSDK_OFFSET(0x22DCC00)
#define EFEA8244A0012AFD_B86883D7E66746FA_OFFSET UNITYSDK_OFFSET(0x22DD020)
#define EFEA8244A0012AFD_BAAB973748FB8917_OFFSET UNITYSDK_OFFSET(0x22DCEF0)
#define EFEA8244A0012AFD_E0F49A14684694BC_OFFSET UNITYSDK_OFFSET(0x22DD200)
#define EFEA8244A0012AFD_E2C6F2285659D216_OFFSET UNITYSDK_OFFSET(0x22DD3E0)
#define EFEA8244A0012AFD_F6691C1FDBE16930_OFFSET UNITYSDK_OFFSET(0x22DCFB0)
#define EFEA8244A0012AFD_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x22DCD50)
#define EFEA8244A0012AFD__CTOR_OFFSET UNITYSDK_OFFSET(0x22DD560)

inline static constexpr unsigned int EFEA8244A0012AFD_TypeDefinitionIndex = 7302;

class EFEA8244A0012AFD : public ::System::Object
{
public:
	::System::Nullable_1<::E68AA4EB51923C98::BF6B21D7FB02DE05> B633105C16BF1326; // 0x10
	::System::Collections::Generic::List_1<::B050A49EC31B39FA*>* BC1401E1048D8E81; // 0x18
	::System::Action* E04A060E3B4E7376; // 0x20

	::System::Boolean E2C6F2285659D216(::System::UInt32 BC8A36DD3606E794)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFEA8244A0012AFD_E2C6F2285659D216_OFFSET))(this, BC8A36DD3606E794);
	}

	::System::Void _ctor(::ABC::UI::MonoPrefabLoader* E6305B8DDD56CFBC, ::System::Action* EAEBB580C1ACF0EA)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoPrefabLoader*, ::System::Action*))((::PBYTE)hIl2Cpp + EFEA8244A0012AFD__CTOR_OFFSET))(this, E6305B8DDD56CFBC, EAEBB580C1ACF0EA);
	}

	::System::Nullable_1<::System::UInt32> BAAB973748FB8917()
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEA8244A0012AFD_BAAB973748FB8917_OFFSET))(this);
	}

	::System::Boolean F6691C1FDBE16930()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEA8244A0012AFD_F6691C1FDBE16930_OFFSET))(this);
	}

	::System::Void AA5A2A2A5B2D5C25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEA8244A0012AFD_AA5A2A2A5B2D5C25_OFFSET))(this);
	}

	::System::Void B86883D7E66746FA(::System::Collections::Generic::List_1<::System::UInt32>* A5186934037221CA, ::System::Nullable_1<::System::UInt32> B2C7EFC78EE92D9D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + EFEA8244A0012AFD_B86883D7E66746FA_OFFSET))(this, A5186934037221CA, B2C7EFC78EE92D9D);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEA8244A0012AFD_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void E0F49A14684694BC(::E68AA4EB51923C98::BF6B21D7FB02DE05 E1C9D5D57F5AB79E, ::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::BF6B21D7FB02DE05, ::System::Boolean))((::PBYTE)hIl2Cpp + EFEA8244A0012AFD_E0F49A14684694BC_OFFSET))(this, E1C9D5D57F5AB79E, F1AACB3553F67303);
	}
};
