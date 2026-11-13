#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBPFBNCALB.h"
class KGGELNKBOIK;
class OFMDPNPMFCE_FCBFFDNGEGE;
namespace System { class Action; }
namespace System { class Object; }

#define OFMDPNPMFCE_AKPJLPCPJFL_OFFSET UNITYSDK_OFFSET(0x207C3FD0)
#define OFMDPNPMFCE_CTOR_OFFSET UNITYSDK_OFFSET(0x207C4130)
#define OFMDPNPMFCE_FGHJILLNDBJ_OFFSET UNITYSDK_OFFSET(0x207C4070)
#define OFMDPNPMFCE_JGHDBJLBEEG_1_OFFSET UNITYSDK_OFFSET(0x207C3D80)
#define OFMDPNPMFCE_JGHDBJLBEEG_OFFSET UNITYSDK_OFFSET(0x207C3CE0)

inline static constexpr unsigned int OFMDPNPMFCE_TypeDefinitionIndex = 42830;

	class OFMDPNPMFCE : public ::JEBPFBNCALB
	{
	public:
		::KGGELNKBOIK* LKDJONCLDDB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDPNPMFCE_CTOR_OFFSET))(this);
		}

		::System::Action* JGHDBJLBEEG(::System::Object* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFMDPNPMFCE_JGHDBJLBEEG_OFFSET))(this, a1);
		}

		::System::Action* JGHDBJLBEEG_1(::OFMDPNPMFCE_FCBFFDNGEGE* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::OFMDPNPMFCE_FCBFFDNGEGE*))((::PBYTE)hIl2Cpp + OFMDPNPMFCE_JGHDBJLBEEG_1_OFFSET))(this, a1);
		}

		::System::Void FGHJILLNDBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDPNPMFCE_FGHJILLNDBJ_OFFSET))(this);
		}

		::System::Void AKPJLPCPJFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDPNPMFCE_AKPJLPCPJFL_OFFSET))(this);
		}

	};
