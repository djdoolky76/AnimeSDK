#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEPCHBPPNBK;
class HJCPBDECGML;
class IOLGDGNPEEO;
class KAIKBCBEEAL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJCPBDECGML_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15CFD010)
#define HJCPBDECGML_CTOR_OFFSET UNITYSDK_OFFSET(0x15CFD090)
#define HJCPBDECGML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CFD210)
#define HJCPBDECGML_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0x15CFD4E0)
#define HJCPBDECGML_GCMELENFPAJ_OFFSET UNITYSDK_OFFSET(0x15CFD0D0)
#define HJCPBDECGML_GET_PROPITEMS_OFFSET UNITYSDK_OFFSET(0x15CFD850)
#define HJCPBDECGML_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x15CFD610)
#define HJCPBDECGML_IAJBIDKEOLA_OFFSET UNITYSDK_OFFSET(0x15CFD3B0)
#define HJCPBDECGML_LIHJCMNPNAG_OFFSET UNITYSDK_OFFSET(0x15CFD410)
#define HJCPBDECGML_PEHIHPHCJAK_OFFSET UNITYSDK_OFFSET(0x15CFD1C0)
#define HJCPBDECGML_SET_PROPITEMS_OFFSET UNITYSDK_OFFSET(0x15CFD860)

inline static constexpr unsigned int HJCPBDECGML_TypeDefinitionIndex = 71467;

	class HJCPBDECGML : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IOLGDGNPEEO*>* _PropItems_k__BackingField; // 0x10
		::System::Boolean EINNACFPAEN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCPBDECGML_CTOR_OFFSET))(this);
		}

		static ::HJCPBDECGML* BPLPBPMEODA(::System::Int32 a1)
		{
			return ((::HJCPBDECGML*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HJCPBDECGML_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void GCMELENFPAJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJCPBDECGML_GCMELENFPAJ_OFFSET))(this, a1);
		}

		::System::Void PEHIHPHCJAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJCPBDECGML_PEHIHPHCJAK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCPBDECGML_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IAJBIDKEOLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCPBDECGML_IAJBIDKEOLA_OFFSET))(this);
		}

		::System::Void LIHJCMNPNAG(::EEPCHBPPNBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEPCHBPPNBK*))((::PBYTE)hIl2Cpp + HJCPBDECGML_LIHJCMNPNAG_OFFSET))(this, a1);
		}

		::System::Void EJDAKAECODE(::KAIKBCBEEAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAIKBCBEEAL*))((::PBYTE)hIl2Cpp + HJCPBDECGML_EJDAKAECODE_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJCPBDECGML_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IOLGDGNPEEO*>* get_PropItems()
		{
			return ((::System::Collections::Generic::List_1<::IOLGDGNPEEO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCPBDECGML_GET_PROPITEMS_OFFSET))(this);
		}

		::System::Void set_PropItems(::System::Collections::Generic::List_1<::IOLGDGNPEEO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IOLGDGNPEEO*>*))((::PBYTE)hIl2Cpp + HJCPBDECGML_SET_PROPITEMS_OFFSET))(this, a1);
		}

	};
