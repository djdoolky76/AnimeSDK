#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define LENLFPIOLEP___C_GADBBPBNCNA_OFFSET UNITYSDK_OFFSET(0x15247530)
#define LENLFPIOLEP___C_IOCLOBLFBPB_OFFSET UNITYSDK_OFFSET(0x15247510)
#define LENLFPIOLEP___C_OAFIJBFHEDP_OFFSET UNITYSDK_OFFSET(0x15247520)
#define LENLFPIOLEP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152474C0)
#define LENLFPIOLEP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15247500)

inline static constexpr unsigned int LENLFPIOLEP___c_TypeDefinitionIndex = 73416;

class LENLFPIOLEP___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LENLFPIOLEP___c_TypeDefinitionIndex)->GetStaticField(0x3B960);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LENLFPIOLEP___c_TypeDefinitionIndex)->GetStaticField(0x3B968);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LENLFPIOLEP___c_TypeDefinitionIndex)->GetStaticField(0x3B970);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LENLFPIOLEP___c_TypeDefinitionIndex)->GetStaticField(0x3B978);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENLFPIOLEP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLFPIOLEP___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IOCLOBLFBPB(::System::Int32 BDHOILPIGKB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LENLFPIOLEP___C_IOCLOBLFBPB_OFFSET))(this, BDHOILPIGKB);
	}

	::System::Int32 OAFIJBFHEDP(::System::Int32 BDHOILPIGKB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LENLFPIOLEP___C_OAFIJBFHEDP_OFFSET))(this, BDHOILPIGKB);
	}

	::System::Int32 GADBBPBNCNA(::System::Int32 BDHOILPIGKB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LENLFPIOLEP___C_GADBBPBNCNA_OFFSET))(this, BDHOILPIGKB);
	}
};
