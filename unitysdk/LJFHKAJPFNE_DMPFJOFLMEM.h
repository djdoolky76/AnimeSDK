#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJFHKAJPFNE_PBJCGMLECGD;
class NFJIADFIJKO;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJFHKAJPFNE_DMPFJOFLMEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB700800)
#define LJFHKAJPFNE_DMPFJOFLMEM_GLBCDNOBCNO_OFFSET UNITYSDK_OFFSET(0xB712070)
#define LJFHKAJPFNE_DMPFJOFLMEM_GMFJJOJADGK_OFFSET UNITYSDK_OFFSET(0xB7126F0)
#define LJFHKAJPFNE_DMPFJOFLMEM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB707540)

	class LJFHKAJPFNE_DMPFJOFLMEM : public ::System::Object
	{
	public:
		::NFJIADFIJKO* PFOBDINCJDI; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* ICJMOBAMHFN; // 0x18
		::System::Void _ctor(::NFJIADFIJKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFJIADFIJKO*))((::PBYTE)hIl2Cpp + LJFHKAJPFNE_DMPFJOFLMEM_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFHKAJPFNE_DMPFJOFLMEM_HADOHLNHHGB_OFFSET))(this);
		}

		::LJFHKAJPFNE_PBJCGMLECGD* GLBCDNOBCNO(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::Action* a5, ::System::Boolean a6)
		{
			return ((::LJFHKAJPFNE_PBJCGMLECGD*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJFHKAJPFNE_DMPFJOFLMEM_GLBCDNOBCNO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::LJFHKAJPFNE_PBJCGMLECGD* GMFJJOJADGK(::System::String* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::LJFHKAJPFNE_PBJCGMLECGD*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + LJFHKAJPFNE_DMPFJOFLMEM_GMFJJOJADGK_OFFSET))(this, a1, a2, a3);
		}

	};
