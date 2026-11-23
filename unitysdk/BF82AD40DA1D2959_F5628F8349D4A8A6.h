#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BF82AD40DA1D2959_F5628F8349D4A8A6_B0667A960B3A3504_OFFSET UNITYSDK_OFFSET(0x3952FA0)
#define BF82AD40DA1D2959_F5628F8349D4A8A6_E8A3856452B1CFBC_OFFSET UNITYSDK_OFFSET(0x3952FE0)
#define BF82AD40DA1D2959_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3955140)
#define BF82AD40DA1D2959_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF82AD40DA1D2959_F5628F8349D4A8A6_TypeDefinitionIndex = 12417;

class BF82AD40DA1D2959_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::BF82AD40DA1D2959_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::BF82AD40DA1D2959_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BF82AD40DA1D2959_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet_B59FACF145743799()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BF82AD40DA1D2959_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet_F29C1BDBC7235176()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BF82AD40DA1D2959_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BF82AD40DA1D2959_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF82AD40DA1D2959_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* B0667A960B3A3504(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> A6D95DB9C6774967)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + BF82AD40DA1D2959_F5628F8349D4A8A6_B0667A960B3A3504_OFFSET))(this, A6D95DB9C6774967);
	}

	::System::String* E8A3856452B1CFBC(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> A6D95DB9C6774967)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + BF82AD40DA1D2959_F5628F8349D4A8A6_E8A3856452B1CFBC_OFFSET))(this, A6D95DB9C6774967);
	}
};
