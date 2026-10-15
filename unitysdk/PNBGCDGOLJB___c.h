#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNBGCDGOLJB;
namespace System { class Object; }

#define PNBGCDGOLJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2BB0)
#define PNBGCDGOLJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2BF0)
#define PNBGCDGOLJB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DFB2C00)

inline static constexpr unsigned int PNBGCDGOLJB___c_TypeDefinitionIndex = 30139;

	class PNBGCDGOLJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNBGCDGOLJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB___C_CTOR_OFFSET))(this);
		}

		::PNBGCDGOLJB* __cctor_b__38_0()
		{
			return ((::PNBGCDGOLJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
