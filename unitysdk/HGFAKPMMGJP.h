#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGFAKPMMGJP_PhotoUpdateUseGraphType.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GlobalTimeSlow; }
namespace RPG::GameCore { class PhotoGraphUpdateTwoPointFourParam; }
namespace RPG::GameCore { class SwitchPhotographDragMode; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGFAKPMMGJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C98280)
#define HGFAKPMMGJP_EGPHMEFBPMO_OFFSET UNITYSDK_OFFSET(0x15C97D60)
#define HGFAKPMMGJP_IDMGKLKENCA_OFFSET UNITYSDK_OFFSET(0x15C97CA0)
#define HGFAKPMMGJP_IJHAHFIJLEK_OFFSET UNITYSDK_OFFSET(0x15C97AA0)
#define HGFAKPMMGJP_IOMMJGOJLLD_OFFSET UNITYSDK_OFFSET(0x15C97FF0)
#define HGFAKPMMGJP_JNNBLEIMNKD_OFFSET UNITYSDK_OFFSET(0x15C96400)
#define HGFAKPMMGJP_KOBILJIKCMJ_OFFSET UNITYSDK_OFFSET(0x15C97D00)
#define HGFAKPMMGJP_MNJMKIGEKAF_OFFSET UNITYSDK_OFFSET(0x15C97B50)
#define HGFAKPMMGJP_NNCNGNEIHGL_OFFSET UNITYSDK_OFFSET(0x15C97E10)

	class HGFAKPMMGJP : public ::System::Object
	{
	public:
		::RPG::GameCore::SwitchPhotographDragMode* IIEMJEPAGPE; // 0x10
		::RPG::GameCore::TaskContext* MIIIMIKGKEP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::KFELGAIGHAP*>* BKKBPFMHDGF; // 0x20
		::RPG::GameCore::GlobalTimeSlow* ALJAPMHJBLA; // 0x28
		::System::Boolean HFMODAAECAN; // 0x30
		::System::Boolean GMEJICDOADK; // 0x31
		// static const ::System::String* JLEHCLKKIJG; // 0x0
		// static const ::System::String* AABEAONNFCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKPMMGJP_CTOR_OFFSET))(this);
		}

		::System::Void JNNBLEIMNKD(::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HGFAKPMMGJP_JNNBLEIMNKD_OFFSET))(this, a1, a2);
		}

		::System::Void IJHAHFIJLEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKPMMGJP_IJHAHFIJLEK_OFFSET))(this);
		}

		::System::Void IDMGKLKENCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKPMMGJP_IDMGKLKENCA_OFFSET))(this);
		}

		::System::Void KOBILJIKCMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKPMMGJP_KOBILJIKCMJ_OFFSET))(this);
		}

		::System::Void EGPHMEFBPMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKPMMGJP_EGPHMEFBPMO_OFFSET))(this);
		}

		::System::Void MNJMKIGEKAF(::HGFAKPMMGJP_PhotoUpdateUseGraphType a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGFAKPMMGJP_PhotoUpdateUseGraphType))((::PBYTE)hIl2Cpp + HGFAKPMMGJP_MNJMKIGEKAF_OFFSET))(this, a1);
		}

		::System::Void NNCNGNEIHGL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGFAKPMMGJP_NNCNGNEIHGL_OFFSET))(this, a1);
		}

		::System::Void IOMMJGOJLLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKPMMGJP_IOMMJGOJLLD_OFFSET))(this);
		}

	};
