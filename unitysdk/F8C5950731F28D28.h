#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class F41CC6989D2994B2;
namespace ABC::UI { class MonoPrefabLoader; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class FCECB52A00C1344E;

#define F8C5950731F28D28_AA5A2A2A5B2D5C25_OFFSET UNITYSDK_OFFSET(0x2286FF0)
#define F8C5950731F28D28_B86883D7E66746FA_OFFSET UNITYSDK_OFFSET(0x2287400)
#define F8C5950731F28D28_E0F49A14684694BC_OFFSET UNITYSDK_OFFSET(0x22875B0)
#define F8C5950731F28D28_E2C6F2285659D216_OFFSET UNITYSDK_OFFSET(0x22877A0)
#define F8C5950731F28D28_E6FC19265BCC980C_OFFSET UNITYSDK_OFFSET(0x2287300)
#define F8C5950731F28D28_F6691C1FDBE16930_OFFSET UNITYSDK_OFFSET(0x2287380)
#define F8C5950731F28D28_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x2287160)
#define F8C5950731F28D28__CTOR_OFFSET UNITYSDK_OFFSET(0x22878F0)

inline static constexpr unsigned int F8C5950731F28D28_TypeDefinitionIndex = 7023;

class F8C5950731F28D28 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::F41CC6989D2994B2*>* FF7A56DC0A597A1F; // 0x10
	::FCECB52A00C1344E<::System::UInt32>* B375A218F916C26C; // 0x18
	::System::Action* B27D9E87385C756A; // 0x20

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8C5950731F28D28_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Boolean E2C6F2285659D216(::System::UInt32 BC8A36DD3606E794)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F8C5950731F28D28_E2C6F2285659D216_OFFSET))(this, BC8A36DD3606E794);
	}

	::System::Void B86883D7E66746FA(::System::Collections::Generic::List_1<::System::UInt32>* A5186934037221CA, ::System::Nullable_1<::System::UInt32> B2C7EFC78EE92D9D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + F8C5950731F28D28_B86883D7E66746FA_OFFSET))(this, A5186934037221CA, B2C7EFC78EE92D9D);
	}

	::System::Void _ctor(::ABC::UI::MonoPrefabLoader* E6305B8DDD56CFBC, ::System::Action* EAEBB580C1ACF0EA)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoPrefabLoader*, ::System::Action*))((::PBYTE)hIl2Cpp + F8C5950731F28D28__CTOR_OFFSET))(this, E6305B8DDD56CFBC, EAEBB580C1ACF0EA);
	}

	::System::Void E0F49A14684694BC(::System::UInt32 B28130503AE8B243, ::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + F8C5950731F28D28_E0F49A14684694BC_OFFSET))(this, B28130503AE8B243, F1AACB3553F67303);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* E6FC19265BCC980C()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F8C5950731F28D28_E6FC19265BCC980C_OFFSET))(this);
	}

	::System::Boolean F6691C1FDBE16930()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F8C5950731F28D28_F6691C1FDBE16930_OFFSET))(this);
	}

	::System::Void AA5A2A2A5B2D5C25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8C5950731F28D28_AA5A2A2A5B2D5C25_OFFSET))(this);
	}
};
