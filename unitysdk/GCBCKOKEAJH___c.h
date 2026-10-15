#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCBCKOKEAJH;
namespace System { class Object; }

#define GCBCKOKEAJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E408DF0)
#define GCBCKOKEAJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E408E30)
#define GCBCKOKEAJH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E408E40)

inline static constexpr unsigned int GCBCKOKEAJH___c_TypeDefinitionIndex = 33496;

	class GCBCKOKEAJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDDA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCBCKOKEAJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBCKOKEAJH___C_CTOR_OFFSET))(this);
		}

		::GCBCKOKEAJH* __cctor_b__53_0()
		{
			return ((::GCBCKOKEAJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBCKOKEAJH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
