#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDAKKNBMMBF.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/MMBCLKDGGPO.h"

class BAANNHAOKEL;
class BCHOANCLADD;
class GDCCBKJDPGE;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }

#define BPBFJKLKAML_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x14F04F90)
#define BPBFJKLKAML_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14F04690)
#define BPBFJKLKAML_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x14F05140)
#define BPBFJKLKAML_JFCNPCBGGNE_OFFSET UNITYSDK_OFFSET(0x14F050D0)
#define BPBFJKLKAML_MDBPPJPGKCK_1_OFFSET UNITYSDK_OFFSET(0x14F04B10)
#define BPBFJKLKAML_MDBPPJPGKCK_OFFSET UNITYSDK_OFFSET(0x14F04A00)
#define BPBFJKLKAML_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x14F05030)
#define BPBFJKLKAML_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14F04800)
#define BPBFJKLKAML__CTOR_OFFSET UNITYSDK_OFFSET(0x14F04990)

inline static constexpr unsigned int BPBFJKLKAML_TypeDefinitionIndex = 51269;

class BPBFJKLKAML : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFJKLKAML__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BPBFJKLKAML_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPBFJKLKAML_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::MMBCLKDGGPO MDBPPJPGKCK(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::System::String* MCOHLHMKLIP, ::BCHOANCLADD* FCHGPPLBGDD, ::System::Action* CLBAEECMNJL, ::System::Boolean FFFLNJMHEFD, ::EDAKKNBMMBF BNHNGJKNJJD)
	{
		return ((::MMBCLKDGGPO(*)(::MoleMole::HollowChessboard::HollowEntity*, ::System::String*, ::BCHOANCLADD*, ::System::Action*, ::System::Boolean, ::EDAKKNBMMBF))((::PBYTE)hIl2Cpp + BPBFJKLKAML_MDBPPJPGKCK_OFFSET))(KECKGDFIALJ, MCOHLHMKLIP, FCHGPPLBGDD, CLBAEECMNJL, FFFLNJMHEFD, BNHNGJKNJJD);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPBFJKLKAML_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BPBFJKLKAML_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::GDCCBKJDPGE* JFCNPCBGGNE()
	{
		return ((::GDCCBKJDPGE*(*)())((::PBYTE)hIl2Cpp + BPBFJKLKAML_JFCNPCBGGNE_OFFSET))();
	}

	static ::MMBCLKDGGPO MDBPPJPGKCK_1(::BAANNHAOKEL* AOFAGECOBKL, ::System::String* MCOHLHMKLIP, ::BCHOANCLADD* FCHGPPLBGDD, ::System::Action* CLBAEECMNJL, ::System::Boolean FFFLNJMHEFD, ::EDAKKNBMMBF BNHNGJKNJJD)
	{
		return ((::MMBCLKDGGPO(*)(::BAANNHAOKEL*, ::System::String*, ::BCHOANCLADD*, ::System::Action*, ::System::Boolean, ::EDAKKNBMMBF))((::PBYTE)hIl2Cpp + BPBFJKLKAML_MDBPPJPGKCK_1_OFFSET))(AOFAGECOBKL, MCOHLHMKLIP, FCHGPPLBGDD, CLBAEECMNJL, FFFLNJMHEFD, BNHNGJKNJJD);
	}

	static ::System::Void JDDMFEELKDH(::BAANNHAOKEL* AOFAGECOBKL)
	{
		return ((::System::Void(*)(::BAANNHAOKEL*))((::PBYTE)hIl2Cpp + BPBFJKLKAML_JDDMFEELKDH_OFFSET))(AOFAGECOBKL);
	}
};
