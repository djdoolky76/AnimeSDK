#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/NJIJCDNNBNI.h"
class IOABBMGCIOM;
class NNCKBIHOFIP;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IOABBMGCIOM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x164ED270)
#define IOABBMGCIOM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x164ED360)
#define IOABBMGCIOM_CMIEMCPGBID_OFFSET UNITYSDK_OFFSET(0x164ED0D0)
#define IOABBMGCIOM_CNIIKDGIMEP_OFFSET UNITYSDK_OFFSET(0x164ED180)
#define IOABBMGCIOM_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x164ECE40)
#define IOABBMGCIOM_CTOR_OFFSET UNITYSDK_OFFSET(0x164ED430)
#define IOABBMGCIOM_EGLHCCFNAGK_OFFSET UNITYSDK_OFFSET(0x164ECD80)
#define IOABBMGCIOM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x164ECAE0)
#define IOABBMGCIOM_HPCHPPILBAF_OFFSET UNITYSDK_OFFSET(0x164ED000)
#define IOABBMGCIOM_HPKAAIMCAPC_OFFSET UNITYSDK_OFFSET(0x164ECD30)
#define IOABBMGCIOM_KOGJBOIEPOM_OFFSET UNITYSDK_OFFSET(0x164ECA60)
#define IOABBMGCIOM_MBNFFDMFCAM_OFFSET UNITYSDK_OFFSET(0x164ECEB0)
#define IOABBMGCIOM__ONBIND_OFFSET UNITYSDK_OFFSET(0x164EC8D0)

inline static constexpr unsigned int IOABBMGCIOM_TypeDefinitionIndex = 72286;

	class IOABBMGCIOM : public ::FMPCODLIOLG
	{
	public:
		::System::Action_1<::IOABBMGCIOM*>* HJLKNPIFNGI; // 0x60
		::NNCKBIHOFIP* PFKCKIOAOFO; // 0x68
		::System::UInt32 MEJAMMHEMEE; // 0x70
		::System::UInt32 ELBDMPNBEEH; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOABBMGCIOM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOABBMGCIOM__ONBIND_OFFSET))(this);
		}

		::System::Void KOGJBOIEPOM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOABBMGCIOM_KOGJBOIEPOM_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOABBMGCIOM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void HPKAAIMCAPC(::System::Action_1<::IOABBMGCIOM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IOABBMGCIOM*>*))((::PBYTE)hIl2Cpp + IOABBMGCIOM_HPKAAIMCAPC_OFFSET))(this, a1);
		}

		::System::Void EGLHCCFNAGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOABBMGCIOM_EGLHCCFNAGK_OFFSET))(this);
		}

		::System::Void COPGACEDIEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOABBMGCIOM_COPGACEDIEI_OFFSET))(this);
		}

		::System::Void MBNFFDMFCAM(::System::Collections::Generic::List_1<::NJIJCDNNBNI>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NJIJCDNNBNI>*))((::PBYTE)hIl2Cpp + IOABBMGCIOM_MBNFFDMFCAM_OFFSET))(this, a1);
		}

		::System::Void HPCHPPILBAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOABBMGCIOM_HPCHPPILBAF_OFFSET))(this);
		}

		::System::Void CMIEMCPGBID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOABBMGCIOM_CMIEMCPGBID_OFFSET))(this);
		}

		::System::Void CNIIKDGIMEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOABBMGCIOM_CNIIKDGIMEP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOABBMGCIOM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOABBMGCIOM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
