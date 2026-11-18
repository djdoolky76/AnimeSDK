#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJOCCEIFJAC_BEBIICOILBP_OFFSET UNITYSDK_OFFSET(0x14D31350)
#define HJOCCEIFJAC_CDAONOPBGIO_OFFSET UNITYSDK_OFFSET(0x14D316D0)
#define HJOCCEIFJAC_LCFLFNPDLFD_OFFSET UNITYSDK_OFFSET(0x14D31D60)
#define HJOCCEIFJAC_LGAOEHGLCOC_OFFSET UNITYSDK_OFFSET(0x14D32050)
#define HJOCCEIFJAC_LGLJLMOOFEO_OFFSET UNITYSDK_OFFSET(0x14D310E0)
#define HJOCCEIFJAC_PFPJGLPFLME_OFFSET UNITYSDK_OFFSET(0x14D31A50)
#define HJOCCEIFJAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D30FC0)

inline static constexpr unsigned int HJOCCEIFJAC_TypeDefinitionIndex = 87463;

class HJOCCEIFJAC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_DJKOFENEKKF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(HJOCCEIFJAC_TypeDefinitionIndex)->GetStaticField(0x49D80);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_HGPMFCBKACF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(HJOCCEIFJAC_TypeDefinitionIndex)->GetStaticField(0x49D88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJOCCEIFJAC__CCTOR_OFFSET))();
	}

	static ::System::Void LGLJLMOOFEO(::MoleMole::Config::ShaderCustomType LEJHFCNHEBB, ::System::String* JHBKKMKLCBH, ::System::Boolean MPINIIGACJD, ::System::Boolean JLNLMNPGNII)
	{
		return ((::System::Void(*)(::MoleMole::Config::ShaderCustomType, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HJOCCEIFJAC_LGLJLMOOFEO_OFFSET))(LEJHFCNHEBB, JHBKKMKLCBH, MPINIIGACJD, JLNLMNPGNII);
	}

	static ::System::Void BEBIICOILBP(::MoleMole::Config::ScreenEffectType BBMDGPCOFOF, ::System::String* JHBKKMKLCBH, ::System::String* AELLPLBJELA, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HJOCCEIFJAC_BEBIICOILBP_OFFSET))(BBMDGPCOFOF, JHBKKMKLCBH, AELLPLBJELA, NGODDCIOJDP);
	}

	static ::System::Void CDAONOPBGIO(::MoleMole::Config::ScreenEffectType BBMDGPCOFOF, ::System::String* JHBKKMKLCBH, ::System::Boolean FDNPHCHDJPB, ::System::Boolean MPINIIGACJD, ::System::Boolean JLNLMNPGNII)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HJOCCEIFJAC_CDAONOPBGIO_OFFSET))(BBMDGPCOFOF, JHBKKMKLCBH, FDNPHCHDJPB, MPINIIGACJD, JLNLMNPGNII);
	}

	static ::System::Void PFPJGLPFLME(::MoleMole::Config::ShaderCustomType LEJHFCNHEBB, ::System::String* JHBKKMKLCBH, ::System::String* AELLPLBJELA, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::MoleMole::Config::ShaderCustomType, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HJOCCEIFJAC_PFPJGLPFLME_OFFSET))(LEJHFCNHEBB, JHBKKMKLCBH, AELLPLBJELA, NGODDCIOJDP);
	}

	static ::System::Void LCFLFNPDLFD(::System::String* AELLPLBJELA, ::System::Boolean FDNPHCHDJPB, ::System::Boolean MPINIIGACJD, ::System::Boolean JLNLMNPGNII)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HJOCCEIFJAC_LCFLFNPDLFD_OFFSET))(AELLPLBJELA, FDNPHCHDJPB, MPINIIGACJD, JLNLMNPGNII);
	}

	static ::System::Void LGAOEHGLCOC(::System::String* AELLPLBJELA, ::System::Boolean MPINIIGACJD, ::System::Boolean JLNLMNPGNII)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HJOCCEIFJAC_LGAOEHGLCOC_OFFSET))(AELLPLBJELA, MPINIIGACJD, JLNLMNPGNII);
	}
};
