#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPICFNLLMCO.h"
#include "unitysdk/System/Object.h"
class AAKEKBEKPJA_LIBLAELCOLE;
class DCNCHPKGHHN;
class DCNNAGMLENM;
class HBFPEEPJOPK;
class HCAJDCFFEAE;
class JLJMMKPGDGH;
class PJFJMEEIOCO;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define AAKEKBEKPJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB0CCB60)
#define AAKEKBEKPJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CCA80)
#define AAKEKBEKPJA_DPHNLLHPOHP_OFFSET UNITYSDK_OFFSET(0xB0CD0A0)
#define AAKEKBEKPJA_ENELLPEBGBH_OFFSET UNITYSDK_OFFSET(0xB0CCBE0)
#define AAKEKBEKPJA_JNGLLFLFHLE_OFFSET UNITYSDK_OFFSET(0xB0CD780)
#define AAKEKBEKPJA_JOOKBEAMDFB_OFFSET UNITYSDK_OFFSET(0xB0CCF40)
#define AAKEKBEKPJA_MGJIBAEOCFH_OFFSET UNITYSDK_OFFSET(0xB0CCD40)
#define AAKEKBEKPJA_MIFPPBGJNHN_OFFSET UNITYSDK_OFFSET(0xB0CD610)
#define AAKEKBEKPJA_NMGAJKMDOHH_OFFSET UNITYSDK_OFFSET(0xB0CD360)

inline static constexpr unsigned int AAKEKBEKPJA_TypeDefinitionIndex = 81852;

	class AAKEKBEKPJA : public ::System::Object
	{
	public:
		::System::Func_1<::JLJMMKPGDGH*>* NENEHLHAPOF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKEKBEKPJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Func_1<::JLJMMKPGDGH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::JLJMMKPGDGH*>*))((::PBYTE)hIl2Cpp + AAKEKBEKPJA_CTOR_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ENELLPEBGBH(::HPICFNLLMCO a1, ::DCNNAGMLENM* a2, ::PJFJMEEIOCO* a3, ::HCAJDCFFEAE* a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::HPICFNLLMCO, ::DCNNAGMLENM*, ::PJFJMEEIOCO*, ::HCAJDCFFEAE*))((::PBYTE)hIl2Cpp + AAKEKBEKPJA_ENELLPEBGBH_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean MGJIBAEOCFH(::HPICFNLLMCO a1, ::DCNNAGMLENM* a2, ::PJFJMEEIOCO* a3, ::HCAJDCFFEAE* a4, ::AAKEKBEKPJA_LIBLAELCOLE* a5)
		{
			return ((::System::Boolean(*)(::HPICFNLLMCO, ::DCNNAGMLENM*, ::PJFJMEEIOCO*, ::HCAJDCFFEAE*, ::AAKEKBEKPJA_LIBLAELCOLE*))((::PBYTE)hIl2Cpp + AAKEKBEKPJA_MGJIBAEOCFH_OFFSET))(a1, a2, a3, a4, a5);
		}

		::RPG::Client::Promises::IPromise* JOOKBEAMDFB(::AAKEKBEKPJA_LIBLAELCOLE* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::AAKEKBEKPJA_LIBLAELCOLE*))((::PBYTE)hIl2Cpp + AAKEKBEKPJA_JOOKBEAMDFB_OFFSET))(this, a1);
		}

		static ::JLJMMKPGDGH* MIFPPBGJNHN()
		{
			return ((::JLJMMKPGDGH*(*)())((::PBYTE)hIl2Cpp + AAKEKBEKPJA_MIFPPBGJNHN_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* NMGAJKMDOHH(::JLJMMKPGDGH* a1, ::AAKEKBEKPJA_LIBLAELCOLE* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::JLJMMKPGDGH*, ::AAKEKBEKPJA_LIBLAELCOLE*))((::PBYTE)hIl2Cpp + AAKEKBEKPJA_NMGAJKMDOHH_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::IPromise* DPHNLLHPOHP(::JLJMMKPGDGH* a1, ::AAKEKBEKPJA_LIBLAELCOLE* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::JLJMMKPGDGH*, ::AAKEKBEKPJA_LIBLAELCOLE*))((::PBYTE)hIl2Cpp + AAKEKBEKPJA_DPHNLLHPOHP_OFFSET))(a1, a2);
		}

		static ::System::Void JNGLLFLFHLE(::DCNCHPKGHHN* a1)
		{
			return ((::System::Void(*)(::DCNCHPKGHHN*))((::PBYTE)hIl2Cpp + AAKEKBEKPJA_JNGLLFLFHLE_OFFSET))(a1);
		}

	};
