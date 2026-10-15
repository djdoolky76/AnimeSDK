#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNOLLIAKGDB;
namespace System { class Object; }

#define PNOLLIAKGDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC11A0)
#define PNOLLIAKGDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC11D0)
#define PNOLLIAKGDB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFC11E0)

inline static constexpr unsigned int PNOLLIAKGDB___c_TypeDefinitionIndex = 32033;

	class PNOLLIAKGDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x524C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOLLIAKGDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB___C_CTOR_OFFSET))(this);
		}

		::PNOLLIAKGDB* __cctor_b__33_0()
		{
			return ((::PNOLLIAKGDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
