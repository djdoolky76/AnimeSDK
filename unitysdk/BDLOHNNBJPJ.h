#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class BDLOHNNBJPJ_FFIPKFIMNIB;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class CNKGGMABMGE_2;

#define BDLOHNNBJPJ_DBJOKICBGBJ_OFFSET UNITYSDK_OFFSET(0x14383BF0)
#define BDLOHNNBJPJ_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x14383F40)
#define BDLOHNNBJPJ_IAIDLDHIOOK_OFFSET UNITYSDK_OFFSET(0x14384440)
#define BDLOHNNBJPJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x143843F0)

inline static constexpr unsigned int BDLOHNNBJPJ_TypeDefinitionIndex = 88147;

class BDLOHNNBJPJ : public ::System::Object
{
public:
	static ::CNKGGMABMGE_2<::Foundation::ViewObject::GroupMemberIdentifier, ::System::Object*>** StaticGet_HEOANPKGEBP()
	{
		return (::CNKGGMABMGE_2<::Foundation::ViewObject::GroupMemberIdentifier, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BDLOHNNBJPJ_TypeDefinitionIndex)->GetStaticField(0x3D460);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_FHMELCGMDIF()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BDLOHNNBJPJ_TypeDefinitionIndex)->GetStaticField(0x3D468);
	}
	static ::CNKGGMABMGE_2<::System::Int32, ::System::Object*>** StaticGet_EDLDFIGMMAD()
	{
		return (::CNKGGMABMGE_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BDLOHNNBJPJ_TypeDefinitionIndex)->GetStaticField(0x3D470);
	}

	static ::System::Void DBJOKICBGBJ(::BDLOHNNBJPJ_FFIPKFIMNIB* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::BDLOHNNBJPJ_FFIPKFIMNIB*))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_DBJOKICBGBJ_OFFSET))(IDJOMIMIOGM);
	}

	static ::System::Void FLHNGDLANDC(::System::Int32 EMIHPNKBMBF)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_FLHNGDLANDC_OFFSET))(EMIHPNKBMBF);
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_PHOADBJGFBE_OFFSET))();
	}

	static ::System::Void IAIDLDHIOOK(::Foundation::ViewObject::GroupMemberIdentifier HLDBBGGLNKP)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_IAIDLDHIOOK_OFFSET))(HLDBBGGLNKP);
	}
};
