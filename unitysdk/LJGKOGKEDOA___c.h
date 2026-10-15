#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJGKOGKEDOA;
namespace System { class Object; }

#define LJGKOGKEDOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E981610)
#define LJGKOGKEDOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E981650)
#define LJGKOGKEDOA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E981660)

inline static constexpr unsigned int LJGKOGKEDOA___c_TypeDefinitionIndex = 31701;

	class LJGKOGKEDOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJGKOGKEDOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKOGKEDOA___C_CTOR_OFFSET))(this);
		}

		::LJGKOGKEDOA* __cctor_b__23_0()
		{
			return ((::LJGKOGKEDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKOGKEDOA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
