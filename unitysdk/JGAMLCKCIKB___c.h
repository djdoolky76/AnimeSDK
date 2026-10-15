#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMLCKCIKB;
namespace System { class Object; }

#define JGAMLCKCIKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E735260)
#define JGAMLCKCIKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7352A0)
#define JGAMLCKCIKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7352B0)

inline static constexpr unsigned int JGAMLCKCIKB___c_TypeDefinitionIndex = 32349;

	class JGAMLCKCIKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAMLCKCIKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB___C_CTOR_OFFSET))(this);
		}

		::JGAMLCKCIKB* __cctor_b__33_0()
		{
			return ((::JGAMLCKCIKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
