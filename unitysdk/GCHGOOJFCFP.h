#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
class GCHGOOJFCFP;
class JBACCAGFHON;
class LGHPKEAODPH;
class LHEBFHDKAIO;
class MIMCAGPCALM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define GCHGOOJFCFP_AEOKHGOGDLF_OFFSET UNITYSDK_OFFSET(0x15963BD0)
#define GCHGOOJFCFP_BHNMONCKOOM_OFFSET UNITYSDK_OFFSET(0x159637A0)
#define GCHGOOJFCFP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15960890)
#define GCHGOOJFCFP_CTOR_OFFSET UNITYSDK_OFFSET(0x15960910)
#define GCHGOOJFCFP_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15960920)
#define GCHGOOJFCFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15960C10)
#define GCHGOOJFCFP_FAIDENIACCA_OFFSET UNITYSDK_OFFSET(0x15962210)
#define GCHGOOJFCFP_FGFKNNLPMMH_OFFSET UNITYSDK_OFFSET(0x15961C40)
#define GCHGOOJFCFP_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0x159607B0)
#define GCHGOOJFCFP_GOFDJGDCANL_OFFSET UNITYSDK_OFFSET(0x15960A30)
#define GCHGOOJFCFP_HCDMICELNHF_OFFSET UNITYSDK_OFFSET(0x15963B00)
#define GCHGOOJFCFP_HDBEDEOAIEC_OFFSET UNITYSDK_OFFSET(0x159620A0)
#define GCHGOOJFCFP_HKGFIGCGMFB_OFFSET UNITYSDK_OFFSET(0x15964580)
#define GCHGOOJFCFP_JOIGBOFMOII_OFFSET UNITYSDK_OFFSET(0x15960DF0)
#define GCHGOOJFCFP_KBPKEGFNEKF_OFFSET UNITYSDK_OFFSET(0x15963C40)
#define GCHGOOJFCFP_MIFGAJHHKKP_OFFSET UNITYSDK_OFFSET(0x15964470)
#define GCHGOOJFCFP_MINNJAFJMKL_OFFSET UNITYSDK_OFFSET(0x15964670)
#define GCHGOOJFCFP_NDLAPNBKJMF_OFFSET UNITYSDK_OFFSET(0x15960830)
#define GCHGOOJFCFP_OLBABNNMKGN_OFFSET UNITYSDK_OFFSET(0x15963A20)

inline static constexpr unsigned int GCHGOOJFCFP_TypeDefinitionIndex = 78088;

	class GCHGOOJFCFP : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		// static const ::System::String* EBMMKPFONGA; // 0x0
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_CTOR_OFFSET))(this, a1);
		}

		::LGHPKEAODPH* GHDIJCNKKOM()
		{
			return ((::LGHPKEAODPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_GHDIJCNKKOM_OFFSET))(this);
		}

		::MIMCAGPCALM* NDLAPNBKJMF()
		{
			return ((::MIMCAGPCALM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_NDLAPNBKJMF_OFFSET))(this);
		}

		static ::GCHGOOJFCFP* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::GCHGOOJFCFP*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void GOFDJGDCANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_GOFDJGDCANL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_DISPOSE_OFFSET))(this);
		}

		::System::Void JOIGBOFMOII(::System::Collections::Generic::IEnumerable_1<::LHEBFHDKAIO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::LHEBFHDKAIO*>*))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_JOIGBOFMOII_OFFSET))(this, a1);
		}

		::System::Void HDBEDEOAIEC(::AGCPAMNLCGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_HDBEDEOAIEC_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* BHNMONCKOOM(::System::UInt32 a1)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_BHNMONCKOOM_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* OLBABNNMKGN(::System::UInt32 a1)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_OLBABNNMKGN_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* HCDMICELNHF()
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_HCDMICELNHF_OFFSET))(this);
		}

		::System::Void AEOKHGOGDLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_AEOKHGOGDLF_OFFSET))(this, a1);
		}

		::System::Void FAIDENIACCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_FAIDENIACCA_OFFSET))(this);
		}

		::System::Void MIFGAJHHKKP(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_MIFGAJHHKKP_OFFSET))(this, a1);
		}

		::System::Void KBPKEGFNEKF(::AGCPAMNLCGN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::System::Boolean))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_KBPKEGFNEKF_OFFSET))(this, a1, a2);
		}

		::System::Void MINNJAFJMKL(::AGCPAMNLCGN* a1, ::AGCPAMNLCGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_MINNJAFJMKL_OFFSET))(this, a1, a2);
		}

		::System::Void HKGFIGCGMFB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_HKGFIGCGMFB_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* FGFKNNLPMMH(::System::UInt32 a1)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHGOOJFCFP_FGFKNNLPMMH_OFFSET))(this, a1);
		}

	};
