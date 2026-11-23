#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDE8CBE0D869BF37.h"
#include "unitysdk/BEE66D693E5746CA.h"

class B1DF25493F639BCE;
class F81F3179A4D44271;
class FF1FE19B4F4DC4A3;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F3553B644DBEB0F9_A457BC12B6CF55CC_OFFSET UNITYSDK_OFFSET(0x3D0DA20)
#define F3553B644DBEB0F9_B167C595B6E7B9C0_OFFSET UNITYSDK_OFFSET(0x3D0E420)
#define F3553B644DBEB0F9_B76CDA7600F9AD31_OFFSET UNITYSDK_OFFSET(0x3D0DA20)
#define F3553B644DBEB0F9_B7AB4DA9F7B1317A_OFFSET UNITYSDK_OFFSET(0x3D0DAC0)
#define F3553B644DBEB0F9_E23DD07E692D56DE_OFFSET UNITYSDK_OFFSET(0x3D0E390)
#define F3553B644DBEB0F9_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3D0D8E0)
#define F3553B644DBEB0F9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D0E5A0)
#define F3553B644DBEB0F9__CTOR_OFFSET UNITYSDK_OFFSET(0x3D0E6C0)

inline static constexpr unsigned int F3553B644DBEB0F9_TypeDefinitionIndex = 10853;

class F3553B644DBEB0F9 : public ::BEE66D693E5746CA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::BDE8CBE0D869BF37>* F75A46EC64FAEE1B; // 0x28
	::F81F3179A4D44271* F7C2A016780EE4D9; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::BDE8CBE0D869BF37>* BF73B894BA33556D; // 0x38
	::System::Boolean A7DCCFA497706876; // 0x40

	::System::String* E23DD07E692D56DE(::System::String* A5C299C395D3E1B2, ::System::Boolean ACBE55281F187CE7)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + F3553B644DBEB0F9_E23DD07E692D56DE_OFFSET))(this, A5C299C395D3E1B2, ACBE55281F187CE7);
	}

	::System::Object* B7AB4DA9F7B1317A(::System::String* A5C299C395D3E1B2, ::System::Boolean ACBE55281F187CE7, ::System::Boolean BA7F45AD56E30430)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + F3553B644DBEB0F9_B7AB4DA9F7B1317A_OFFSET))(this, A5C299C395D3E1B2, ACBE55281F187CE7, BA7F45AD56E30430);
	}

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F3553B644DBEB0F9_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Object* B167C595B6E7B9C0(::BDE8CBE0D869BF37 FF7037EB305AB12F, ::System::String* A5C299C395D3E1B2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BDE8CBE0D869BF37>* F499C5F671039151, ::System::Boolean E4E0A91276F76667)
	{
		return ((::System::Object*(*)(::PVOID, ::BDE8CBE0D869BF37, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BDE8CBE0D869BF37>*, ::System::Boolean))((::PBYTE)hIl2Cpp + F3553B644DBEB0F9_B167C595B6E7B9C0_OFFSET))(this, FF7037EB305AB12F, A5C299C395D3E1B2, F499C5F671039151, E4E0A91276F76667);
	}

	::System::Void _ctor(::System::String* B823BD107ED98484)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F3553B644DBEB0F9__CTOR_OFFSET))(this, B823BD107ED98484);
	}

	::FF1FE19B4F4DC4A3* B76CDA7600F9AD31()
	{
		return ((::FF1FE19B4F4DC4A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + F3553B644DBEB0F9_B76CDA7600F9AD31_OFFSET))(this);
	}

	::System::Void _ctor_1(::B1DF25493F639BCE* BC92BE65F028CD67)
	{
		return ((::System::Void(*)(::PVOID, ::B1DF25493F639BCE*))((::PBYTE)hIl2Cpp + F3553B644DBEB0F9__CTOR_1_OFFSET))(this, BC92BE65F028CD67);
	}

	::System::Collections::IEnumerator* A457BC12B6CF55CC()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + F3553B644DBEB0F9_A457BC12B6CF55CC_OFFSET))(this);
	}
};
