#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define F3DBC20454BF1CBB_F5628F8349D4A8A6_BA1528FC9151F02D_OFFSET UNITYSDK_OFFSET(0x1EC4C50)
#define F3DBC20454BF1CBB_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC51C0)
#define F3DBC20454BF1CBB_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3DBC20454BF1CBB_F5628F8349D4A8A6_TypeDefinitionIndex = 6771;

class F3DBC20454BF1CBB_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F3DBC20454BF1CBB_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F3DBC20454BF1CBB_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F3DBC20454BF1CBB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::Object*>** StaticGet_FB5E19DD986E8C90()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F3DBC20454BF1CBB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F3DBC20454BF1CBB_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3DBC20454BF1CBB_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void BA1528FC9151F02D(::System::Object* BC50DB3156C3AF8B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F3DBC20454BF1CBB_F5628F8349D4A8A6_BA1528FC9151F02D_OFFSET))(this, BC50DB3156C3AF8B);
	}
};
