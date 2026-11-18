#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgStyle; }
namespace MoleMole { class ComicImgStyleConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KLCBAJDPIJC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x19960A40)
#define KLCBAJDPIJC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x19961400)
#define KLCBAJDPIJC_FGAKNPFJPFJ_OFFSET UNITYSDK_OFFSET(0x19961220)
#define KLCBAJDPIJC_HPJCDDMIKIA_OFFSET UNITYSDK_OFFSET(0x19960E80)
#define KLCBAJDPIJC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19960A30)

inline static constexpr unsigned int KLCBAJDPIJC_TypeDefinitionIndex = 79032;

class KLCBAJDPIJC : public ::System::Object
{
public:
	static ::MoleMole::ComicImgStyleConfig** StaticGet_EDJCOCPJCAL()
	{
		return (::MoleMole::ComicImgStyleConfig**)Il2CppClass::FromTypeDefinitionIndex(KLCBAJDPIJC_TypeDefinitionIndex)->GetStaticField(0x445D0);
	}
	// static const ::System::String* GLJPIBBMECA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLCBAJDPIJC__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KLCBAJDPIJC_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ComicImgStyle* HPJCDDMIKIA(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ComicImgStyle*(*)(::System::String*))((::PBYTE)hIl2Cpp + KLCBAJDPIJC_HPJCDDMIKIA_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::ComicImgStyleConfig* FGAKNPFJPFJ()
	{
		return ((::MoleMole::ComicImgStyleConfig*(*)())((::PBYTE)hIl2Cpp + KLCBAJDPIJC_FGAKNPFJPFJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KLCBAJDPIJC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
