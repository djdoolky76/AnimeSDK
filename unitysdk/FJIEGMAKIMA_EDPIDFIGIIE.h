#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::AI { class NavMeshObstacle; }

#define FJIEGMAKIMA_EDPIDFIGIIE_APNJKBFACFF_OFFSET UNITYSDK_OFFSET(0x157CD970)
#define FJIEGMAKIMA_EDPIDFIGIIE_CTOR_OFFSET UNITYSDK_OFFSET(0x157C90A0)
#define FJIEGMAKIMA_EDPIDFIGIIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157C60F0)
#define FJIEGMAKIMA_EDPIDFIGIIE_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x157C9030)
#define FJIEGMAKIMA_EDPIDFIGIIE_DNNCDDEPICC_OFFSET UNITYSDK_OFFSET(0x157CC040)
#define FJIEGMAKIMA_EDPIDFIGIIE_EJIHCCEDDGM_OFFSET UNITYSDK_OFFSET(0x157CCF50)
#define FJIEGMAKIMA_EDPIDFIGIIE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x157CD920)
#define FJIEGMAKIMA_EDPIDFIGIIE_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x157CD930)
#define FJIEGMAKIMA_EDPIDFIGIIE_HGKLAPJHGGL_OFFSET UNITYSDK_OFFSET(0x157CD950)
#define FJIEGMAKIMA_EDPIDFIGIIE_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x157C6A80)
#define FJIEGMAKIMA_EDPIDFIGIIE_IIECMNAACJI_OFFSET UNITYSDK_OFFSET(0x157CD7E0)
#define FJIEGMAKIMA_EDPIDFIGIIE_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0x157CD940)
#define FJIEGMAKIMA_EDPIDFIGIIE_KDEOGJLOMJF_OFFSET UNITYSDK_OFFSET(0x157CD960)
#define FJIEGMAKIMA_EDPIDFIGIIE_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x157C8FC0)
#define FJIEGMAKIMA_EDPIDFIGIIE_LEGGMPIFJIL_OFFSET UNITYSDK_OFFSET(0x157CD3F0)
#define FJIEGMAKIMA_EDPIDFIGIIE_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0x157CD8C0)
#define FJIEGMAKIMA_EDPIDFIGIIE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x157C83C0)
#define FJIEGMAKIMA_EDPIDFIGIIE_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x157C65F0)
#define FJIEGMAKIMA_EDPIDFIGIIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x157CD3A0)

	class FJIEGMAKIMA_EDPIDFIGIIE : public ::System::Object
	{
	public:
		::System::String* _UniqueName_k__BackingField; // 0x10
		::System::Action* MPKAFEJFNKN; // 0x18
		::UnityEngine::AI::NavMeshObstacle* PAJCOIGJJEN; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x30
		::System::UInt32 EEGEKMNNFKI; // 0x38
		::System::Boolean IDEGDLDCMBE; // 0x3C
		::System::Boolean FPEAGEPKMMG; // 0x3D
		::System::Byte _padding0[0x2];
		::System::UInt32 AJLGGAIEJEI; // 0x40
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_TOSTRING_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void DNNCDDEPICC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_DNNCDDEPICC_OFFSET))(this, a1, a2);
		}

		::System::Void EJIHCCEDDGM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_EJIHCCEDDGM_OFFSET))(this, a1, a2);
		}

		::System::Void LEGGMPIFJIL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_LEGGMPIFJIL_OFFSET))(this, a1);
		}

		::System::Void IIECMNAACJI(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_IIECMNAACJI_OFFSET))(this, a1);
		}

		::System::Void LLCDDOBNLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_LLCDDOBNLBJ_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_JDKCDJNJAOL_OFFSET))(this);
		}

		::System::Boolean HGKLAPJHGGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_HGKLAPJHGGL_OFFSET))(this);
		}

		::System::UInt32 KDEOGJLOMJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_KDEOGJLOMJF_OFFSET))(this);
		}

		::System::UInt32 APNJKBFACFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_EDPIDFIGIIE_APNJKBFACFF_OFFSET))(this);
		}

	};
