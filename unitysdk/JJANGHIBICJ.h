#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class GIPKHEMODAD;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define JJANGHIBICJ_AIAIDLNACAK_OFFSET UNITYSDK_OFFSET(0xB200820)
#define JJANGHIBICJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB200810)
#define JJANGHIBICJ_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB200870)
#define JJANGHIBICJ_GOHFLGNPGDJ_OFFSET UNITYSDK_OFFSET(0xB2008D0)

	class JJANGHIBICJ : public ::System::Object
	{
	public:
		::CEBMNLPNKFL* KKBFJOFGHIL; // 0x10
		::GIPKHEMODAD* FMKBPLPPNCI; // 0x18
		::CFFPEAALCPH* EHMMJBDLMPN; // 0x20
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x28
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::GIPKHEMODAD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*))((::PBYTE)hIl2Cpp + JJANGHIBICJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AIAIDLNACAK(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + JJANGHIBICJ_AIAIDLNACAK_OFFSET))(this, a1, a2);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JJANGHIBICJ_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void GOHFLGNPGDJ(::CEBMNLPNKFL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::CEBMNLPNKFL*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJANGHIBICJ_GOHFLGNPGDJ_OFFSET))(this, a1, a2);
		}

	};
