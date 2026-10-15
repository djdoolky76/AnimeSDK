#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBDHCFGGBH;
namespace System { class Object; }

#define AOBDHCFGGBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63B850)
#define AOBDHCFGGBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63B890)
#define AOBDHCFGGBH___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E63B8A0)

inline static constexpr unsigned int AOBDHCFGGBH___c_TypeDefinitionIndex = 30709;

	class AOBDHCFGGBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOBDHCFGGBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBDHCFGGBH___C_CTOR_OFFSET))(this);
		}

		::AOBDHCFGGBH* __cctor_b__63_0()
		{
			return ((::AOBDHCFGGBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBDHCFGGBH___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
