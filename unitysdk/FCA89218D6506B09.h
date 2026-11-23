#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AB893667BB6F371B.h"

class B3F7EF5F0D6EE64F;
class B58826631BDEC3CF;
class E1656225757ACE75;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCA89218D6506B09_A337D7094942E198_OFFSET UNITYSDK_OFFSET(0x23CDA50)
#define FCA89218D6506B09_A8E74B9C584B1378_OFFSET UNITYSDK_OFFSET(0x23CD7A0)
#define FCA89218D6506B09_B3D707C7C90DC7DF_OFFSET UNITYSDK_OFFSET(0x23CD9C0)
#define FCA89218D6506B09_B9884513CAD49A71_OFFSET UNITYSDK_OFFSET(0x23CD620)
#define FCA89218D6506B09_E3C7CAEF7025D18E_OFFSET UNITYSDK_OFFSET(0x23CD5A0)
#define FCA89218D6506B09_ECC932BE47A69574_OFFSET UNITYSDK_OFFSET(0x23CD870)
#define FCA89218D6506B09__CTOR_1_OFFSET UNITYSDK_OFFSET(0x23CDDF0)
#define FCA89218D6506B09__CTOR_OFFSET UNITYSDK_OFFSET(0x23CDBF0)

inline static constexpr unsigned int FCA89218D6506B09_TypeDefinitionIndex = 3784;

class FCA89218D6506B09 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::B3F7EF5F0D6EE64F*>* AE471EB20151A107; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::B58826631BDEC3CF*>* FD116F46514C671A; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::E1656225757ACE75*>* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::E1656225757ACE75*>*))((::PBYTE)hIl2Cpp + FCA89218D6506B09__CTOR_OFFSET))(this, ACDE58E97E37D13C);
	}

	::System::Boolean A8E74B9C584B1378(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCA89218D6506B09_A8E74B9C584B1378_OFFSET))(this, F79B4D487F303AB2);
	}

	::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::B3F7EF5F0D6EE64F*>* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::B3F7EF5F0D6EE64F*>*))((::PBYTE)hIl2Cpp + FCA89218D6506B09__CTOR_1_OFFSET))(this, ACDE58E97E37D13C);
	}

	::System::Void B3D707C7C90DC7DF(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCA89218D6506B09_B3D707C7C90DC7DF_OFFSET))(this, F79B4D487F303AB2);
	}

	::System::Void ECC932BE47A69574(::System::String* F79B4D487F303AB2, ::AB893667BB6F371B E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::AB893667BB6F371B))((::PBYTE)hIl2Cpp + FCA89218D6506B09_ECC932BE47A69574_OFFSET))(this, F79B4D487F303AB2, E937D4885DAA1AE8);
	}

	::System::Void E3C7CAEF7025D18E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCA89218D6506B09_E3C7CAEF7025D18E_OFFSET))(this);
	}

	::AB893667BB6F371B B9884513CAD49A71(::System::String* F79B4D487F303AB2, ::System::Int32 E14961743E675799)
	{
		return ((::AB893667BB6F371B(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FCA89218D6506B09_B9884513CAD49A71_OFFSET))(this, F79B4D487F303AB2, E14961743E675799);
	}

	::System::Void A337D7094942E198(::System::String* F79B4D487F303AB2, ::AB893667BB6F371B E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::AB893667BB6F371B))((::PBYTE)hIl2Cpp + FCA89218D6506B09_A337D7094942E198_OFFSET))(this, F79B4D487F303AB2, E937D4885DAA1AE8);
	}
};
