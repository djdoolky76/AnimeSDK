#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKKFNODINEM;
namespace System { class Object; }

#define PKKFNODINEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF66930)
#define PKKFNODINEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF66970)
#define PKKFNODINEM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF66980)

inline static constexpr unsigned int PKKFNODINEM___c_TypeDefinitionIndex = 26942;

	class PKKFNODINEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKKFNODINEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFNODINEM___C_CTOR_OFFSET))(this);
		}

		::PKKFNODINEM* __cctor_b__18_0()
		{
			return ((::PKKFNODINEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFNODINEM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
