#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKMBKGCHLNE;
namespace System { class Object; }

#define DKMBKGCHLNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D9700)
#define DKMBKGCHLNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D9740)
#define DKMBKGCHLNE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1D9750)

inline static constexpr unsigned int DKMBKGCHLNE___c_TypeDefinitionIndex = 26138;

	class DKMBKGCHLNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKMBKGCHLNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMBKGCHLNE___C_CTOR_OFFSET))(this);
		}

		::DKMBKGCHLNE* __cctor_b__23_0()
		{
			return ((::DKMBKGCHLNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMBKGCHLNE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
