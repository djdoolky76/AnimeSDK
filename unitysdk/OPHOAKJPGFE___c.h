#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPHOAKJPGFE;
namespace System { class Object; }

#define OPHOAKJPGFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1AAF70)
#define OPHOAKJPGFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1AAFB0)
#define OPHOAKJPGFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1AAFC0)

inline static constexpr unsigned int OPHOAKJPGFE___c_TypeDefinitionIndex = 32145;

	class OPHOAKJPGFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPHOAKJPGFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE___C_CTOR_OFFSET))(this);
		}

		::OPHOAKJPGFE* __cctor_b__28_0()
		{
			return ((::OPHOAKJPGFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
