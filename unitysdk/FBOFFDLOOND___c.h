#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System { class String; }

#define FBOFFDLOOND___C_EKGAPKNKAEG_OFFSET UNITYSDK_OFFSET(0x14284C20)
#define FBOFFDLOOND___C_NLFNODGCDDN_OFFSET UNITYSDK_OFFSET(0x14284C30)
#define FBOFFDLOOND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14284BD0)
#define FBOFFDLOOND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14284C10)

inline static constexpr unsigned int FBOFFDLOOND___c_TypeDefinitionIndex = 80758;

class FBOFFDLOOND___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FBOFFDLOOND___c_TypeDefinitionIndex)->GetStaticField(0x3AC50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBOFFDLOOND___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFFDLOOND___C__CTOR_OFFSET))(this);
	}

	::System::String* EKGAPKNKAEG(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*> JGAAPEJLGEM)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*>))((::PBYTE)hIl2Cpp + FBOFFDLOOND___C_EKGAPKNKAEG_OFFSET))(this, JGAAPEJLGEM);
	}

	::System::Int32 NLFNODGCDDN(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*> JGAAPEJLGEM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*>))((::PBYTE)hIl2Cpp + FBOFFDLOOND___C_NLFNODGCDDN_OFFSET))(this, JGAAPEJLGEM);
	}
};
