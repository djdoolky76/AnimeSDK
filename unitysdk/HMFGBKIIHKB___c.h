#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMFGBKIIHKB;
namespace System { class Object; }

#define HMFGBKIIHKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CD4F0)
#define HMFGBKIIHKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CD520)
#define HMFGBKIIHKB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5CD530)

inline static constexpr unsigned int HMFGBKIIHKB___c_TypeDefinitionIndex = 32123;

	class HMFGBKIIHKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMFGBKIIHKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFGBKIIHKB___C_CTOR_OFFSET))(this);
		}

		::HMFGBKIIHKB* __cctor_b__18_0()
		{
			return ((::HMFGBKIIHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFGBKIIHKB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
