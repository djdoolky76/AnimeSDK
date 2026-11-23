#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EADE0CABA1B6337C.h"

namespace System { class String; }

#define EF8542014697564D_E454FEFFBDF1098D_OFFSET UNITYSDK_OFFSET(0x3DE01A0)
#define EF8542014697564D_EC1E75DE1726C907_1_OFFSET UNITYSDK_OFFSET(0x3DDF740)
#define EF8542014697564D_EC1E75DE1726C907_2_OFFSET UNITYSDK_OFFSET(0x3DDFAC0)
#define EF8542014697564D_EC1E75DE1726C907_OFFSET UNITYSDK_OFFSET(0x3DDFE30)
#define EF8542014697564D_EDE4B5C432ABB35A_OFFSET UNITYSDK_OFFSET(0x3DE04C0)
#define EF8542014697564D__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DE07A0)

inline static constexpr unsigned int EF8542014697564D_TypeDefinitionIndex = 21390;

class EF8542014697564D : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_EAE29D20E16E82C4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EF8542014697564D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::UInt32* StaticGet_E702DDC95B73F592()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EF8542014697564D_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::System::UInt32* StaticGet_BE1A92C0269DF8B7()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EF8542014697564D_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::UInt32* StaticGet_E7A8A990E9320133()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EF8542014697564D_TypeDefinitionIndex)->GetStaticField(0xC);
	}
	static ::System::UInt32* StaticGet_A9B958494782881C()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EF8542014697564D_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::UInt32 EC1E75DE1726C907(::EADE0CABA1B6337C<::System::Byte> F220A2D27F7C6B6C, ::System::Int32 A96B867D8BBB8B00, ::System::UInt32 AF9A63638B456161)
	{
		return ((::System::UInt32(*)(::EADE0CABA1B6337C<::System::Byte>, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + EF8542014697564D_EC1E75DE1726C907_OFFSET))(F220A2D27F7C6B6C, A96B867D8BBB8B00, AF9A63638B456161);
	}

	static ::System::UInt32 E454FEFFBDF1098D(::PVOID B03018C24D85EDA4, ::System::Int32 A96B867D8BBB8B00, ::System::UInt32 AF9A63638B456161)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + EF8542014697564D_E454FEFFBDF1098D_OFFSET))(B03018C24D85EDA4, A96B867D8BBB8B00, AF9A63638B456161);
	}

	static ::System::UInt32 EDE4B5C432ABB35A(::PVOID AF4717A1A80FD60F, ::System::Int32 F2E014F34A4A1D04, ::System::UInt32 AF9A63638B456161)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + EF8542014697564D_EDE4B5C432ABB35A_OFFSET))(AF4717A1A80FD60F, F2E014F34A4A1D04, AF9A63638B456161);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EF8542014697564D__CCTOR_OFFSET))();
	}

	static ::System::UInt32 EC1E75DE1726C907_1(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Int32 A96B867D8BBB8B00, ::System::UInt32 AF9A63638B456161)
	{
		return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + EF8542014697564D_EC1E75DE1726C907_1_OFFSET))(F220A2D27F7C6B6C, A96B867D8BBB8B00, AF9A63638B456161);
	}

	static ::System::UInt32 EC1E75DE1726C907_2(::System::String* BB83557721B5F386, ::System::UInt32 AF9A63638B456161)
	{
		return ((::System::UInt32(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + EF8542014697564D_EC1E75DE1726C907_2_OFFSET))(BB83557721B5F386, AF9A63638B456161);
	}
};
