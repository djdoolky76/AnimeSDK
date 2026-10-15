#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKHMHNOIGAB;
namespace System { class Object; }

#define IKHMHNOIGAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E674A20)
#define IKHMHNOIGAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E674A60)
#define IKHMHNOIGAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E674A70)

inline static constexpr unsigned int IKHMHNOIGAB___c_TypeDefinitionIndex = 32863;

	class IKHMHNOIGAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHMHNOIGAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB___C_CTOR_OFFSET))(this);
		}

		::IKHMHNOIGAB* __cctor_b__23_0()
		{
			return ((::IKHMHNOIGAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
