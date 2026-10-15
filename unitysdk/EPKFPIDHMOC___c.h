#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPKFPIDHMOC;
namespace System { class Object; }

#define EPKFPIDHMOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30EE00)
#define EPKFPIDHMOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30EE40)
#define EPKFPIDHMOC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E30EE50)

inline static constexpr unsigned int EPKFPIDHMOC___c_TypeDefinitionIndex = 29353;

	class EPKFPIDHMOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x562E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPKFPIDHMOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC___C_CTOR_OFFSET))(this);
		}

		::EPKFPIDHMOC* __cctor_b__28_0()
		{
			return ((::EPKFPIDHMOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
