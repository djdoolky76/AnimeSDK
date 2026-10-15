#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/WorkGroupType.h"
#include "unitysdk/System/Object.h"
class BLKFJOLACOB;
class BNDBPCIHPGL;
class GCJHPDKDIMN;
class JDKNLNLGODN;
class MDHMIDHALGE;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define JCHNMBOAIJM_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0x16594EE0)
#define JCHNMBOAIJM_HJCBCILPKGO_OFFSET UNITYSDK_OFFSET(0x16595060)
#define JCHNMBOAIJM_JDAICLFFEHD_OFFSET UNITYSDK_OFFSET(0x16594D20)
#define JCHNMBOAIJM_NOIIDIBKOBK_OFFSET UNITYSDK_OFFSET(0x16594B60)
#define JCHNMBOAIJM_OCCLEFGIGGJ_OFFSET UNITYSDK_OFFSET(0x16594BC0)
#define JCHNMBOAIJM_ONCNDBAILLC_OFFSET UNITYSDK_OFFSET(0x16594A80)
#define JCHNMBOAIJM_PEINEMHEHGD_OFFSET UNITYSDK_OFFSET(0x165950F0)
#define JCHNMBOAIJM_PKHCDDFDBEL_OFFSET UNITYSDK_OFFSET(0x16594DB0)

	class JCHNMBOAIJM : public ::System::Object
	{
	public:
		static ::BNDBPCIHPGL* ONCNDBAILLC(::BNDBPCIHPGL* a1, ::RPG::Client::WorkGroupType a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::BNDBPCIHPGL*(*)(::BNDBPCIHPGL*, ::RPG::Client::WorkGroupType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + JCHNMBOAIJM_ONCNDBAILLC_OFFSET))(a1, a2, a3, a4);
		}

		static ::JDKNLNLGODN* NOIIDIBKOBK(::JDKNLNLGODN* a1, ::System::String* a2)
		{
			return ((::JDKNLNLGODN*(*)(::JDKNLNLGODN*, ::System::String*))((::PBYTE)hIl2Cpp + JCHNMBOAIJM_NOIIDIBKOBK_OFFSET))(a1, a2);
		}

		static ::JDKNLNLGODN* OCCLEFGIGGJ(::JDKNLNLGODN* a1, ::System::String* a2)
		{
			return ((::JDKNLNLGODN*(*)(::JDKNLNLGODN*, ::System::String*))((::PBYTE)hIl2Cpp + JCHNMBOAIJM_OCCLEFGIGGJ_OFFSET))(a1, a2);
		}

		static ::GCJHPDKDIMN* JDAICLFFEHD(::BNDBPCIHPGL* a1, ::System::Action* a2, ::System::String* a3)
		{
			return ((::GCJHPDKDIMN*(*)(::BNDBPCIHPGL*, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + JCHNMBOAIJM_JDAICLFFEHD_OFFSET))(a1, a2, a3);
		}

		static ::JDKNLNLGODN* PKHCDDFDBEL(::BNDBPCIHPGL* a1, ::RPG::Client::GamePhaseType a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::JDKNLNLGODN*(*)(::BNDBPCIHPGL*, ::RPG::Client::GamePhaseType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + JCHNMBOAIJM_PKHCDDFDBEL_OFFSET))(a1, a2, a3, a4);
		}

		static ::JDKNLNLGODN* CFKKNKJPJLM(::BNDBPCIHPGL* a1, ::RPG::Client::NotifyType a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::JDKNLNLGODN*(*)(::BNDBPCIHPGL*, ::RPG::Client::NotifyType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + JCHNMBOAIJM_CFKKNKJPJLM_OFFSET))(a1, a2, a3, a4);
		}

		static ::BLKFJOLACOB* HJCBCILPKGO(::BNDBPCIHPGL* a1, ::System::String* a2)
		{
			return ((::BLKFJOLACOB*(*)(::BNDBPCIHPGL*, ::System::String*))((::PBYTE)hIl2Cpp + JCHNMBOAIJM_HJCBCILPKGO_OFFSET))(a1, a2);
		}

		static ::MDHMIDHALGE* PEINEMHEHGD(::BNDBPCIHPGL* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::System::String* a5)
		{
			return ((::MDHMIDHALGE*(*)(::BNDBPCIHPGL*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + JCHNMBOAIJM_PEINEMHEHGD_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
