#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_SessionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FE155C62D597D0E2_A38C9FC58413903C_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define FE155C62D597D0E2_A5DA5E6766D4B143_OFFSET UNITYSDK_OFFSET(0x3864290)
#define FE155C62D597D0E2_A66245FDD0182C57_1_OFFSET UNITYSDK_OFFSET(0x3864170)
#define FE155C62D597D0E2_A66245FDD0182C57_2_OFFSET UNITYSDK_OFFSET(0x3863FC0)
#define FE155C62D597D0E2_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x38640A0)
#define FE155C62D597D0E2_B727982665E8072B_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define FE155C62D597D0E2_E420C96102530242_OFFSET UNITYSDK_OFFSET(0x3863B70)
#define FE155C62D597D0E2_E6F761EE55060C4A_OFFSET UNITYSDK_OFFSET(0x3863DC0)
#define FE155C62D597D0E2_EC6E012B0E54B4D0_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define FE155C62D597D0E2_F377C434272F429C_OFFSET UNITYSDK_OFFSET(0x3865260)
#define FE155C62D597D0E2_F3D9833D86DFAE7B_OFFSET UNITYSDK_OFFSET(0x3864440)
#define FE155C62D597D0E2_F5CB7138F05A4C29_OFFSET UNITYSDK_OFFSET(0x38647B0)
#define FE155C62D597D0E2_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x38653C0)
#define FE155C62D597D0E2_FC279C8716EC3783_OFFSET UNITYSDK_OFFSET(0x38643E0)
#define FE155C62D597D0E2_FFC8F57E8D4599A9_OFFSET UNITYSDK_OFFSET(0x38651B0)
#define FE155C62D597D0E2__CTOR_OFFSET UNITYSDK_OFFSET(0x3865340)

inline static constexpr unsigned int FE155C62D597D0E2_TypeDefinitionIndex = 17975;

class FE155C62D597D0E2 : public ::System::Object
{
public:
	static ::FE155C62D597D0E2** StaticGet_F2EC524D6D748B5F()
	{
		return (::FE155C62D597D0E2**)Il2CppClass::FromTypeDefinitionIndex(FE155C62D597D0E2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* E3322F949EC1DAEB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BAC284AACF663D28; // 0x18
	::System::Boolean F1B0874DFBD1CD93; // 0x20

	static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>* FC279C8716EC3783()
	{
		return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>*(*)())((::PBYTE)hIl2Cpp + FE155C62D597D0E2_FC279C8716EC3783_OFFSET))();
	}

	::System::Boolean B727982665E8072B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_B727982665E8072B_OFFSET))(this);
	}

	::System::Boolean F5CB7138F05A4C29()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_F5CB7138F05A4C29_OFFSET))(this);
	}

	::System::Void F3D9833D86DFAE7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_F3D9833D86DFAE7B_OFFSET))(this);
	}

	static ::FE155C62D597D0E2* F7B0A23335A3DB16()
	{
		return ((::FE155C62D597D0E2*(*)())((::PBYTE)hIl2Cpp + FE155C62D597D0E2_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Boolean A66245FDD0182C57(::System::String* A5C299C395D3E1B2, ::System::String*& E937D4885DAA1AE8, ::System::String* E068F60C6205B02D)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::System::String*))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_A66245FDD0182C57_OFFSET))(this, A5C299C395D3E1B2, E937D4885DAA1AE8, E068F60C6205B02D);
	}

	static ::System::Void A5DA5E6766D4B143()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FE155C62D597D0E2_A5DA5E6766D4B143_OFFSET))();
	}

	::System::Void FFC8F57E8D4599A9(::System::String* A5C299C395D3E1B2, ::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_FFC8F57E8D4599A9_OFFSET))(this, A5C299C395D3E1B2, E937D4885DAA1AE8);
	}

	::System::Boolean A66245FDD0182C57_1(::System::String* A5C299C395D3E1B2, ::System::Single& E937D4885DAA1AE8, ::System::Single E068F60C6205B02D)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_A66245FDD0182C57_1_OFFSET))(this, A5C299C395D3E1B2, E937D4885DAA1AE8, E068F60C6205B02D);
	}

	::System::String* E420C96102530242(::System::String* A2AB46740C6A9DB9)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_E420C96102530242_OFFSET))(this, A2AB46740C6A9DB9);
	}

	::System::Boolean A66245FDD0182C57_2(::System::String* A5C299C395D3E1B2, ::System::Boolean& E937D4885DAA1AE8, ::System::Boolean E068F60C6205B02D)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_A66245FDD0182C57_2_OFFSET))(this, A5C299C395D3E1B2, E937D4885DAA1AE8, E068F60C6205B02D);
	}

	static ::System::Void EC6E012B0E54B4D0(::System::Boolean B59E3EF541A94D49)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_EC6E012B0E54B4D0_OFFSET))(B59E3EF541A94D49);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE155C62D597D0E2__CTOR_OFFSET))(this);
	}

	::System::String* E6F761EE55060C4A(::System::String* A2AB46740C6A9DB9)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_E6F761EE55060C4A_OFFSET))(this, A2AB46740C6A9DB9);
	}

	::System::Void A38C9FC58413903C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_A38C9FC58413903C_OFFSET))(this);
	}

	static ::System::String* F377C434272F429C()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FE155C62D597D0E2_F377C434272F429C_OFFSET))();
	}
};
