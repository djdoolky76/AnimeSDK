#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class LCLPKHCHBDO;
namespace System { class Type; }

#define GJAJOEOLIHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15A4A030)
#define GJAJOEOLIHL_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x15A49EF0)
#define GJAJOEOLIHL_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x15A49F50)
#define GJAJOEOLIHL_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x15A4A080)

inline static constexpr unsigned int GJAJOEOLIHL_TypeDefinitionIndex = 62591;

	class GJAJOEOLIHL : public ::System::Object
	{
	public:
		::LCLPKHCHBDO* OGMCNDAEJID; // 0x10
		::System::Void _ctor(::LCLPKHCHBDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCLPKHCHBDO*))((::PBYTE)hIl2Cpp + GJAJOEOLIHL_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAJOEOLIHL_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAJOEOLIHL_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + GJAJOEOLIHL_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
