#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
class NPECKAJCCAH;
namespace System { class Object; }
namespace System { class String; }

#define MFDELBFHNHD_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xC1A2F30)
#define MFDELBFHNHD_CLEAR_OFFSET UNITYSDK_OFFSET(0xC1A2CC0)
#define MFDELBFHNHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A3100)
#define MFDELBFHNHD_DPDBNHLHEDH_OFFSET UNITYSDK_OFFSET(0xC1A2E60)
#define MFDELBFHNHD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC1A2C60)
#define MFDELBFHNHD_PBCGCKBCGFJ_OFFSET UNITYSDK_OFFSET(0xC1A2D10)

inline static constexpr unsigned int MFDELBFHNHD_TypeDefinitionIndex = 75518;

	class MFDELBFHNHD : public ::System::Object
	{
	public:
		::NPECKAJCCAH* NHKIFNKACMP; // 0x10
		::NPECKAJCCAH* KPGKAMHEDNO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDELBFHNHD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::NPECKAJCCAH* a1, ::NPECKAJCCAH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPECKAJCCAH*, ::NPECKAJCCAH*))((::PBYTE)hIl2Cpp + MFDELBFHNHD_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDELBFHNHD_CLEAR_OFFSET))(this);
		}

		::System::Boolean PBCGCKBCGFJ(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFDELBFHNHD_PBCGCKBCGFJ_OFFSET))(this, a1);
		}

		::System::Boolean DPDBNHLHEDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDELBFHNHD_DPDBNHLHEDH_OFFSET))(this);
		}

		::System::Object* BEJAJNEFHIB(::System::String* a1, ::System::String* a2, ::DMGLFMNEJGL* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + MFDELBFHNHD_BEJAJNEFHIB_OFFSET))(this, a1, a2, a3);
		}

	};
