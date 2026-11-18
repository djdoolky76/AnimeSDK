#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEGMENEKJBO;
namespace MoleMole::UpdateWindow { class UpdateBehaviour; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIEKNAKBEJA_ACCGKOALMEI_OFFSET UNITYSDK_OFFSET(0x14DE8B30)
#define MIEKNAKBEJA_AGPOCNIBHBE_OFFSET UNITYSDK_OFFSET(0x14DE88B0)
#define MIEKNAKBEJA_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x14DE9C50)
#define MIEKNAKBEJA_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x14DE9190)
#define MIEKNAKBEJA_FLPLOPNPFCO_OFFSET UNITYSDK_OFFSET(0x14DE9630)
#define MIEKNAKBEJA_GLJLKGMCHGG_OFFSET UNITYSDK_OFFSET(0x14DE9370)
#define MIEKNAKBEJA_JIDEMDFECBG_OFFSET UNITYSDK_OFFSET(0x14DE88F0)
#define MIEKNAKBEJA_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x14DE9D40)
#define MIEKNAKBEJA_PDGICEDHFIL_OFFSET UNITYSDK_OFFSET(0x14DE9980)
#define MIEKNAKBEJA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14DE8E00)
#define MIEKNAKBEJA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DE87B0)

inline static constexpr unsigned int MIEKNAKBEJA_TypeDefinitionIndex = 93010;

class MIEKNAKBEJA : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::MEGMENEKJBO*>** StaticGet_MHBCMJGKMHF()
	{
		return (::System::Collections::Generic::HashSet_1<::MEGMENEKJBO*>**)Il2CppClass::FromTypeDefinitionIndex(MIEKNAKBEJA_TypeDefinitionIndex)->GetStaticField(0x50E50);
	}
	static ::System::Boolean* StaticGet_DMBCIGEBCBM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MIEKNAKBEJA_TypeDefinitionIndex)->GetStaticField(0x13240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIEKNAKBEJA__CCTOR_OFFSET))();
	}

	static ::System::Void JIDEMDFECBG(::MoleMole::UpdateWindow::UpdateBehaviour* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::MoleMole::UpdateWindow::UpdateBehaviour*))((::PBYTE)hIl2Cpp + MIEKNAKBEJA_JIDEMDFECBG_OFFSET))(ECMMKCJLBMD);
	}

	static ::System::Void ACCGKOALMEI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIEKNAKBEJA_ACCGKOALMEI_OFFSET))();
	}

	static ::System::Void FLHNGDLANDC(::MEGMENEKJBO* DBEGNAMMHKA)
	{
		return ((::System::Void(*)(::MEGMENEKJBO*))((::PBYTE)hIl2Cpp + MIEKNAKBEJA_FLHNGDLANDC_OFFSET))(DBEGNAMMHKA);
	}

	static ::System::Void GLJLKGMCHGG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIEKNAKBEJA_GLJLKGMCHGG_OFFSET))();
	}

	static ::System::Void FLPLOPNPFCO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIEKNAKBEJA_FLPLOPNPFCO_OFFSET))();
	}

	static ::System::Void PDGICEDHFIL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIEKNAKBEJA_PDGICEDHFIL_OFFSET))();
	}

	static ::System::Void AGPOCNIBHBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIEKNAKBEJA_AGPOCNIBHBE_OFFSET))();
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIEKNAKBEJA_PHOADBJGFBE_OFFSET))();
	}

	static ::System::Void ANPBCLAFCJB(::MEGMENEKJBO* DBEGNAMMHKA)
	{
		return ((::System::Void(*)(::MEGMENEKJBO*))((::PBYTE)hIl2Cpp + MIEKNAKBEJA_ANPBCLAFCJB_OFFSET))(DBEGNAMMHKA);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIEKNAKBEJA_JPOLBPCHLHK_OFFSET))();
	}
};
