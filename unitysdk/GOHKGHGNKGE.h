#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class EntityColliderHeightCameraConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOHKGHGNKGE_CKHNBOCCJLK_OFFSET UNITYSDK_OFFSET(0x15B311C0)
#define GOHKGHGNKGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B31BD0)
#define GOHKGHGNKGE_HDBKOLAEEOJ_OFFSET UNITYSDK_OFFSET(0x15B31880)
#define GOHKGHGNKGE_JDGKCCAOLKJ_OFFSET UNITYSDK_OFFSET(0x15B31970)
#define GOHKGHGNKGE_KLPAIOIAGCM_OFFSET UNITYSDK_OFFSET(0x15B30D20)
#define GOHKGHGNKGE_MCMJNBKJINP_OFFSET UNITYSDK_OFFSET(0x15B31780)
#define GOHKGHGNKGE_MOLJGHEOFMA_OFFSET UNITYSDK_OFFSET(0x15B312B0)
#define GOHKGHGNKGE_NBDJHMBBDGD_OFFSET UNITYSDK_OFFSET(0x15B316D0)
#define GOHKGHGNKGE_NCBDLJKNGHK_OFFSET UNITYSDK_OFFSET(0x15B31B00)
#define GOHKGHGNKGE_OOPKEHIFKHM_OFFSET UNITYSDK_OFFSET(0x15B31120)

inline static constexpr unsigned int GOHKGHGNKGE_TypeDefinitionIndex = 56503;

	class GOHKGHGNKGE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* DFFCIHEFNGG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::KFELGAIGHAP*>*>* OEFCCNOANPG; // 0x18
		::Il2CppArray<::RPG::GameCore::EntityColliderHeightCameraConfig*>* DMFJJCIDECA; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityColliderHeightCameraConfig*, ::System::Collections::Generic::List_1<::KFELGAIGHAP*>*>* JJDFKGPAJOM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_CTOR_OFFSET))(this);
		}

		::KFELGAIGHAP* KLPAIOIAGCM(::RPG::GameCore::TaskContext* a1, ::System::Single a2)
		{
			return ((::KFELGAIGHAP*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Single))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_KLPAIOIAGCM_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CKHNBOCCJLK(::System::Single a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_CKHNBOCCJLK_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* MOLJGHEOFMA(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::KFELGAIGHAP*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_MOLJGHEOFMA_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MCMJNBKJINP(::System::String* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_MCMJNBKJINP_OFFSET))(this, a1);
		}

		::System::Void HDBKOLAEEOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_HDBKOLAEEOJ_OFFSET))(this);
		}

		::System::Void JDGKCCAOLKJ(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskListTemplate*>*, ::System::String*))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_JDGKCCAOLKJ_OFFSET))(this, a1, a2);
		}

		::System::Void NCBDLJKNGHK(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskListTemplate*>*))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_NCBDLJKNGHK_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityColliderHeightCameraConfig* OOPKEHIFKHM(::System::Single a1)
		{
			return ((::RPG::GameCore::EntityColliderHeightCameraConfig*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_OOPKEHIFKHM_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskListTemplate* NBDJHMBBDGD(::System::String* a1)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOHKGHGNKGE_NBDJHMBBDGD_OFFSET))(this, a1);
		}

	};
