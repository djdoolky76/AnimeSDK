#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;
class DGEPFHILKPM;
class GOGFNPKEDAL;
class JJFJNKDHOCC;

#define HDHKOJMPINB_AHBICKLBPBH_OFFSET UNITYSDK_OFFSET(0x15C26C10)
#define HDHKOJMPINB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C26C00)
#define HDHKOJMPINB_EJNIADKOHKG_OFFSET UNITYSDK_OFFSET(0x15C26D20)

inline static constexpr unsigned int HDHKOJMPINB_TypeDefinitionIndex = 80084;

	class HDHKOJMPINB : public ::System::Object
	{
	public:
		::GOGFNPKEDAL* CEFLLELKFOP; // 0x10
		::DGEPFHILKPM* OMLAHOMDEID; // 0x18
		::JJFJNKDHOCC* DAOOLMNKPEC; // 0x20
		::System::Void _ctor(::DGEPFHILKPM* a1, ::GOGFNPKEDAL* a2, ::JJFJNKDHOCC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::GOGFNPKEDAL*, ::JJFJNKDHOCC*))((::PBYTE)hIl2Cpp + HDHKOJMPINB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::BCFAKEGJPKN* AHBICKLBPBH(::System::UInt32 a1)
		{
			return ((::BCFAKEGJPKN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDHKOJMPINB_AHBICKLBPBH_OFFSET))(this, a1);
		}

		::System::Void EJNIADKOHKG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDHKOJMPINB_EJNIADKOHKG_OFFSET))(this, a1);
		}

	};
