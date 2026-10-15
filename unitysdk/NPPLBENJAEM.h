#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHJGACLHFDJ.h"
class AJHOBFAMAFO;
class GGJFAFONDHN;
class JGBDPKCDENM;
class LJGLNBLDDDJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPPLBENJAEM_BMCNGMBECOK_OFFSET UNITYSDK_OFFSET(0xBD13DA0)
#define NPPLBENJAEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD14500)
#define NPPLBENJAEM_DJLFAEMMMDK_OFFSET UNITYSDK_OFFSET(0xBD13DF0)
#define NPPLBENJAEM_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0xBD14150)
#define NPPLBENJAEM_HGHNADHAMOG_OFFSET UNITYSDK_OFFSET(0xBD14370)
#define NPPLBENJAEM_IBKMEFCDDHF_OFFSET UNITYSDK_OFFSET(0xBD14360)
#define NPPLBENJAEM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBD142C0)

inline static constexpr unsigned int NPPLBENJAEM_TypeDefinitionIndex = 49323;

	class NPPLBENJAEM : public ::HHJGACLHFDJ
	{
	public:
		::AJHOBFAMAFO* ABJANJPBHEH; // 0x28
		::LJGLNBLDDDJ* HOAFIIPDPNA; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* KKHBIELEAOB; // 0x38
		::System::Boolean AMFHEJMFNJM; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLBENJAEM_CTOR_OFFSET))(this);
		}

		::System::Void BMCNGMBECOK(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + NPPLBENJAEM_BMCNGMBECOK_OFFSET))(this, a1);
		}

		::System::Void EPNKLHCHFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLBENJAEM_EPNKLHCHFIH_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLBENJAEM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* IBKMEFCDDHF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLBENJAEM_IBKMEFCDDHF_OFFSET))(this);
		}

		::System::Void DJLFAEMMMDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLBENJAEM_DJLFAEMMMDK_OFFSET))(this);
		}

		::System::Single HGHNADHAMOG(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPPLBENJAEM_HGHNADHAMOG_OFFSET))(this, a1);
		}

	};
