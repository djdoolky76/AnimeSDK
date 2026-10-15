#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLCPHCINDJF;
class KEMIFCIOGPE;
class ODCOIGDOFGH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEMIFCIOGPE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB3778C0)
#define KEMIFCIOGPE_CTOR_OFFSET UNITYSDK_OFFSET(0xB377930)
#define KEMIFCIOGPE_HDIIEAELOPP_OFFSET UNITYSDK_OFFSET(0xB377940)

inline static constexpr unsigned int KEMIFCIOGPE_TypeDefinitionIndex = 72177;

	class KEMIFCIOGPE : public ::System::Object
	{
	public:
		::ODCOIGDOFGH* EEFKMKMOGEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMIFCIOGPE_CTOR_OFFSET))(this);
		}

		static ::KEMIFCIOGPE* BPLPBPMEODA(::ODCOIGDOFGH* a1)
		{
			return ((::KEMIFCIOGPE*(*)(::ODCOIGDOFGH*))((::PBYTE)hIl2Cpp + KEMIFCIOGPE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::DLCPHCINDJF*>* HDIIEAELOPP()
		{
			return ((::System::Collections::Generic::List_1<::DLCPHCINDJF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMIFCIOGPE_HDIIEAELOPP_OFFSET))(this);
		}

	};
