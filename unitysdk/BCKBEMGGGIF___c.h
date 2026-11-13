#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCKBEMGGGIF;
namespace System { class Object; }

#define BCKBEMGGGIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA7DBE0)
#define BCKBEMGGGIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA7DC20)
#define BCKBEMGGGIF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA7DC30)

inline static constexpr unsigned int BCKBEMGGGIF___c_TypeDefinitionIndex = 32196;

	class BCKBEMGGGIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCKBEMGGGIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKBEMGGGIF___C_CTOR_OFFSET))(this);
		}

		::BCKBEMGGGIF* __cctor_b__23_0()
		{
			return ((::BCKBEMGGGIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKBEMGGGIF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
