#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNKOPCGKDD;
namespace System { class Object; }

#define ACNKOPCGKDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB1FF0)
#define ACNKOPCGKDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB2020)
#define ACNKOPCGKDD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDB2030)

inline static constexpr unsigned int ACNKOPCGKDD___c_TypeDefinitionIndex = 28136;

	class ACNKOPCGKDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACNKOPCGKDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD___C_CTOR_OFFSET))(this);
		}

		::ACNKOPCGKDD* __cctor_b__33_0()
		{
			return ((::ACNKOPCGKDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNKOPCGKDD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
