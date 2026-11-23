#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define BFFEAE13269428BF_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3CEAD80)
#define BFFEAE13269428BF_F2CDE1FA2D944107_OFFSET UNITYSDK_OFFSET(0x3CEAD00)
#define BFFEAE13269428BF__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CEADC0)
#define BFFEAE13269428BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFFEAE13269428BF_TypeDefinitionIndex = 10740;

class BFFEAE13269428BF : public ::System::Object
{
public:
	static ::BFFEAE13269428BF** StaticGet_A35E61455FB5F910()
	{
		return (::BFFEAE13269428BF**)Il2CppClass::FromTypeDefinitionIndex(BFFEAE13269428BF_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFEAE13269428BF_EA28CF291EBB2931_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFFEAE13269428BF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFEAE13269428BF__CTOR_OFFSET))(this);
	}

	::System::Void F2CDE1FA2D944107(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + BFFEAE13269428BF_F2CDE1FA2D944107_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
	}
};
