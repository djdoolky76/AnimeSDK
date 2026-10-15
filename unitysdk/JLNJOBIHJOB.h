#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BCLKDMAHONE;
class GLLIPCNMDBO;
class HGJFHGEPFPP;
class JLNJOBIHJOB;

#define JLNJOBIHJOB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB24B3B0)
#define JLNJOBIHJOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB24B3A0)
#define JLNJOBIHJOB_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB24ACF0)
#define JLNJOBIHJOB_PBNOONBDOKB_OFFSET UNITYSDK_OFFSET(0xB24B050)

inline static constexpr unsigned int JLNJOBIHJOB_TypeDefinitionIndex = 77298;

	class JLNJOBIHJOB : public ::System::Object
	{
	public:
		static ::JLNJOBIHJOB** StaticGet_FMJPMFEDIJL()
		{
			return (::JLNJOBIHJOB**)UnitySDK::FromName("", "JLNJOBIHJOB")->GetStaticField(0x1E680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNJOBIHJOB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLNJOBIHJOB_CCTOR_OFFSET))();
		}

		::System::Boolean JJNFOPNOPBF(::HGJFHGEPFPP* a1, ::GLLIPCNMDBO* a2, ::BCLKDMAHONE* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGJFHGEPFPP*, ::GLLIPCNMDBO*, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + JLNJOBIHJOB_JJNFOPNOPBF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PBNOONBDOKB(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JLNJOBIHJOB_PBNOONBDOKB_OFFSET))(this, a1, a2);
		}

	};
