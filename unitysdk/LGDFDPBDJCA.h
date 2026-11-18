#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBACBMHNGBL.h"
#include "unitysdk/LGDFDPBDJCA_ECKOKBHCIEG.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define LGDFDPBDJCA_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x16849740)
#define LGDFDPBDJCA_FDHFALFIEOL_OFFSET UNITYSDK_OFFSET(0x1684A840)
#define LGDFDPBDJCA_GHHKIJNLCJK_OFFSET UNITYSDK_OFFSET(0x1684A620)
#define LGDFDPBDJCA_IMKHLAABAKE_OFFSET UNITYSDK_OFFSET(0x1684A550)
#define LGDFDPBDJCA_JOIHCNEBAEN_OFFSET UNITYSDK_OFFSET(0x16849ED0)
#define LGDFDPBDJCA_KMOIBNKMCLG_OFFSET UNITYSDK_OFFSET(0x1684A5D0)
#define LGDFDPBDJCA_MEDCOAFFNDJ_OFFSET UNITYSDK_OFFSET(0x1684AB60)
#define LGDFDPBDJCA_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0x1684AAC0)
#define LGDFDPBDJCA__CTOR_OFFSET UNITYSDK_OFFSET(0x16849730)

inline static constexpr unsigned int LGDFDPBDJCA_TypeDefinitionIndex = 39621;

class LGDFDPBDJCA : public ::BBACBMHNGBL
{
public:
	static ::LGDFDPBDJCA_ECKOKBHCIEG* StaticGet_NHHGEBLLDDC()
	{
		return (::LGDFDPBDJCA_ECKOKBHCIEG*)Il2CppClass::FromTypeDefinitionIndex(LGDFDPBDJCA_TypeDefinitionIndex)->GetStaticField(0x10AC0);
	}

	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* NKAKNBFNKAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + LGDFDPBDJCA__CTOR_OFFSET))(this, NKAKNBFNKAN);
	}

	::System::Void CCNCFOBJCHG(::System::String* MCOHLHMKLIP, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGDFDPBDJCA_CCNCFOBJCHG_OFFSET))(this, MCOHLHMKLIP, FLMNJOFKIKI);
	}

	static ::System::Void JOIHCNEBAEN(::System::Int32 EDJCHJFDNNO, ::System::Int32 GCBNJKCLNMM, ::System::Boolean ADICJENIPIH, ::System::Boolean PHDJBLHIKBI)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LGDFDPBDJCA_JOIHCNEBAEN_OFFSET))(EDJCHJFDNNO, GCBNJKCLNMM, ADICJENIPIH, PHDJBLHIKBI);
	}

	static ::System::Void FDHFALFIEOL(::System::Int32 KLHPLLDNOMF)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + LGDFDPBDJCA_FDHFALFIEOL_OFFSET))(KLHPLLDNOMF);
	}

	static ::LGDFDPBDJCA_ECKOKBHCIEG KMOIBNKMCLG()
	{
		return ((::LGDFDPBDJCA_ECKOKBHCIEG(*)())((::PBYTE)hIl2Cpp + LGDFDPBDJCA_KMOIBNKMCLG_OFFSET))();
	}

	static ::System::Void IMKHLAABAKE(::System::Boolean EEIAELNLLFJ)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + LGDFDPBDJCA_IMKHLAABAKE_OFFSET))(EEIAELNLLFJ);
	}

	::System::Void MMJNFKGOADK(::System::String* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGDFDPBDJCA_MMJNFKGOADK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean MEDCOAFFNDJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGDFDPBDJCA_MEDCOAFFNDJ_OFFSET))();
	}

	static ::System::Void GHHKIJNLCJK(::System::Boolean FBILHHBPEHD, ::System::Boolean PPGNHAPPHCH)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LGDFDPBDJCA_GHHKIJNLCJK_OFFSET))(FBILHHBPEHD, PPGNHAPPHCH);
	}
};
