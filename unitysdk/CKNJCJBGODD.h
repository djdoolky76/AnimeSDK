#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class CKNJCJBGODD;
class HAJDFCHFBGN;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKNJCJBGODD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD763ED0)
#define CKNJCJBGODD_CTOR_OFFSET UNITYSDK_OFFSET(0xD764080)
#define CKNJCJBGODD_DJKGABFFMDC_OFFSET UNITYSDK_OFFSET(0xD763DC0)
#define CKNJCJBGODD_KNEMAEMDMBA_OFFSET UNITYSDK_OFFSET(0xD764090)
#define CKNJCJBGODD_MJEBPFOIJME_OFFSET UNITYSDK_OFFSET(0xD764350)
#define CKNJCJBGODD_NFDHENMGIBA_OFFSET UNITYSDK_OFFSET(0xD763E00)

inline static constexpr unsigned int CKNJCJBGODD_TypeDefinitionIndex = 77661;

	class CKNJCJBGODD : public ::System::Object
	{
	public:
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x10
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNJCJBGODD_CTOR_OFFSET))(this);
		}

		static ::System::String* DJKGABFFMDC()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CKNJCJBGODD_DJKGABFFMDC_OFFSET))();
		}

		static ::System::Void NFDHENMGIBA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKNJCJBGODD_NFDHENMGIBA_OFFSET))();
		}

		static ::CKNJCJBGODD* BPLPBPMEODA(::HAJDFCHFBGN* a1)
		{
			return ((::CKNJCJBGODD*(*)(::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + CKNJCJBGODD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void KNEMAEMDMBA(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + CKNJCJBGODD_KNEMAEMDMBA_OFFSET))(this, a1, a2);
		}

		::System::Void MJEBPFOIJME(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKNJCJBGODD_MJEBPFOIJME_OFFSET))(this, a1);
		}

	};
