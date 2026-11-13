#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JADHHGHGMPH;
namespace System { class Object; }

#define JADHHGHGMPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEEE6C0)
#define JADHHGHGMPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEEE700)
#define JADHHGHGMPH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FEEE710)

inline static constexpr unsigned int JADHHGHGMPH___c_TypeDefinitionIndex = 29783;

	class JADHHGHGMPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x565E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JADHHGHGMPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH___C_CTOR_OFFSET))(this);
		}

		::JADHHGHGMPH* __cctor_b__33_0()
		{
			return ((::JADHHGHGMPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADHHGHGMPH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
