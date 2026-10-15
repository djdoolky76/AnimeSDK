#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBCOFDDCGOL;
namespace System { class Object; }

#define HBCOFDDCGOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DFA40)
#define HBCOFDDCGOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DFA80)
#define HBCOFDDCGOL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4DFA90)

inline static constexpr unsigned int HBCOFDDCGOL___c_TypeDefinitionIndex = 33570;

	class HBCOFDDCGOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBCOFDDCGOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL___C_CTOR_OFFSET))(this);
		}

		::HBCOFDDCGOL* __cctor_b__28_0()
		{
			return ((::HBCOFDDCGOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
