#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACPDKLFMAF;
class FFOAFCPMFCA;
namespace RPG::Client::ComicDessert::Service { class ComicDessertWindowService; }
namespace System { class String; }

#define PMPJHCAAAAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1849E250)
#define PMPJHCAAAAD_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x1849E480)
#define PMPJHCAAAAD_LNNPBNBCHIN_OFFSET UNITYSDK_OFFSET(0x1849E260)

inline static constexpr unsigned int PMPJHCAAAAD_TypeDefinitionIndex = 77123;

	class PMPJHCAAAAD : public ::System::Object
	{
	public:
		::RPG::Client::ComicDessert::Service::ComicDessertWindowService* MPFFGNPIDOA; // 0x10
		::BACPDKLFMAF* DJLOFBEABDA; // 0x18
		::FFOAFCPMFCA* GCFHKJJNIFH; // 0x20
		::System::Void _ctor(::FFOAFCPMFCA* a1, ::RPG::Client::ComicDessert::Service::ComicDessertWindowService* a2, ::BACPDKLFMAF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FFOAFCPMFCA*, ::RPG::Client::ComicDessert::Service::ComicDessertWindowService*, ::BACPDKLFMAF*))((::PBYTE)hIl2Cpp + PMPJHCAAAAD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNNPBNBCHIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPJHCAAAAD_LNNPBNBCHIN_OFFSET))(this);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMPJHCAAAAD_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
