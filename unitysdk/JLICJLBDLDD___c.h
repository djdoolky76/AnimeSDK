#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLICJLBDLDD;
namespace System { class Object; }

#define JLICJLBDLDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74E2F0)
#define JLICJLBDLDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74E330)
#define JLICJLBDLDD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E74E340)

inline static constexpr unsigned int JLICJLBDLDD___c_TypeDefinitionIndex = 33735;

	class JLICJLBDLDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLICJLBDLDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLICJLBDLDD___C_CTOR_OFFSET))(this);
		}

		::JLICJLBDLDD* __cctor_b__18_0()
		{
			return ((::JLICJLBDLDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLICJLBDLDD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
