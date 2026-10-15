#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHAJMKCEEPJ;
namespace System { class Object; }

#define GHAJMKCEEPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E481D00)
#define GHAJMKCEEPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E481D40)
#define GHAJMKCEEPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E481D50)

inline static constexpr unsigned int GHAJMKCEEPJ___c_TypeDefinitionIndex = 28305;

	class GHAJMKCEEPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x165F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHAJMKCEEPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ___C_CTOR_OFFSET))(this);
		}

		::GHAJMKCEEPJ* __cctor_b__28_0()
		{
			return ((::GHAJMKCEEPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
