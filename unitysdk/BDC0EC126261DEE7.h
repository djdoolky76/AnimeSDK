#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }

#define BDC0EC126261DEE7_A470A8379701E441_OFFSET UNITYSDK_OFFSET(0x226D140)
#define BDC0EC126261DEE7_AECB17A300DF70AB_OFFSET UNITYSDK_OFFSET(0x226D010)
#define BDC0EC126261DEE7_E8E4954A647A28FF_OFFSET UNITYSDK_OFFSET(0x226CF70)
#define BDC0EC126261DEE7_F5745EC5158E0C33_OFFSET UNITYSDK_OFFSET(0x226D400)
#define BDC0EC126261DEE7__CCTOR_OFFSET UNITYSDK_OFFSET(0x226D620)
#define BDC0EC126261DEE7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BDC0EC126261DEE7_TypeDefinitionIndex = 9232;

class BDC0EC126261DEE7 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_F1851B31225894AE()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BDC0EC126261DEE7_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::UInt32* StaticGet_F9AE948AF2478077()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BDC0EC126261DEE7_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::System::Collections::Generic::Dictionary_2<::E865F6F8B8B44C1E, ::TMPro::TMP_FontAsset*>** StaticGet_B049404A88D67EB7()
	{
		return (::System::Collections::Generic::Dictionary_2<::E865F6F8B8B44C1E, ::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(BDC0EC126261DEE7_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Boolean F5745EC5158E0C33(::TMPro::TMP_FontAsset* A04B97A6BA51CC83, ::System::UInt32& A5C299C395D3E1B2)
	{
		return ((::System::Boolean(*)(::TMPro::TMP_FontAsset*, ::System::UInt32&))((::PBYTE)hIl2Cpp + BDC0EC126261DEE7_F5745EC5158E0C33_OFFSET))(A04B97A6BA51CC83, A5C299C395D3E1B2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDC0EC126261DEE7__CCTOR_OFFSET))();
	}

	static ::System::Boolean A470A8379701E441(::TMPro::TMP_FontAsset* A04B97A6BA51CC83, ::TMPro::TMP_FontAsset*& E8D7F95B353524C1)
	{
		return ((::System::Boolean(*)(::TMPro::TMP_FontAsset*, ::TMPro::TMP_FontAsset*&))((::PBYTE)hIl2Cpp + BDC0EC126261DEE7_A470A8379701E441_OFFSET))(A04B97A6BA51CC83, E8D7F95B353524C1);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDC0EC126261DEE7__CTOR_OFFSET))(this);
	}

	static ::System::Void E8E4954A647A28FF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDC0EC126261DEE7_E8E4954A647A28FF_OFFSET))();
	}

	static ::TMPro::TMP_SpriteAsset* AECB17A300DF70AB()
	{
		return ((::TMPro::TMP_SpriteAsset*(*)())((::PBYTE)hIl2Cpp + BDC0EC126261DEE7_AECB17A300DF70AB_OFFSET))();
	}
};
