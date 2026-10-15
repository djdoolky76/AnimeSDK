#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPNADCDDNNP;
namespace System { class Object; }

#define PPNADCDDNNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2130)
#define PPNADCDDNNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2170)
#define PPNADCDDNNP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFB2180)

inline static constexpr unsigned int PPNADCDDNNP___c_TypeDefinitionIndex = 31218;

	class PPNADCDDNNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPNADCDDNNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP___C_CTOR_OFFSET))(this);
		}

		::PPNADCDDNNP* __cctor_b__28_0()
		{
			return ((::PPNADCDDNNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNADCDDNNP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
