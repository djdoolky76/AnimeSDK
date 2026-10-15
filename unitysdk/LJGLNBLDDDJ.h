#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
class LJGLNBLDDDJ;
namespace System { class String; }

#define LJGLNBLDDDJ_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB718110)
#define LJGLNBLDDDJ_CBPIGOCOHLK_OFFSET UNITYSDK_OFFSET(0xB7183F0)
#define LJGLNBLDDDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7184B0)
#define LJGLNBLDDDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7182E0)
#define LJGLNBLDDDJ_NDINLCMBHMG_OFFSET UNITYSDK_OFFSET(0xB718340)

inline static constexpr unsigned int LJGLNBLDDDJ_TypeDefinitionIndex = 49476;

	class LJGLNBLDDDJ
	{
	public:
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "LJGLNBLDDDJ")->GetStaticField(0x64590);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGLNBLDDDJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJGLNBLDDDJ_CCTOR_OFFSET))();
		}

		static ::LJGLNBLDDDJ* ACMKLFOMPFC(::System::String* a1)
		{
			return ((::LJGLNBLDDDJ*(*)(::System::String*))((::PBYTE)hIl2Cpp + LJGLNBLDDDJ_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::System::Void NDINLCMBHMG(::LJGLNBLDDDJ* a1)
		{
			return ((::System::Void(*)(::LJGLNBLDDDJ*))((::PBYTE)hIl2Cpp + LJGLNBLDDDJ_NDINLCMBHMG_OFFSET))(a1);
		}

		::GGJFAFONDHN* CBPIGOCOHLK()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGLNBLDDDJ_CBPIGOCOHLK_OFFSET))(this);
		}

	};
