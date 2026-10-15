#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGKKDIOKFDA;
namespace Sofa { class BaseSofaControl; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIAPGPIHHKO_ACLFABNHBDM_OFFSET UNITYSDK_OFFSET(0x154AFB80)
#define EIAPGPIHHKO_CDHDLODJJKD_OFFSET UNITYSDK_OFFSET(0x154AFCD0)
#define EIAPGPIHHKO_CTOR_OFFSET UNITYSDK_OFFSET(0x154AF940)
#define EIAPGPIHHKO_JCMKEOIHHEG_OFFSET UNITYSDK_OFFSET(0x154AF9A0)
#define EIAPGPIHHKO_KBGOBCHKFPJ_OFFSET UNITYSDK_OFFSET(0x154AFA40)
#define EIAPGPIHHKO_MGPJKBKPIMO_OFFSET UNITYSDK_OFFSET(0x154AFAE0)
#define EIAPGPIHHKO_POJDCEKAMHH_OFFSET UNITYSDK_OFFSET(0x154AF950)

inline static constexpr unsigned int EIAPGPIHHKO_TypeDefinitionIndex = 49691;

	class EIAPGPIHHKO : public ::System::Object
	{
	public:
		::EGKKDIOKFDA* CFKHNPGEAJA; // 0x10
		::System::Action_1<::Sofa::BaseSofaControl*>* DLLGEJMHAPN; // 0x18
		::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* GFFAGJOELCH; // 0x20
		::System::Void _ctor(::EGKKDIOKFDA* a1, ::System::Action_1<::Sofa::BaseSofaControl*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EGKKDIOKFDA*, ::System::Action_1<::Sofa::BaseSofaControl*>*))((::PBYTE)hIl2Cpp + EIAPGPIHHKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Sofa::BaseSofaControl*>* POJDCEKAMHH()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Sofa::BaseSofaControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAPGPIHHKO_POJDCEKAMHH_OFFSET))(this);
		}

		::System::Void JCMKEOIHHEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAPGPIHHKO_JCMKEOIHHEG_OFFSET))(this);
		}

		::System::Void KBGOBCHKFPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAPGPIHHKO_KBGOBCHKFPJ_OFFSET))(this);
		}

		::System::Void MGPJKBKPIMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAPGPIHHKO_MGPJKBKPIMO_OFFSET))(this);
		}

		::System::Void ACLFABNHBDM(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + EIAPGPIHHKO_ACLFABNHBDM_OFFSET))(this, a1);
		}

		::System::Void CDHDLODJJKD(::Sofa::BaseSofaControl* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIAPGPIHHKO_CDHDLODJJKD_OFFSET))(this, a1, a2);
		}

	};
