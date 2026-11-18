#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAONGKLFNGN.h"
#include "unitysdk/FDNCOAGCCKH.h"
#include "unitysdk/KGOEPEBCOOB.h"

class AHAICPLGBAH;
class ENGKPGFGGLM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBAFEBOKJCC_ABLKKHDKCOO_OFFSET UNITYSDK_OFFSET(0x129B4880)
#define LBAFEBOKJCC_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x129B3A70)
#define LBAFEBOKJCC_CFNKALIEIFL_OFFSET UNITYSDK_OFFSET(0x129B3F90)
#define LBAFEBOKJCC_CINMEPOMAAG_OFFSET UNITYSDK_OFFSET(0x129B44A0)
#define LBAFEBOKJCC_DIPCAIHDMIJ_OFFSET UNITYSDK_OFFSET(0x129B4910)
#define LBAFEBOKJCC_HJLOCLEOLOF_OFFSET UNITYSDK_OFFSET(0x129B3D90)
#define LBAFEBOKJCC_KHBJKLPINGJ_OFFSET UNITYSDK_OFFSET(0x129B40D0)
#define LBAFEBOKJCC_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x129B3670)
#define LBAFEBOKJCC_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x129B4530)
#define LBAFEBOKJCC_OFFKDAJELAN_OFFSET UNITYSDK_OFFSET(0x129B3830)
#define LBAFEBOKJCC__CTOR_OFFSET UNITYSDK_OFFSET(0x129B3ED0)

inline static constexpr unsigned int LBAFEBOKJCC_TypeDefinitionIndex = 88255;

class LBAFEBOKJCC : public ::CAONGKLFNGN
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KGOEPEBCOOB>* IDHJPMKIFAD; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*>* FHCINHKNLJN; // 0x18
	::System::Boolean DHLGGGGJAFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAFEBOKJCC__CTOR_OFFSET))(this);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_KIJAJIHPBDL_OFFSET))(this);
	}

	::System::Void BMGEEIJFLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_BMGEEIJFLIJ_OFFSET))(this);
	}

	::System::Void CFNKALIEIFL(::System::Int32 HGNBIOANEAL, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>* EEKBIPHFODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_CFNKALIEIFL_OFFSET))(this, HGNBIOANEAL, EEKBIPHFODH);
	}

	::System::Boolean KHBJKLPINGJ(::System::Int32 HGNBIOANEAL, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>* JLOPJAOJNKK, ::AHAICPLGBAH*& EPIDDDEJJDE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*, ::AHAICPLGBAH*&))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_KHBJKLPINGJ_OFFSET))(this, HGNBIOANEAL, JLOPJAOJNKK, EPIDDDEJJDE);
	}

	::System::Void CINMEPOMAAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_CINMEPOMAAG_OFFSET))(this);
	}

	::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void ABLKKHDKCOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_ABLKKHDKCOO_OFFSET))(this);
	}

	::System::Void OFFKDAJELAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_OFFKDAJELAN_OFFSET))(this);
	}

	::System::Void HJLOCLEOLOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_HJLOCLEOLOF_OFFSET))(this);
	}

	::System::Void DIPCAIHDMIJ(::System::Int32 HGNBIOANEAL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBAFEBOKJCC_DIPCAIHDMIJ_OFFSET))(this, HGNBIOANEAL);
	}
};
