#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F8311488A80A8AFC;
namespace System { class String; }
namespace System::Reflection { class F60CD5AA5C2080DF; }

#define E3863510567E7C46_A3CB34499DD40BDA_OFFSET UNITYSDK_OFFSET(0x3C635C0)
#define E3863510567E7C46_AAA0B897B9167A38_OFFSET UNITYSDK_OFFSET(0x3C634A0)
#define E3863510567E7C46_AE81F43DAED8130D_OFFSET UNITYSDK_OFFSET(0x3C635B0)
#define E3863510567E7C46_F4843D60B829A950_OFFSET UNITYSDK_OFFSET(0x3C63BB0)
#define E3863510567E7C46__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C63B30)

inline static constexpr unsigned int E3863510567E7C46_TypeDefinitionIndex = 11657;

class E3863510567E7C46 : public ::System::Object
{
public:
	static ::F8311488A80A8AFC** StaticGet_E5E0CD425788C9E5()
	{
		return (::F8311488A80A8AFC**)Il2CppClass::FromTypeDefinitionIndex(E3863510567E7C46_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Object** StaticGet_B672DA4111B17E4E()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(E3863510567E7C46_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Reflection::F60CD5AA5C2080DF** StaticGet_B5D9A10DBC084205()
	{
		return (::System::Reflection::F60CD5AA5C2080DF**)Il2CppClass::FromTypeDefinitionIndex(E3863510567E7C46_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Boolean* StaticGet_AFFA57D1F96C2470()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E3863510567E7C46_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::F8311488A80A8AFC* AAA0B897B9167A38()
	{
		return ((::F8311488A80A8AFC*(*)())((::PBYTE)hIl2Cpp + E3863510567E7C46_AAA0B897B9167A38_OFFSET))();
	}

	static ::System::String* AE81F43DAED8130D(::System::Int32& E129E714D119BDC6)
	{
		return ((::System::String*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + E3863510567E7C46_AE81F43DAED8130D_OFFSET))(E129E714D119BDC6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E3863510567E7C46__CCTOR_OFFSET))();
	}

	static ::System::Object* A3CB34499DD40BDA(::System::String* F79B4D487F303AB2, ::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA)
	{
		return ((::System::Object*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + E3863510567E7C46_A3CB34499DD40BDA_OFFSET))(F79B4D487F303AB2, F0D3F87128A7C4CA);
	}

	static ::F8311488A80A8AFC* F4843D60B829A950()
	{
		return ((::F8311488A80A8AFC*(*)())((::PBYTE)hIl2Cpp + E3863510567E7C46_F4843D60B829A950_OFFSET))();
	}
};
