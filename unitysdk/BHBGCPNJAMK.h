#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class JPOCJBFHNMJ;
namespace System { class Type; }

#define BHBGCPNJAMK_CTOR_OFFSET UNITYSDK_OFFSET(0x151DC6C0)
#define BHBGCPNJAMK_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x151DC610)
#define BHBGCPNJAMK_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x151DC670)
#define BHBGCPNJAMK_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x151DC740)

inline static constexpr unsigned int BHBGCPNJAMK_TypeDefinitionIndex = 64164;

	class BHBGCPNJAMK : public ::System::Object
	{
	public:
		::JPOCJBFHNMJ* LBKOCPAGPDE; // 0x10
		::System::Void _ctor(::JPOCJBFHNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPOCJBFHNMJ*))((::PBYTE)hIl2Cpp + BHBGCPNJAMK_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBGCPNJAMK_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBGCPNJAMK_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + BHBGCPNJAMK_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
