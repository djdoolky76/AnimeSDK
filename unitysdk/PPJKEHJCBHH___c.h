#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPJKEHJCBHH;
namespace System { class Object; }

#define PPJKEHJCBHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFDC3D0)
#define PPJKEHJCBHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDC410)
#define PPJKEHJCBHH___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DFDC420)

inline static constexpr unsigned int PPJKEHJCBHH___c_TypeDefinitionIndex = 31907;

	class PPJKEHJCBHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x437C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPJKEHJCBHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEHJCBHH___C_CTOR_OFFSET))(this);
		}

		::PPJKEHJCBHH* __cctor_b__48_0()
		{
			return ((::PPJKEHJCBHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEHJCBHH___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
