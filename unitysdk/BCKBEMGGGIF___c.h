#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCKBEMGGGIF;
namespace System { class Object; }

#define BCKBEMGGGIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DC8D0)
#define BCKBEMGGGIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DC910)
#define BCKBEMGGGIF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8DC920)

inline static constexpr unsigned int BCKBEMGGGIF___c_TypeDefinitionIndex = 31283;

	class BCKBEMGGGIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50880);
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
