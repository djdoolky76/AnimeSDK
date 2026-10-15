#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNLMHLEACBE;
namespace System { class Object; }

#define JNLMHLEACBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E799BE0)
#define JNLMHLEACBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E799C20)
#define JNLMHLEACBE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E799C30)

inline static constexpr unsigned int JNLMHLEACBE___c_TypeDefinitionIndex = 26041;

	class JNLMHLEACBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNLMHLEACBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLMHLEACBE___C_CTOR_OFFSET))(this);
		}

		::JNLMHLEACBE* __cctor_b__23_0()
		{
			return ((::JNLMHLEACBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLMHLEACBE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
