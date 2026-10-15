#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNOKBNOIIGD;
namespace System { class Object; }

#define BNOKBNOIIGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00BA70)
#define BNOKBNOIIGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00BAB0)
#define BNOKBNOIIGD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E00BAC0)

inline static constexpr unsigned int BNOKBNOIIGD___c_TypeDefinitionIndex = 30430;

	class BNOKBNOIIGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNOKBNOIIGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOKBNOIIGD___C_CTOR_OFFSET))(this);
		}

		::BNOKBNOIIGD* __cctor_b__33_0()
		{
			return ((::BNOKBNOIIGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOKBNOIIGD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
