#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMLCKCIKB;
namespace System { class Object; }

#define JGAMLCKCIKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20628E20)
#define JGAMLCKCIKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20628E60)
#define JGAMLCKCIKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20628E70)

inline static constexpr unsigned int JGAMLCKCIKB___c_TypeDefinitionIndex = 33262;

	class JGAMLCKCIKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FE30);
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
