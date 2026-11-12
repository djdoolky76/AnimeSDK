#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNJAIHINJIK;
namespace System { class Object; }

#define BNJAIHINJIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2F67F0)
#define BNJAIHINJIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F6830)
#define BNJAIHINJIK___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F2F6840)

inline static constexpr unsigned int BNJAIHINJIK___c_TypeDefinitionIndex = 30734;

	class BNJAIHINJIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNJAIHINJIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK___C_CTOR_OFFSET))(this);
		}

		::BNJAIHINJIK* __cctor_b__48_0()
		{
			return ((::BNJAIHINJIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
