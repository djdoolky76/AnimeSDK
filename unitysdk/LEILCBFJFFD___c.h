#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEILCBFJFFD;
namespace System { class Object; }

#define LEILCBFJFFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9335C0)
#define LEILCBFJFFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E933600)
#define LEILCBFJFFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E933610)

inline static constexpr unsigned int LEILCBFJFFD___c_TypeDefinitionIndex = 29856;

	class LEILCBFJFFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEILCBFJFFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD___C_CTOR_OFFSET))(this);
		}

		::LEILCBFJFFD* __cctor_b__28_0()
		{
			return ((::LEILCBFJFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
