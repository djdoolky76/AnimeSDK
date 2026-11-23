#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/F5F88EA934191AA1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class EC9411113C4D02AF;
namespace ABC::UI { class MonoPrefabLoader; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F99966F90315F067_AA5A2A2A5B2D5C25_OFFSET UNITYSDK_OFFSET(0x21DFDF0)
#define F99966F90315F067_B86883D7E66746FA_OFFSET UNITYSDK_OFFSET(0x21E0210)
#define F99966F90315F067_BAAB973748FB8917_OFFSET UNITYSDK_OFFSET(0x21E00E0)
#define F99966F90315F067_E0F49A14684694BC_OFFSET UNITYSDK_OFFSET(0x21E03F0)
#define F99966F90315F067_E2C6F2285659D216_OFFSET UNITYSDK_OFFSET(0x21E05D0)
#define F99966F90315F067_F6691C1FDBE16930_OFFSET UNITYSDK_OFFSET(0x21E01A0)
#define F99966F90315F067_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x21DFF40)
#define F99966F90315F067__CTOR_OFFSET UNITYSDK_OFFSET(0x21E06E0)

inline static constexpr unsigned int F99966F90315F067_TypeDefinitionIndex = 8930;

class F99966F90315F067 : public ::System::Object
{
public:
	::System::Nullable_1<::E68AA4EB51923C98::F5F88EA934191AA1> F708EEF1F1430C41; // 0x10
	::System::Collections::Generic::List_1<::EC9411113C4D02AF*>* BC1401E1048D8E81; // 0x18
	::System::Action* E04A060E3B4E7376; // 0x20

	::System::Boolean F6691C1FDBE16930()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F99966F90315F067_F6691C1FDBE16930_OFFSET))(this);
	}

	::System::Void AA5A2A2A5B2D5C25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F99966F90315F067_AA5A2A2A5B2D5C25_OFFSET))(this);
	}

	::System::Void B86883D7E66746FA(::System::Collections::Generic::List_1<::System::UInt32>* A5186934037221CA, ::System::Nullable_1<::System::UInt32> B2C7EFC78EE92D9D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + F99966F90315F067_B86883D7E66746FA_OFFSET))(this, A5186934037221CA, B2C7EFC78EE92D9D);
	}

	::System::Nullable_1<::System::UInt32> BAAB973748FB8917()
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + F99966F90315F067_BAAB973748FB8917_OFFSET))(this);
	}

	::System::Boolean E2C6F2285659D216(::System::UInt32 BC8A36DD3606E794)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F99966F90315F067_E2C6F2285659D216_OFFSET))(this, BC8A36DD3606E794);
	}

	::System::Void _ctor(::ABC::UI::MonoPrefabLoader* E6305B8DDD56CFBC, ::System::Action* EAEBB580C1ACF0EA)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoPrefabLoader*, ::System::Action*))((::PBYTE)hIl2Cpp + F99966F90315F067__CTOR_OFFSET))(this, E6305B8DDD56CFBC, EAEBB580C1ACF0EA);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F99966F90315F067_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void E0F49A14684694BC(::E68AA4EB51923C98::F5F88EA934191AA1 F67170E61EA60069, ::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::F5F88EA934191AA1, ::System::Boolean))((::PBYTE)hIl2Cpp + F99966F90315F067_E0F49A14684694BC_OFFSET))(this, F67170E61EA60069, F1AACB3553F67303);
	}
};
