#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBNKDHCIJPH;
namespace System { class Object; }

#define EBNKDHCIJPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E244540)
#define EBNKDHCIJPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E244580)
#define EBNKDHCIJPH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E244590)

inline static constexpr unsigned int EBNKDHCIJPH___c_TypeDefinitionIndex = 30071;

	class EBNKDHCIJPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBNKDHCIJPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNKDHCIJPH___C_CTOR_OFFSET))(this);
		}

		::EBNKDHCIJPH* __cctor_b__33_0()
		{
			return ((::EBNKDHCIJPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNKDHCIJPH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
