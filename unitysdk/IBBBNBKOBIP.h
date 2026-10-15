#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ECCKLFIHNOH;
class GHPJHIMKMPF;
namespace RPG::Client { class TutorialGuideTalkDialogConfigWrapper; }
namespace RPG::GameCore { class ShowTutorialGuideTalkListDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define IBBBNBKOBIP_BNBLIBLDHLI_OFFSET UNITYSDK_OFFSET(0x15E28FA0)
#define IBBBNBKOBIP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E28B00)
#define IBBBNBKOBIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E28B10)
#define IBBBNBKOBIP_DMKOGGDGNLN_OFFSET UNITYSDK_OFFSET(0x15E29770)
#define IBBBNBKOBIP_EKAAEDIFCBD_OFFSET UNITYSDK_OFFSET(0x15E29570)
#define IBBBNBKOBIP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E28CC0)
#define IBBBNBKOBIP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E29290)
#define IBBBNBKOBIP_TICK_OFFSET UNITYSDK_OFFSET(0x15E293F0)

	class IBBBNBKOBIP : public ::GELIALJDFBL
	{
	public:
		::GHPJHIMKMPF* EIFGEIFAGNM; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::ECCKLFIHNOH* JELPBNHCPCO; // 0x28
		::RPG::GameCore::ShowTutorialGuideTalkListDialog* OFKGLJOAMLD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialGuideTalkListDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialGuideTalkListDialog*))((::PBYTE)hIl2Cpp + IBBBNBKOBIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBBNBKOBIP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBBNBKOBIP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBBNBKOBIP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBBBNBKOBIP_TICK_OFFSET))(this, a1);
		}

		::System::Void BNBLIBLDHLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBBNBKOBIP_BNBLIBLDHLI_OFFSET))(this);
		}

		::System::Void DMKOGGDGNLN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBBBNBKOBIP_DMKOGGDGNLN_OFFSET))(this, a1);
		}

		::RPG::Client::TutorialGuideTalkDialogConfigWrapper* EKAAEDIFCBD()
		{
			return ((::RPG::Client::TutorialGuideTalkDialogConfigWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBBNBKOBIP_EKAAEDIFCBD_OFFSET))(this);
		}

	};
