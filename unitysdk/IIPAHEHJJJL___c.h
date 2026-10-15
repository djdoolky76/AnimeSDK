#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIPAHEHJJJL;
namespace System { class Object; }

#define IIPAHEHJJJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68E4B0)
#define IIPAHEHJJJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68E4F0)
#define IIPAHEHJJJL___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E68E500)

inline static constexpr unsigned int IIPAHEHJJJL___c_TypeDefinitionIndex = 25083;

	class IIPAHEHJJJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIPAHEHJJJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPAHEHJJJL___C_CTOR_OFFSET))(this);
		}

		::IIPAHEHJJJL* __cctor_b__63_0()
		{
			return ((::IIPAHEHJJJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPAHEHJJJL___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
