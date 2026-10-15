#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCENNCMLDH;
namespace System { class Object; }

#define ANCENNCMLDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB9B0)
#define ANCENNCMLDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB9F0)
#define ANCENNCMLDH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4FBA00)

inline static constexpr unsigned int ANCENNCMLDH___c_TypeDefinitionIndex = 31084;

	class ANCENNCMLDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x461F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANCENNCMLDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH___C_CTOR_OFFSET))(this);
		}

		::ANCENNCMLDH* __cctor_b__33_0()
		{
			return ((::ANCENNCMLDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
