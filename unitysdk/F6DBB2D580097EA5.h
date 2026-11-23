#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define F6DBB2D580097EA5_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x3A732C0)
#define F6DBB2D580097EA5_AE9FDCB963292029_OFFSET UNITYSDK_OFFSET(0x3A731A0)
#define F6DBB2D580097EA5__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A737E0)
#define F6DBB2D580097EA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F6DBB2D580097EA5_TypeDefinitionIndex = 11933;

class F6DBB2D580097EA5 : public ::System::Object
{
public:
	static ::F6DBB2D580097EA5** StaticGet_EE999965A1D2099B()
	{
		return (::F6DBB2D580097EA5**)Il2CppClass::FromTypeDefinitionIndex(F6DBB2D580097EA5_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6DBB2D580097EA5__CTOR_OFFSET))(this);
	}

	::System::Void AE9FDCB963292029()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6DBB2D580097EA5_AE9FDCB963292029_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F6DBB2D580097EA5__CCTOR_OFFSET))();
	}

	::System::Void A16C8ED92C989C9B(::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* F71A9E511E82DC8A, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* B2F2DFF3CE195EA1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + F6DBB2D580097EA5_A16C8ED92C989C9B_OFFSET))(this, F71A9E511E82DC8A, B2F2DFF3CE195EA1);
	}
};
