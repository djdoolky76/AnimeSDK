#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Object; }

#define FCLMKLLIDPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC6A0A0)
#define FCLMKLLIDPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC6A050)
#define FCLMKLLIDPG_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1EC69D40)
#define FCLMKLLIDPG_LJPMCEFBPBC_OFFSET UNITYSDK_OFFSET(0x1EC69DF0)
#define FCLMKLLIDPG_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1EC69CF0)
#define FCLMKLLIDPG_PPCHOKBEHJJ_OFFSET UNITYSDK_OFFSET(0x1EC69DA0)

	class FCLMKLLIDPG : public ::System::Object
	{
	public:
		::System::Object* ADJNOFMEIKM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLMKLLIDPG_CTOR_OFFSET))(this);
		}

		::System::Object* MNGGAOFNGIP(::LBJLBMOOJGM* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + FCLMKLLIDPG_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::System::Object* a1, ::LBJLBMOOJGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + FCLMKLLIDPG_FHAPPCADGCE_OFFSET))(this, a1, a2);
		}

		::System::Void PPCHOKBEHJJ(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + FCLMKLLIDPG_PPCHOKBEHJJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLMKLLIDPG_DISPOSE_OFFSET))(this);
		}

		::System::Void LJPMCEFBPBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLMKLLIDPG_LJPMCEFBPBC_OFFSET))(this);
		}

	};
