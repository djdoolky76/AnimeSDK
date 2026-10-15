#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StringCase.h"
#include "unitysdk/System/Object.h"
class AJKLCFNAHBH;
namespace System { class String; }

#define ILGPJCFJHII_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC30C20)
#define ILGPJCFJHII_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1EC30CC0)
#define ILGPJCFJHII_SET_OFFSET UNITYSDK_OFFSET(0x1EC30C30)

	class ILGPJCFJHII : public ::System::Object
	{
	public:
		::System::String* NBJFHLDKLKL; // 0x10
		::RPG::Client::StringCase MFCHEBJJFLO; // 0x18
		::System::Void _ctor(::RPG::Client::StringCase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StringCase))((::PBYTE)hIl2Cpp + ILGPJCFJHII_CTOR_OFFSET))(this, a1);
		}

		::System::Void Set(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ILGPJCFJHII_SET_OFFSET))(this, a1);
		}

		static ::System::String* MNGGAOFNGIP(::AJKLCFNAHBH* a1)
		{
			return ((::System::String*(*)(::AJKLCFNAHBH*))((::PBYTE)hIl2Cpp + ILGPJCFJHII_MNGGAOFNGIP_OFFSET))(a1);
		}

	};
