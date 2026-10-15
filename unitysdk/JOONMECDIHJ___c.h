#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOONMECDIHJ;
namespace System { class Object; }

#define JOONMECDIHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79E4F0)
#define JOONMECDIHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79E520)
#define JOONMECDIHJ___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E79E530)

inline static constexpr unsigned int JOONMECDIHJ___c_TypeDefinitionIndex = 32524;

	class JOONMECDIHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOONMECDIHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOONMECDIHJ___C_CTOR_OFFSET))(this);
		}

		::JOONMECDIHJ* __cctor_b__58_0()
		{
			return ((::JOONMECDIHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOONMECDIHJ___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
