#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JABLLPHOHLH_HNMMLJPADGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1653C660)
#define JABLLPHOHLH_HNMMLJPADGI_RENT_OFFSET UNITYSDK_OFFSET(0x1653C6C0)
#define JABLLPHOHLH_HNMMLJPADGI_RETURN_OFFSET UNITYSDK_OFFSET(0x1653C890)

	class JABLLPHOHLH_HNMMLJPADGI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Char>*>* CHJJCIMIFJJ; // 0x10
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Char>*>* PGAKHAKKGAN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABLLPHOHLH_HNMMLJPADGI_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* Rent(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JABLLPHOHLH_HNMMLJPADGI_RENT_OFFSET))(this, a1);
		}

		::System::Void Return(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + JABLLPHOHLH_HNMMLJPADGI_RETURN_OFFSET))(this, a1);
		}

	};
