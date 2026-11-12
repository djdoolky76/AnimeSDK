#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBICGCEFCCI;
namespace System { class Object; }

#define OBICGCEFCCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A3D60)
#define OBICGCEFCCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A3DA0)
#define OBICGCEFCCI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F0A3DB0)

inline static constexpr unsigned int OBICGCEFCCI___c_TypeDefinitionIndex = 35858;

	class OBICGCEFCCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBICGCEFCCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI___C_CTOR_OFFSET))(this);
		}

		::OBICGCEFCCI* __cctor_b__23_0()
		{
			return ((::OBICGCEFCCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
