#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BB865829F160F7CA_A17C171DA50CD5C5_OFFSET UNITYSDK_OFFSET(0x3B4F9F0)
#define BB865829F160F7CA_B7FA4AB67E1EF2E5_OFFSET UNITYSDK_OFFSET(0x3BA0A40)
#define BB865829F160F7CA_BD1EA225F8391F62_OFFSET UNITYSDK_OFFSET(0x3D03620)
#define BB865829F160F7CA_F0D6BF99F8F4CB2B_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define BB865829F160F7CA__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D03680)
#define BB865829F160F7CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8060)

inline static constexpr unsigned int BB865829F160F7CA_TypeDefinitionIndex = 10780;

class BB865829F160F7CA : public ::System::Object
{
public:
	static ::System::String** StaticGet_A5271C7FCDA8084B()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BB865829F160F7CA_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void B7FA4AB67E1EF2E5(::System::Int32 F3851C787B08F75B, ::System::String*& E49C721560BC37A4, ::System::String*& B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + BB865829F160F7CA_B7FA4AB67E1EF2E5_OFFSET))(F3851C787B08F75B, E49C721560BC37A4, B083BE7841B347C4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB865829F160F7CA__CTOR_OFFSET))(this);
	}

	static ::System::Void F0D6BF99F8F4CB2B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BB865829F160F7CA_F0D6BF99F8F4CB2B_OFFSET))();
	}

	static ::System::Void BD1EA225F8391F62(::System::Int32 F3851C787B08F75B, ::System::String* E49C721560BC37A4, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BB865829F160F7CA_BD1EA225F8391F62_OFFSET))(F3851C787B08F75B, E49C721560BC37A4, B083BE7841B347C4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BB865829F160F7CA__CCTOR_OFFSET))();
	}

	static ::System::Boolean A17C171DA50CD5C5()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BB865829F160F7CA_A17C171DA50CD5C5_OFFSET))();
	}
};
