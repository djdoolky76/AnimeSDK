#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALAIBAJCPOO.h"
class AEHGMMGLPAB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define JKIOFDEALDO_CECILDLADGF_OFFSET UNITYSDK_OFFSET(0xB2190D0)
#define JKIOFDEALDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB218AD0)
#define JKIOFDEALDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB218AE0)
#define JKIOFDEALDO_EDMDDIAPAGE_OFFSET UNITYSDK_OFFSET(0xB218BA0)
#define JKIOFDEALDO_GOCDJDMPGDJ_OFFSET UNITYSDK_OFFSET(0xB218E30)
#define JKIOFDEALDO_HPKFNNOMCNA_OFFSET UNITYSDK_OFFSET(0xB218B30)

inline static constexpr unsigned int JKIOFDEALDO_TypeDefinitionIndex = 78880;

	class JKIOFDEALDO : public ::ALAIBAJCPOO
	{
	public:
		::AEHGMMGLPAB* BAMOFCPNFIL; // 0xF0
		::System::Int32 NHOACAAOFAI; // 0xF8
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + JKIOFDEALDO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIOFDEALDO_DISPOSE_OFFSET))(this);
		}

		::System::Void HPKFNNOMCNA(::AEHGMMGLPAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEHGMMGLPAB*))((::PBYTE)hIl2Cpp + JKIOFDEALDO_HPKFNNOMCNA_OFFSET))(this, a1);
		}

		::System::Void EDMDDIAPAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIOFDEALDO_EDMDDIAPAGE_OFFSET))(this);
		}

		::System::Void GOCDJDMPGDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIOFDEALDO_GOCDJDMPGDJ_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* CECILDLADGF()
		{
			return ((::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIOFDEALDO_CECILDLADGF_OFFSET))(this);
		}

	};
