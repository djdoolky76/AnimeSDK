#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMPGEFGAGOL;
class NIMHLHECACH;

#define JMPGEFGAGOL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB26DF90)
#define JMPGEFGAGOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB26DE20)
#define JMPGEFGAGOL_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB26DDA0)
#define JMPGEFGAGOL_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xB26DE30)

inline static constexpr unsigned int JMPGEFGAGOL_TypeDefinitionIndex = 75275;

	class JMPGEFGAGOL : public ::System::Object
	{
	public:
		static ::JMPGEFGAGOL** StaticGet_EMLNOINPICJ()
		{
			return (::JMPGEFGAGOL**)UnitySDK::FromName("", "JMPGEFGAGOL")->GetStaticField(0x20D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPGEFGAGOL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPGEFGAGOL_CCTOR_OFFSET))();
		}

		static ::JMPGEFGAGOL* GGBLHEHJBDO()
		{
			return ((::JMPGEFGAGOL*(*)())((::PBYTE)hIl2Cpp + JMPGEFGAGOL_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void MBABPIHGAJN(::NIMHLHECACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH*))((::PBYTE)hIl2Cpp + JMPGEFGAGOL_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
