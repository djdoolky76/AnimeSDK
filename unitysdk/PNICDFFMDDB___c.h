#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNICDFFMDDB;
namespace System { class Object; }

#define PNICDFFMDDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F26CD30)
#define PNICDFFMDDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F26CD70)
#define PNICDFFMDDB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F26CD80)

inline static constexpr unsigned int PNICDFFMDDB___c_TypeDefinitionIndex = 35570;

	class PNICDFFMDDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNICDFFMDDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB___C_CTOR_OFFSET))(this);
		}

		::PNICDFFMDDB* __cctor_b__28_0()
		{
			return ((::PNICDFFMDDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
