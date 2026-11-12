#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDGEFKPIJJJ;
namespace System { class Object; }

#define DDGEFKPIJJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F456840)
#define DDGEFKPIJJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F456880)
#define DDGEFKPIJJJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F456890)

inline static constexpr unsigned int DDGEFKPIJJJ___c_TypeDefinitionIndex = 30195;

	class DDGEFKPIJJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDGEFKPIJJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGEFKPIJJJ___C_CTOR_OFFSET))(this);
		}

		::DDGEFKPIJJJ* __cctor_b__38_0()
		{
			return ((::DDGEFKPIJJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGEFKPIJJJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
