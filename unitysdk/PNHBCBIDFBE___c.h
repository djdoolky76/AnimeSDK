#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNHBCBIDFBE;
namespace System { class Object; }

#define PNHBCBIDFBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB9A70)
#define PNHBCBIDFBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB9AB0)
#define PNHBCBIDFBE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFB9AC0)

inline static constexpr unsigned int PNHBCBIDFBE___c_TypeDefinitionIndex = 28569;

	class PNHBCBIDFBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNHBCBIDFBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE___C_CTOR_OFFSET))(this);
		}

		::PNHBCBIDFBE* __cctor_b__33_0()
		{
			return ((::PNHBCBIDFBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
