#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJDIGIPHNGM;
namespace System { class Object; }

#define LJDIGIPHNGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC993B0)
#define LJDIGIPHNGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC993F0)
#define LJDIGIPHNGM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FC99400)

inline static constexpr unsigned int LJDIGIPHNGM___c_TypeDefinitionIndex = 35268;

	class LJDIGIPHNGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDIGIPHNGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDIGIPHNGM___C_CTOR_OFFSET))(this);
		}

		::LJDIGIPHNGM* __cctor_b__18_0()
		{
			return ((::LJDIGIPHNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDIGIPHNGM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
