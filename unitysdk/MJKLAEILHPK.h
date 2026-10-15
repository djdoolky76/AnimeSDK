#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class GELIALJDFBL;
class KDJNAAOFMMJ;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MJKLAEILHPK_CAMHKAECLKG_OFFSET UNITYSDK_OFFSET(0x1D890)
#define MJKLAEILHPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E0)
#define MJKLAEILHPK_DFLCEICIDDF_OFFSET UNITYSDK_OFFSET(0x1DA00)
#define MJKLAEILHPK_DJNNLPKCFPL_OFFSET UNITYSDK_OFFSET(0x1DA70)
#define MJKLAEILHPK_GFKPBBEDFPB_OFFSET UNITYSDK_OFFSET(0x1D8E0)
#define MJKLAEILHPK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1D9F0)
#define MJKLAEILHPK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1D9D0)
#define MJKLAEILHPK_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1DA10)
#define MJKLAEILHPK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1D9E0)
#define MJKLAEILHPK_TICK_OFFSET UNITYSDK_OFFSET(0x1D930)

	struct alignas(8) MJKLAEILHPK
	{
		::KDJNAAOFMMJ* GIJPHIALKGF; // 0x10
		::System::Boolean LHJPKFDLIIN; // 0x18
		::System::Boolean FBCDBMLCNNL; // 0x19
		::System::Boolean CNGKAJJMNJE; // 0x1A
		::System::Byte _padding0[0x5];
		::System::Collections::Generic::Queue_1<::System::Object*>* BJJFFJGJPCL; // 0x20
		::System::Boolean NKFKGOJJEPG; // 0x28
		::System::Boolean CMOMEHMAEPK; // 0x29
		::System::Boolean MIFDMNOFMIB; // 0x2A
		::System::Byte _padding1[0x5];
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::GELIALJDFBL* CLGLOGJNKOI; // 0x38
		::System::Void _ctor(::GELIALJDFBL* a1, ::RPG::GameCore::TaskContext* a2, ::GELIALJDFBL* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::GELIALJDFBL*, ::RPG::GameCore::TaskContext*, ::GELIALJDFBL*, ::System::Boolean))((::PBYTE)hIl2Cpp + MJKLAEILHPK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CAMHKAECLKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKLAEILHPK_CAMHKAECLKG_OFFSET))(this);
		}

		::System::Void GFKPBBEDFPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKLAEILHPK_GFKPBBEDFPB_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MJKLAEILHPK_TICK_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKLAEILHPK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKLAEILHPK_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKLAEILHPK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void DFLCEICIDDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKLAEILHPK_DFLCEICIDDF_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKLAEILHPK_LDKMIKEMHFO_OFFSET))(this);
		}

		::RPG::GameCore::TaskState DJNNLPKCFPL()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKLAEILHPK_DJNNLPKCFPL_OFFSET))(this);
		}

	};
