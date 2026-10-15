#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLLDHGHJLOA;
namespace System { class Object; }

#define GLLDHGHJLOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E496890)
#define GLLDHGHJLOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4968D0)
#define GLLDHGHJLOA___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E4968E0)

inline static constexpr unsigned int GLLDHGHJLOA___c_TypeDefinitionIndex = 27560;

	class GLLDHGHJLOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLDHGHJLOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLDHGHJLOA___C_CTOR_OFFSET))(this);
		}

		::GLLDHGHJLOA* __cctor_b__63_0()
		{
			return ((::GLLDHGHJLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLDHGHJLOA___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
