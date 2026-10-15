#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEEKOEECHB;
namespace System { class Object; }

#define CIEEKOEECHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A3F90)
#define CIEEKOEECHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A3FC0)
#define CIEEKOEECHB___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E0A3FD0)

inline static constexpr unsigned int CIEEKOEECHB___c_TypeDefinitionIndex = 26692;

	class CIEEKOEECHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIEEKOEECHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEEKOEECHB___C_CTOR_OFFSET))(this);
		}

		::CIEEKOEECHB* __cctor_b__68_0()
		{
			return ((::CIEEKOEECHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEEKOEECHB___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
