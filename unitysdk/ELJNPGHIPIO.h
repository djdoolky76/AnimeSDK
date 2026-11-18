#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ELJNPGHIPIO_HLHCLDADKJN.h"

namespace System { class String; }

#define ELJNPGHIPIO_CIIECPMMILO_OFFSET UNITYSDK_OFFSET(0x1F0A4200)
#define ELJNPGHIPIO_CJKLONDGAHB_OFFSET UNITYSDK_OFFSET(0x1F0A45F0)
#define ELJNPGHIPIO_DIOOCBHOEAE_OFFSET UNITYSDK_OFFSET(0x1F0A4560)
#define ELJNPGHIPIO_DKLKEPCBFMF_OFFSET UNITYSDK_OFFSET(0x1F0A40A0)
#define ELJNPGHIPIO_KAEOIHPENLE_OFFSET UNITYSDK_OFFSET(0x1F0A38C0)
#define ELJNPGHIPIO_LJFOFLFBDBN_OFFSET UNITYSDK_OFFSET(0x1F0A44E0)
#define ELJNPGHIPIO_MDIFOHNHNDB_OFFSET UNITYSDK_OFFSET(0x1F0A4120)
#define ELJNPGHIPIO_MIIHEKIIBDO_OFFSET UNITYSDK_OFFSET(0x1F0A46D0)
#define ELJNPGHIPIO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1F0A3730)
#define ELJNPGHIPIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A3720)

inline static constexpr unsigned int ELJNPGHIPIO_TypeDefinitionIndex = 28850;

class ELJNPGHIPIO : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* GFABCDJLCLH; // 0x10
	::System::UInt64 JJFFJJAHIKO; // 0x18
	::System::UInt64 ELOFJCJEGCO; // 0x20
	::System::UInt64 FAFHNMPJBGD; // 0x28
	::System::Int32 CJIMPAAGOHN; // 0x30
	::System::Int32 CAPELMHLPDA; // 0x34

	::System::Void _ctor(::System::Int32 CAPELMHLPDA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELJNPGHIPIO__CTOR_OFFSET))(this, CAPELMHLPDA);
	}

	::System::String* KAEOIHPENLE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_KAEOIHPENLE_OFFSET))(this);
	}

	::System::Boolean MDIFOHNHNDB(::System::UInt64 ALCFOOAEOBP, ::System::UInt64& JJPDFOHEOLD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_MDIFOHNHNDB_OFFSET))(this, ALCFOOAEOBP, JJPDFOHEOLD);
	}

	::System::UInt64 LJFOFLFBDBN(::ELJNPGHIPIO_HLHCLDADKJN PKMIPENDKKH, ::System::UInt64 MAHIJEOPDOE)
	{
		return ((::System::UInt64(*)(::PVOID, ::ELJNPGHIPIO_HLHCLDADKJN, ::System::UInt64))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_LJFOFLFBDBN_OFFSET))(this, PKMIPENDKKH, MAHIJEOPDOE);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::System::UInt64 DKLKEPCBFMF()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + ELJNPGHIPIO_DKLKEPCBFMF_OFFSET))();
	}

	::System::Void CJKLONDGAHB(::System::UInt32 KMLLPDNJPAP, ::System::UInt64 BFFPKHMOEHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_CJKLONDGAHB_OFFSET))(this, KMLLPDNJPAP, BFFPKHMOEHM);
	}

	::System::Boolean DIOOCBHOEAE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_DIOOCBHOEAE_OFFSET))(this);
	}

	::System::UInt64 CIIECPMMILO(::System::Int32 IOENBMIAKMC)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_CIIECPMMILO_OFFSET))(this, IOENBMIAKMC);
	}

	::System::Void MIIHEKIIBDO(::System::UInt32 KMLLPDNJPAP, ::System::UInt64 BFFPKHMOEHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_MIIHEKIIBDO_OFFSET))(this, KMLLPDNJPAP, BFFPKHMOEHM);
	}
};
