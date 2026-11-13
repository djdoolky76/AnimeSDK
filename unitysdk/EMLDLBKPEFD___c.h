#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMLDLBKPEFD;
namespace System { class Object; }

#define EMLDLBKPEFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206DCE90)
#define EMLDLBKPEFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206DCED0)
#define EMLDLBKPEFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x206DCEE0)

inline static constexpr unsigned int EMLDLBKPEFD___c_TypeDefinitionIndex = 31117;

	class EMLDLBKPEFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMLDLBKPEFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD___C_CTOR_OFFSET))(this);
		}

		::EMLDLBKPEFD* __cctor_b__28_0()
		{
			return ((::EMLDLBKPEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
