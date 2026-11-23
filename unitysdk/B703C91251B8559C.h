#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B703C91251B8559C_AADD2FEB165102B5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B703C91251B8559C_AB22587432FC2CFF_OFFSET UNITYSDK_OFFSET(0x43FF890)
#define B703C91251B8559C_ABB9F0845E70FBC4_OFFSET UNITYSDK_OFFSET(0x43FF9C0)
#define B703C91251B8559C_B071EBC2168692D1_OFFSET UNITYSDK_OFFSET(0x43FF6B0)
#define B703C91251B8559C_F26C9A59665BFF61_OFFSET UNITYSDK_OFFSET(0x43FFB00)
#define B703C91251B8559C__CCTOR_OFFSET UNITYSDK_OFFSET(0x4400120)
#define B703C91251B8559C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B703C91251B8559C_TypeDefinitionIndex = 19435;

class B703C91251B8559C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_B56382E3D75624D6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B703C91251B8559C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_B1C36961996BB24B()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B703C91251B8559C_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	::System::Void AB22587432FC2CFF(::System::Int32 F5AEFA05C9F71B82)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B703C91251B8559C_AB22587432FC2CFF_OFFSET))(this, F5AEFA05C9F71B82);
	}

	::System::Void ABB9F0845E70FBC4(::System::Int32 F5AEFA05C9F71B82, ::System::String* BB38682D81BC7A95, ::System::Int32 B3F53603F39CD6A9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + B703C91251B8559C_ABB9F0845E70FBC4_OFFSET))(this, F5AEFA05C9F71B82, BB38682D81BC7A95, B3F53603F39CD6A9);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B703C91251B8559C__CCTOR_OFFSET))();
	}

	::System::Void F26C9A59665BFF61(::System::Int32 F5AEFA05C9F71B82, ::B703C91251B8559C_AADD2FEB165102B5* F74ABED854090C3E)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::B703C91251B8559C_AADD2FEB165102B5*))((::PBYTE)hIl2Cpp + B703C91251B8559C_F26C9A59665BFF61_OFFSET))(this, F5AEFA05C9F71B82, F74ABED854090C3E);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B703C91251B8559C__CTOR_OFFSET))(this);
	}

	::System::Void B071EBC2168692D1(::System::Int32 F5AEFA05C9F71B82, ::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Int32 A96B867D8BBB8B00)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + B703C91251B8559C_B071EBC2168692D1_OFFSET))(this, F5AEFA05C9F71B82, F220A2D27F7C6B6C, A96B867D8BBB8B00);
	}
};
