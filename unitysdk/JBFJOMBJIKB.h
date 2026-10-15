#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFEFOGNGCMH;
class GAOBMNLLPEM;
class GHMGGIHEHJE;
class KPDKCEAFBHI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBFJOMBJIKB_AAOBNPCBOBM_OFFSET UNITYSDK_OFFSET(0x1656D9A0)
#define JBFJOMBJIKB_BEMIAOJILKP_OFFSET UNITYSDK_OFFSET(0x1656D630)
#define JBFJOMBJIKB_BGHODDGCENG_OFFSET UNITYSDK_OFFSET(0x1656C9A0)
#define JBFJOMBJIKB_BHIHNGNAGAL_OFFSET UNITYSDK_OFFSET(0x1656D8F0)
#define JBFJOMBJIKB_BMKIEPCHAHK_OFFSET UNITYSDK_OFFSET(0x1656D760)
#define JBFJOMBJIKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1656DAD0)
#define JBFJOMBJIKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1656D9F0)
#define JBFJOMBJIKB_HLDPKFGGOOF_OFFSET UNITYSDK_OFFSET(0x1656C8C0)
#define JBFJOMBJIKB_JALCDHJAKOI_OFFSET UNITYSDK_OFFSET(0x1656CEE0)
#define JBFJOMBJIKB_NAPEKHMJGHF_OFFSET UNITYSDK_OFFSET(0x1656D820)
#define JBFJOMBJIKB_PGEAGALIFDK_OFFSET UNITYSDK_OFFSET(0x1656C7F0)

	class JBFJOMBJIKB : public ::System::Object
	{
	public:
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::List_1<::GAOBMNLLPEM*>* GMMIGKPLFME; // 0x18
		::GAOBMNLLPEM* HHBACOFCLAO; // 0x20
		::CFEFOGNGCMH* FCDIHHEDEHB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_CTOR_OFFSET))(this);
		}

		::GAOBMNLLPEM* PGEAGALIFDK()
		{
			return ((::GAOBMNLLPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_PGEAGALIFDK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GAOBMNLLPEM*>* JALCDHJAKOI()
		{
			return ((::System::Collections::Generic::List_1<::GAOBMNLLPEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_JALCDHJAKOI_OFFSET))(this);
		}

		::System::String* NAPEKHMJGHF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_NAPEKHMJGHF_OFFSET))(this);
		}

		::System::Void AAOBNPCBOBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_AAOBNPCBOBM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_DISPOSE_OFFSET))(this);
		}

		::GAOBMNLLPEM* BEMIAOJILKP(::System::Int32 a1)
		{
			return ((::GAOBMNLLPEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_BEMIAOJILKP_OFFSET))(this, a1);
		}

		::System::Void BMKIEPCHAHK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_BMKIEPCHAHK_OFFSET))(this, a1);
		}

		::System::Void BGHODDGCENG(::GHMGGIHEHJE* a1, ::GAOBMNLLPEM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GAOBMNLLPEM*))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_BGHODDGCENG_OFFSET))(this, a1, a2);
		}

		::GHMGGIHEHJE* HLDPKFGGOOF()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_HLDPKFGGOOF_OFFSET))(this);
		}

		::CFEFOGNGCMH* BHIHNGNAGAL()
		{
			return ((::CFEFOGNGCMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFJOMBJIKB_BHIHNGNAGAL_OFFSET))(this);
		}

	};
