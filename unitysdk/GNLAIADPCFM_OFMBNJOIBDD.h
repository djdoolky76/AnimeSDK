#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Object; }

#define GNLAIADPCFM_OFMBNJOIBDD_CTOR_OFFSET UNITYSDK_OFFSET(0x15B15C60)
#define GNLAIADPCFM_OFMBNJOIBDD_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x15B16290)
#define GNLAIADPCFM_OFMBNJOIBDD_HICFBGJFAFH_OFFSET UNITYSDK_OFFSET(0x15B16090)
#define GNLAIADPCFM_OFMBNJOIBDD_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x15B16240)
#define GNLAIADPCFM_OFMBNJOIBDD_PPCHOKBEHJJ_OFFSET UNITYSDK_OFFSET(0x15B162F0)

inline static constexpr unsigned int GNLAIADPCFM_OFMBNJOIBDD_TypeDefinitionIndex = 80536;

	class GNLAIADPCFM_OFMBNJOIBDD : public ::System::Object
	{
	public:
		::System::Object* AIKAPJELHNK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLAIADPCFM_OFMBNJOIBDD_CTOR_OFFSET))(this);
		}

		::System::Object* MNGGAOFNGIP(::LBJLBMOOJGM* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + GNLAIADPCFM_OFMBNJOIBDD_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::System::Object* a1, ::LBJLBMOOJGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + GNLAIADPCFM_OFMBNJOIBDD_FHAPPCADGCE_OFFSET))(this, a1, a2);
		}

		::System::Void PPCHOKBEHJJ(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + GNLAIADPCFM_OFMBNJOIBDD_PPCHOKBEHJJ_OFFSET))(this, a1);
		}

		::System::Void HICFBGJFAFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLAIADPCFM_OFMBNJOIBDD_HICFBGJFAFH_OFFSET))(this);
		}

	};
