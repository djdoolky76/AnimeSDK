#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNGGKFFJILG;
namespace System { class Object; }

#define PNGGKFFJILG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF8B2F0)
#define PNGGKFFJILG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8B330)
#define PNGGKFFJILG___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1DF8B340)

inline static constexpr unsigned int PNGGKFFJILG___c_TypeDefinitionIndex = 25105;

	class PNGGKFFJILG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGGKFFJILG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGGKFFJILG___C_CTOR_OFFSET))(this);
		}

		::PNGGKFFJILG* __cctor_b__58_0()
		{
			return ((::PNGGKFFJILG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGGKFFJILG___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
