#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBottleLoginContext; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }

#define FBFHABGAOCK_AEALHPOGHHC_OFFSET UNITYSDK_OFFSET(0x17262740)
#define FBFHABGAOCK_GIBNPEOLMIO_OFFSET UNITYSDK_OFFSET(0x17262AE0)
#define FBFHABGAOCK_GPMAOIEFOBF_OFFSET UNITYSDK_OFFSET(0x172628C0)
#define FBFHABGAOCK_IOCMPNHPDNO_OFFSET UNITYSDK_OFFSET(0x172621F0)
#define FBFHABGAOCK_JJGFOGNNDNB_OFFSET UNITYSDK_OFFSET(0x17262580)
#define FBFHABGAOCK_JMLGLKIPOIM_OFFSET UNITYSDK_OFFSET(0x17262E40)
#define FBFHABGAOCK_KIJAJDEMPMI_OFFSET UNITYSDK_OFFSET(0x17262D00)

inline static constexpr unsigned int FBFHABGAOCK_TypeDefinitionIndex = 67658;

class FBFHABGAOCK : public ::System::Object
{
public:
	static ::System::Void IOCMPNHPDNO(::System::Int32 PNIFEAPJOOF, ::System::Int32 PMGHBOBNPGO)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FBFHABGAOCK_IOCMPNHPDNO_OFFSET))(PNIFEAPJOOF, PMGHBOBNPGO);
	}

	static ::System::Boolean AEALHPOGHHC(::MoleMole::UIWindowController* ELBCNKFMECC)
	{
		return ((::System::Boolean(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + FBFHABGAOCK_AEALHPOGHHC_OFFSET))(ELBCNKFMECC);
	}

	static ::System::Void GPMAOIEFOBF(::DJPBMMDAFKB FNCIDGGOECA, ::System::String* EENKGIMOCEO)
	{
		return ((::System::Void(*)(::DJPBMMDAFKB, ::System::String*))((::PBYTE)hIl2Cpp + FBFHABGAOCK_GPMAOIEFOBF_OFFSET))(FNCIDGGOECA, EENKGIMOCEO);
	}

	static ::MoleMole::UIBottleLoginContext* JJGFOGNNDNB(::System::Int32 FGOCEMAGJJL)
	{
		return ((::MoleMole::UIBottleLoginContext*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FBFHABGAOCK_JJGFOGNNDNB_OFFSET))(FGOCEMAGJJL);
	}

	static ::System::Void GIBNPEOLMIO(::System::String* EENKGIMOCEO)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FBFHABGAOCK_GIBNPEOLMIO_OFFSET))(EENKGIMOCEO);
	}

	static ::System::Void KIJAJDEMPMI(::System::String* EENKGIMOCEO)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FBFHABGAOCK_KIJAJDEMPMI_OFFSET))(EENKGIMOCEO);
	}

	static ::System::Void JMLGLKIPOIM(::DJPBMMDAFKB OBNIAHNMHPF, ::System::String* EENKGIMOCEO)
	{
		return ((::System::Void(*)(::DJPBMMDAFKB, ::System::String*))((::PBYTE)hIl2Cpp + FBFHABGAOCK_JMLGLKIPOIM_OFFSET))(OBNIAHNMHPF, EENKGIMOCEO);
	}
};
