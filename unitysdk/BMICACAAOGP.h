#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"
class AEOFHCMJECG;
class MECKFDKPELE;
class OLAPJIKMNMH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMICACAAOGP_BBPIKJNEOGM_OFFSET UNITYSDK_OFFSET(0xBDAB130)
#define BMICACAAOGP_CEFPFNBOAPL_OFFSET UNITYSDK_OFFSET(0xBDAB120)
#define BMICACAAOGP_CLEAR_OFFSET UNITYSDK_OFFSET(0xBDAAAD0)
#define BMICACAAOGP_CNLPPGFKLKI_1_OFFSET UNITYSDK_OFFSET(0xBDAAD20)
#define BMICACAAOGP_CNLPPGFKLKI_OFFSET UNITYSDK_OFFSET(0xBDAACC0)
#define BMICACAAOGP_CTOR_OFFSET UNITYSDK_OFFSET(0xBDAB160)
#define BMICACAAOGP_DLHJPEEGBJA_OFFSET UNITYSDK_OFFSET(0xBDAB140)
#define BMICACAAOGP_EIBHEGPNEDG_OFFSET UNITYSDK_OFFSET(0xBDAB150)
#define BMICACAAOGP_GHCMEGLIPNO_OFFSET UNITYSDK_OFFSET(0xBDAAC30)
#define BMICACAAOGP_ILDIGJIFAPH_OFFSET UNITYSDK_OFFSET(0xBDAAB50)
#define BMICACAAOGP_LBMDAFKDOPE_OFFSET UNITYSDK_OFFSET(0xBDAB090)
#define BMICACAAOGP_ODDAIEHPBOD_OFFSET UNITYSDK_OFFSET(0xBDAAE90)

inline static constexpr unsigned int BMICACAAOGP_TypeDefinitionIndex = 54226;

	class BMICACAAOGP : public ::System::Object
	{
	public:
		::OLAPJIKMNMH* CFKHNPGEAJA; // 0x10
		::AEOFHCMJECG* IIMKAHKCJOM; // 0x18
		::System::Collections::Generic::List_1<::MECKFDKPELE*>* DOOFPPEAAEL; // 0x20
		::RPG::GameCore::IVec2 GOOAMHHLHPJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMICACAAOGP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMICACAAOGP_CLEAR_OFFSET))(this);
		}

		::System::Void ILDIGJIFAPH(::MECKFDKPELE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MECKFDKPELE*))((::PBYTE)hIl2Cpp + BMICACAAOGP_ILDIGJIFAPH_OFFSET))(this, a1);
		}

		::System::Void GHCMEGLIPNO(::MECKFDKPELE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MECKFDKPELE*))((::PBYTE)hIl2Cpp + BMICACAAOGP_GHCMEGLIPNO_OFFSET))(this, a1);
		}

		::System::Boolean CNLPPGFKLKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMICACAAOGP_CNLPPGFKLKI_OFFSET))(this);
		}

		::System::Boolean CNLPPGFKLKI_1(::OLAPJIKMNMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLAPJIKMNMH*))((::PBYTE)hIl2Cpp + BMICACAAOGP_CNLPPGFKLKI_1_OFFSET))(this, a1);
		}

		::System::Boolean ODDAIEHPBOD(::OLAPJIKMNMH* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLAPJIKMNMH*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMICACAAOGP_ODDAIEHPBOD_OFFSET))(this, a1, a2);
		}

		::System::Void LBMDAFKDOPE(::OLAPJIKMNMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLAPJIKMNMH*))((::PBYTE)hIl2Cpp + BMICACAAOGP_LBMDAFKDOPE_OFFSET))(this, a1);
		}

		::OLAPJIKMNMH* CEFPFNBOAPL()
		{
			return ((::OLAPJIKMNMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMICACAAOGP_CEFPFNBOAPL_OFFSET))(this);
		}

		::AEOFHCMJECG* BBPIKJNEOGM()
		{
			return ((::AEOFHCMJECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMICACAAOGP_BBPIKJNEOGM_OFFSET))(this);
		}

		::System::Void DLHJPEEGBJA(::AEOFHCMJECG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEOFHCMJECG*))((::PBYTE)hIl2Cpp + BMICACAAOGP_DLHJPEEGBJA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MECKFDKPELE*>* EIBHEGPNEDG()
		{
			return ((::System::Collections::Generic::List_1<::MECKFDKPELE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMICACAAOGP_EIBHEGPNEDG_OFFSET))(this);
		}

	};
