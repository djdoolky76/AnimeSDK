#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
namespace RPG::Client::Pet { class IPet; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ABMFJGJPDNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB109D00)
#define ABMFJGJPDNI_DOKNPJEFAJF_OFFSET UNITYSDK_OFFSET(0xB109980)
#define ABMFJGJPDNI_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xB109890)
#define ABMFJGJPDNI_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xB108CF0)
#define ABMFJGJPDNI_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xB109910)
#define ABMFJGJPDNI_JDBGEIMLNBL_OFFSET UNITYSDK_OFFSET(0xB108DB0)
#define ABMFJGJPDNI_PFMBNDDBOHL_OFFSET UNITYSDK_OFFSET(0xB1099E0)

	class ABMFJGJPDNI : public ::LJKHPOHKIIF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMFJGJPDNI_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMFJGJPDNI_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMFJGJPDNI_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMFJGJPDNI_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void DOKNPJEFAJF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABMFJGJPDNI_DOKNPJEFAJF_OFFSET))(this, a1);
		}

		::System::Void JDBGEIMLNBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMFJGJPDNI_JDBGEIMLNBL_OFFSET))(this);
		}

		::System::Void PFMBNDDBOHL(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::RPG::Client::Pet::IPet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + ABMFJGJPDNI_PFMBNDDBOHL_OFFSET))(this, a1, a2);
		}

	};
