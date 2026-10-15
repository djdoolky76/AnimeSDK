#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBICGCEFCCI;
namespace System { class Object; }

#define OBICGCEFCCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB82090)
#define OBICGCEFCCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB820D0)
#define OBICGCEFCCI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB820E0)

inline static constexpr unsigned int OBICGCEFCCI___c_TypeDefinitionIndex = 34930;

	class OBICGCEFCCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10060);
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
