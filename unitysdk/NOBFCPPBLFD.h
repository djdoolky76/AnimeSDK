#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAGJHEBNJD;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NOBFCPPBLFD_AOKNJCILDCE_OFFSET UNITYSDK_OFFSET(0xBCDDC50)
#define NOBFCPPBLFD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCDE3A0)
#define NOBFCPPBLFD_EAGHCCIDDKI_OFFSET UNITYSDK_OFFSET(0xBCDD7C0)
#define NOBFCPPBLFD_FCDIHABIHMF_OFFSET UNITYSDK_OFFSET(0xBCDD850)
#define NOBFCPPBLFD_LCKPDMFLDBE_OFFSET UNITYSDK_OFFSET(0xBCDD970)
#define NOBFCPPBLFD_PCMOHGCOEBA_OFFSET UNITYSDK_OFFSET(0xBCDDD70)

inline static constexpr unsigned int NOBFCPPBLFD_TypeDefinitionIndex = 66743;

	class NOBFCPPBLFD : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*>* NMCIKIHPGOP; // 0x10
		::System::Collections::Generic::Queue_1<::System::Object*>* FPKPLHACIBF; // 0x18
		::System::Collections::Generic::List_1<::NNAGJHEBNJD*>* LCNIPJJDKGA; // 0x20
		::System::Int32 JIGBBMPCPFH; // 0x28
		::System::Boolean BAHBLHDGCCJ; // 0x2C
		// static const ::System::Object LGJLJBPKGGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_CTOR_OFFSET))(this);
		}

		::System::Void EAGHCCIDDKI(::System::Collections::Generic::List_1<::NNAGJHEBNJD*>* a1, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*>*))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_EAGHCCIDDKI_OFFSET))(this, a1, a2);
		}

		::System::Void FCDIHABIHMF(::System::Collections::Generic::List_1<::NNAGJHEBNJD*>* a1, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*>*))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_FCDIHABIHMF_OFFSET))(this, a1, a2);
		}

		::System::Void AOKNJCILDCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_AOKNJCILDCE_OFFSET))(this);
		}

		::System::Void LCKPDMFLDBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_LCKPDMFLDBE_OFFSET))(this);
		}

		::System::Void PCMOHGCOEBA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_PCMOHGCOEBA_OFFSET))(this, a1);
		}

	};
