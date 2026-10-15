#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace RPG::Client { class UIDropTarget; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOMAIEHBLOP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA33970)
#define MOMAIEHBLOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA33C50)
#define MOMAIEHBLOP_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xBA33A10)

inline static constexpr unsigned int MOMAIEHBLOP_TypeDefinitionIndex = 49871;

	class MOMAIEHBLOP : public ::System::Object
	{
	public:
		::System::Action* MBOEDFCNCJF; // 0x10
		::System::Action* EMHNPDNGJBP; // 0x18
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::CEEGMMCFCBG* a1, ::RPG::Client::UIDropTarget* a2, ::System::Func_3<::RPG::Client::UIDropTarget*, ::System::Action*, ::System::Action*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CEEGMMCFCBG*, ::RPG::Client::UIDropTarget*, ::System::Func_3<::RPG::Client::UIDropTarget*, ::System::Action*, ::System::Action*>*))((::PBYTE)hIl2Cpp + MOMAIEHBLOP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ILEMLGEGLCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMAIEHBLOP_ILEMLGEGLCC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMAIEHBLOP_DISPOSE_OFFSET))(this);
		}

	};
